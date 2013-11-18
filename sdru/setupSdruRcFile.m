function y = setupSdruRcFile(installFolder)
%setupSdruRcFile Update MATLAB resource file to use USRP(R) radios on MAC platform.
%   setupSdruRcFile(InstallFolder) updates the MATLAB .matlab7rc.sh
%   resource file on the MAC platform, in order to use Communications
%   System Toolbox Support Package for USRP(R) Radio. On platforms other
%   than the MAC, no changes are made.
%
%   InstallFolder must be the path to the folder in which Communications
%   System Toolbox Support Package for USRP(R) Radio was installed.  If not
%   specified, InstallFolder is the MATLAB working folder (pwd).
%
%   If the .matlab7rc.sh file is found, appends necessary definitions for
%   running Communications System Toolbox Support Package for USRP(R)
%   Radio.  If the file is not found, a copy of the file is created in the
%   user's $HOME folder if it exists.  Otherwise the file is created in the
%   current MATLAB working folder.
%
%   MATLAB uses the resource file to define environment variables, and will
%   search for it in several locations in the following order:
%      1: the current MATLAB working folder
%      2: the user's $HOME folder, if defined
%      3: the "bin" folder below matlabroot
%
%   No modifications to the file in $MATLAB/bin are ever made by this
%   utility.  Modifications are only made to a copy in the current folder
%   or in $HOME.  If the file is only found in $MATLAB/bin, it is copied to
%   $HOME and modifications are made to that new copy.
%
%   MATLAB must be restarted if modifications are made.  Messages are
%   provided indicating whether a copy of the file has been made in $HOME,
%   and if any modifications to the file have been made.
%
%   If Communications System Toolbox Support Package for USRP(R) Radio is
%   reinstalled to a new folder, the existing resource file is updated to
%   reflect the new installation folder.  Only one installation of
%   Communications System Toolbox Support Package for USRP(R) Radio is
%   supported at a time; older installations will cease to work after the
%   latest installation is completed.  This utility can be run manually
%   with the appropriate folder name in order to reactivate an earlier
%   installation.
%
%   Optionally returns the folder name of the .matlab7rc.sh file currently
%   in use.
%   USRP is a trademark of National Instruments Corp.

%   Copyright 2011-2012 The MathWorks, Inc.
if nargin<1
    installFolder = fullfile(pwd, 'sdru');
end

% Update the resource file as needed.
fileName = '.matlab7rc.sh';
rcFullFile = updateRcFile(fileName,installFolder);

% Optional return of resource file name to caller.
if nargout>0
    y = rcFullFile;
end

end

function rcFullFile = updateRcFile(fileName,installFolder)
% Update resource file as needed to add USRP support library as a
% dynamic load library.  This is only needed on the MAC platform
% currently.
%
% If resource file has the library definition present, and the path
% is up to date, no changes are made.
%
% If the resource file has the library definition present, but the
% path is stale, it is updated.
%
% If the resource file does not have the library definition
% present, and the resource file is in the current folder or in
% $HOME, the definition is appended to the end of the resource
% file.
%
% If the resource file does not have the library definition
% present, and the resource file is in the matlabroot, it is copied
% to $HOME and the definition is appended to the end of the
% resource file.

% Define constant strings for resource file. DO NOT CHANGE THESE BANNERS. 
% These are banners that we used in previous releases.
rc.usrpOldBannersStart = {'# START: Communications for USRP', ...
                    '# START: Target for Use with USRP\(TM\) Hardware', ...
                    '# START: Target for Use with USRP\(R\) Hardware', ...
                    '# START: Target for Use with USRP\(R\) Radio', ...
                    '# START: Communications System Toolbox Support Package for USRP\(R\) Radio'};
rc.usrpOldBannersEnd   = {'# END: Communications for USRP', ...
                    '# END: Target for Use with USRP\(TM\) Hardware', ...
                    '# END: Target for Use with USRP\(R\) Hardware', ...
                    '# END: Target for Use with USRP\(R\) Radio', ...
                    '# END: Communications System Toolbox Support Package for USRP\(R\) Radio'};
 
% Even if the package/product name changes, do not change following banners
rc.usrpBannerStart = '# START: USRP(R) Radio Support';
rc.usrpBannerEnd   = '# END: USRP(R) Radio Support';
rc.usrpToken       = '_USRP_DYLD_PATH_';

% Create list of resource file folder locations.
filePaths = determinePossibleFolderLocations;

% See if RC file exists in one of the predefined locations.
[rcFullFile,locationIdx] = locateRcFile(fileName,filePaths);

% Changes to resource file only needed on Mac This conditional return is
% NOT essential, as the changes made to the resource file are themselves
% conditioned on the Mac platform.  But we do this for expedience and to
% remove the need to touch/copy the file on other platforms.
if ~ismac
    return % xxx early return!
end

% Installation folder must already exist.
if ~exist(installFolder,'dir')
    error(message('sdru:setupSdruRcFile:NoInstallFolder'));
end

% Determine if restarting MATLAB is required.
% It's needed if the USRP definition is not already in place and
% points to the proper folder.
exitNeeded = true;

if isempty(rcFullFile)
    % No Rc file present.
    % Create one in the local folder and add content
    rcFullFile = fullfile(filePaths{1},fileName);
    appendUsrpRcContentToFile(rcFullFile,installFolder,rc);
    
    % Feedback to user:
    fprintf('\n');
    fprintf('A new MATLAB resource file "%s" was created.\n',rcFullFile);
else
    % Rc file found.
    % Add USRP content if not already present.
    [hasToken,tokenLine] = doesUsrpRcContentExist(rcFullFile,rc.usrpToken);
    if hasToken
        % USRP content exists in resource file.
        % Is the folder specified in the token definition up-to-date?
        %
        oldPath = extractLibraryFolderString(tokenLine);
        newPath = makeLibraryFolderString(installFolder);
        if strcmp(oldPath,newPath)
            % No change made, so no need to restart MATLAB
            exitNeeded = false;
        else
            % USRP was previously installed, but the library folder name
            % has changed.
            rewriteUsrpRcContents(rcFullFile,installFolder,rc);
        end
    else
        % USRP content does not exist in RC file.
        % If RC file is in . or in $HOME, we can append to it.
        % If RC file is in $MATLAB/bin, we can't.
        %
        if locationIdx == 3
            % We should not append to the $MATLAB/bin.  This keeps that
            % copy of the file "pristine" so it can be copied again in the
            % future without the USRP information in it.
            %
            % Also, since we know an RC file does not exist in the local
            % folder, we can simply copy the $MATLAB/bin file here and
            % append to that copy.
            rcFullFile = copyResourceFile(fileName,filePaths);
        end
        
        % We can now append content to file
        appendUsrpRcContentToFile(rcFullFile,installFolder,rc);
    end
end

if exitNeeded
    fprintf('\n');
    fprintf('The MATLAB resource file "%s" was modified \nfor Communications System Toolbox Support Package for USRP(R) Radio.\n',rcFullFile);
    fprintf('You must exit MATLAB in order for changes to the file to take effect.\n');
    fprintf('Communications System Toolbox Support Package for USRP(R) Radio will not work correctly unless MATLAB is restarted.\n\n');
end
end

function filePaths = determinePossibleFolderLocations
% Return cell-vector of possible resource file folder locations, in a
% specific order: {current folder, home folder, matlabroot folder}

dotFolder = '.'; % xxx Should we use dot (generically) or pwd (specifically)?
homeFolder = getenv('HOME');
if isempty(homeFolder)
    % If $HOME is not defined, replace it with dotFolder
    homeFolder = dotFolder;
end
binFolder = fullfile(matlabroot,'bin'); %#ok<MCMLR>
filePaths = {dotFolder, homeFolder, binFolder};

end

function [fullName,locationIdx] = locateRcFile(fileName,filePaths)
% Return fully-qualified name of resource file if it exists, or an empty
% string otherwise.
%
% Optionally return index into filePaths corresponding to the folder in
% which the resource file was located.

% File we wish to locate

% Enumerate the folders in which the file can live,
% doing so in "priority order":
N = numel(filePaths);

% Find the file
for i = 1:N
    fullName = fullfile(filePaths{i},fileName);
    if exist(fullName,'file')
        locationIdx = i;
        return
    end
end

% Return empty if not found
locationIdx = [];
fullName = '';

end

function [y,tline] = doesUsrpRcContentExist(rcFullFile,usrpToken)
% Return true if USRP definitions exist in file.
% Optionally return full line of text in which token is found.

[fid,msg] = fopen(rcFullFile,'rt');
if fid==-1
    error(msg);
end

% Search for usrpToken string
foundToken = false;
while ~foundToken
    tline = fgetl(fid);
    if ischar(tline)
        % Search for token
        foundToken = ~isempty(strfind(tline,usrpToken));
    else
        break % end of file, or error while reading
    end
end
fclose(fid);
y = foundToken;
end

function str = makeLibraryFolderString(installFolder)
% Return USRP library folder string.
str = fullfile(installFolder,'bin','maci64');
end

function str = extractLibraryFolderString(tokenLine)
% Token string is from the current .matlab7rc.sh file.  It is the
% full line of text including the usrpToken definition, and the
% folder name that it is set to.  An example is:
%
%   _USRP_DYLD_PATH_="c:\temp/sdru/bin/maci64"
%
% We return the folder name as defined between the quotation marks.
% If no quotation marks appear, or other than two appear, str is
% returned as an empty string.
str = ''; % in case of failure
idx = find(tokenLine=='"');
if numel(idx)==2
    str = tokenLine(idx(1)+1:idx(2)-1);
end
end

function appendUsrpRcContentToFile(rcFullFile,installFolder,rc)
% Add content to Rc file required for running Communications System Toolbox
% Support Package for USRP(R) Radio. Assumes file is open and positioned to
% the appropriate point so new lines can be added.

% fileMode='at': Append to end of file, text-mode
%
% NOTE: 't' is only needed if this is a PC, but we this function is
%       for a MAC.  So it's not really needed.

% Determine if "write" attribute is enabled.
% If not, we must enable it temporarily, then disable it.
[success,attr] = fileattrib(rcFullFile);
if ~success
    error(attr);
end
toggleWrite = attr.UserWrite==0;
if toggleWrite
    [success,msg] = fileattrib(rcFullFile,'+w'); % force writable
    if ~success
        error(msg);
    end
end

[fid,msg] = fopen(rcFullFile,'at');
if fid==-1
    error(msg);
end
% NOTE: Blank lines are NOT allows in the RC file!
%       Must use a comment char (#) to skip lines
fprintf(fid,'%s',createUsrpDefinitionString(installFolder,rc));
fclose(fid);

if toggleWrite
    [success,msg] = fileattrib(rcFullFile,'-w'); % revoke writable
    if ~success
        error(msg);
    end
end
end

function str = createUsrpDefinitionString(installFolder,rc)
% Return shell-script program that adds the dynamic load library for
% use with Communications System Toolbox Support Package for USRP(R) Radio as a string.

s = StringBuffer;
s.addcr(rc.usrpBannerStart);
s.addcr('  case "$ARCH" in');
s.addcr('  mac|maci|maci64)');
s.addcr('      %s="%s"',rc.usrpToken,makeLibraryFolderString(installFolder));
s.addcr('      if [ "$DYLD_LIBRARY_PATH" != "" ]; then');
s.addcr('          DYLD_LIBRARY_PATH=$%s:$DYLD_LIBRARY_PATH',rc.usrpToken);
s.addcr('      else');
s.addcr('          DYLD_LIBRARY_PATH="$%s"',rc.usrpToken);
s.addcr('      fi');
s.addcr('      ;;');
s.addcr('  esac');
s.addcr('%s',rc.usrpBannerEnd);
str = char(s);

end

function status = rewriteUsrpRcContents(rcFullFile,installFolder,rc)
% Update existing resource file to have new library folder definition.
% Returns true if successful.  May fail if expected start/end strings are
% not identified in resource file.

status = false;

s = StringBuffer;
s.readfile(rcFullFile);
str = char(s);
usrpBannerStartRegExp = strrep(rc.usrpBannerStart, '(', '\(');
usrpBannerStartRegExp = strrep(usrpBannerStartRegExp, ')', '\)');
searchStrings = [rc.usrpOldBannersStart usrpBannerStartRegExp];
startIdxVec = regexp(str,searchStrings);
found = false;
for p=1:length(startIdxVec)
  if ~isempty(startIdxVec{p})
    found = true;
    startIdx = startIdxVec{p};
    break;
  end
end

if ~found
    return;
end

usrpBannerEndRegExp = strrep(rc.usrpBannerStart, '(', '\(');
usrpBannerEndRegExp = strrep(usrpBannerEndRegExp, ')', '\)');
searchStrings = [rc.usrpOldBannersEnd usrpBannerEndRegExp];
endIdxVec = regexp(str,searchStrings);
for p=1:length(endIdxVec)
  if ~isempty(endIdxVec)
    endIdx = endIdxVec{p};
    break;
  end
end
endIdx = endIdx + numel(searchStrings{p});

% Change string
clear(s);
s.add(str(1:startIdx-1)); % has CRs in it
s.add(createUsrpDefinitionString(installFolder,rc)); % has CRs in it
s.add(str(endIdx+1:end)); % has CRs in it

% Determine if "write" attribute is enabled.
% If not, we must enable it temporarily, then disable it.
[success,attr] = fileattrib(rcFullFile);
if ~success
    error(attr);
end
toggleWrite = attr.UserWrite==0;
if toggleWrite
    [success,msg] = fileattrib(rcFullFile,'+w'); % force writable
    if ~success
        error(msg);
    end
end

% Overwrite file
write(s,rcFullFile);

if toggleWrite
    [success,msg] = fileattrib(rcFullFile,'-w'); % revoke writable
    if ~success
        error(msg);
    end
end

end

function rcFullFile = copyResourceFile(fileName,filePaths)
% Copy resource file from $MATLAB/bin to current $HOME folder.

src = fullfile(filePaths{3},fileName);
rcFullFile = fullfile(filePaths{2},fileName);
[success,msg] = copyfile(src,rcFullFile);
if ~success
    error(msg);
end

% Feedback to user:
fprintf('\n');
fprintf('The MATLAB resource file "%s" was copied to the folder "%s".\n', ...
    fileName,filePaths{2});

end

% [EOF]
