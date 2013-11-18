function supportpkg = usrpr_radio_info()
%USRPR_RADIO_INFO Return Communications System Toolbox Support Package for USRP(R) Radio information.

%   Copyright 2013 The MathWorks, Inc.

supportpkg = hwconnectinstaller.SupportPackage();
supportpkg.Name          = 'USRP(R) Radio';
supportpkg.Version       = '5.0';
supportpkg.Platform      = 'PCWIN,PCWIN64,GLNXA64,MACI64';
supportpkg.Visible       = '1';
supportpkg.FwUpdate      = '';
supportpkg.Url           = 'http://www.mathworks.com';
supportpkg.DownloadUrl   = 'http://sharepoint/dev/spc/verdeploy/installer/Documents/target_packages';
supportpkg.LicenseUrl    = '';
supportpkg.BaseProduct   = 'Communications System Toolbox';
supportpkg.FullName      = 'Communications System Toolbox Support Package for USRP(R) Radio';
supportpkg.DisplayName      = 'USRP(R) Radio';
supportpkg.CustomLicense = 'yes';
supportpkg.CustomLicenseNotes = 'This utility enables you to download and install the third party software listed above. This software contains open source software licensed under the terms of the General Public License and other licenses. Consult each file for the specific license that applies to that file.\n\nIf you click ''Install'' on the next screen, you will be downloading and installing the software listed above.\n\nIf you click ''Cancel'' you will not be downloading and installing the software.';
supportpkg.ShowSPLicense = false;
supportpkg.Folder        = 'sdru';
supportpkg.Release       = '(R2013a)';
supportpkg.DownloadDir   = '/tmp/MATLAB/SupportPackages/R2013a/downloads';
supportpkg.InstallDir    = '/tmp/MATLAB/SupportPackages/R2013a';
supportpkg.IsDownloaded  = 1;
supportpkg.IsInstalled   = 1;
supportpkg.RootDir       = '/tmp/MATLAB/SupportPackages/R2013a/sdru';
supportpkg.DemoXml       = 'sdrudemos/demos.xml';
supportpkg.FwUpdate      = '';
supportpkg.Path{1}      = '/tmp/MATLAB/SupportPackages/R2013a/sdru';
supportpkg.Path{2}      = '/tmp/MATLAB/SupportPackages/R2013a/sdru/usrp_uhd_mapi';
supportpkg.Path{3}      = '/tmp/MATLAB/SupportPackages/R2013a/sdru/sdrudemos';
supportpkg.Path{4}      = '/tmp/MATLAB/SupportPackages/R2013a/sdru/uhdapps';
supportpkg.Path{5}      = '/tmp/MATLAB/SupportPackages/R2013a/sdru/fpgatarget';
supportpkg.Path{6}      = '/tmp/MATLAB/SupportPackages/R2013a/sdru/bin/glnxa64';

% Third party software information
supportpkg.TpPkg(1) = hwconnectinstaller.ThirdPartyPackage('USRP(R) source code', 'https://github.com/EttusResearch/UHD-Mirror');
supportpkg.TpPkg(1).Url        = 'https://github.com/EttusResearch/UHD-Mirror';
supportpkg.TpPkg(1).DownloadUrl = 'https://github.com/EttusResearch/UHD-Mirror/zipball/release_003_004_002';
supportpkg.TpPkg(1).LicenseUrl = '';
supportpkg.TpPkg(1).FileName = 'EttusResearch-UHD-Mirror-release_003_004_002-0-g7f44d83.zip';
supportpkg.TpPkg(1).DestDir = '';
supportpkg.TpPkg(1).Installer = '';
supportpkg.TpPkg(1).Archive = 'EttusResearch-UHD-Mirror-release_003_004_002-0-g7f44d83.zip';
supportpkg.TpPkg(1).DownloadDir = '/tmp/MATLAB/SupportPackages/R2013a/downloads';
supportpkg.TpPkg(1).InstallDir = '/tmp/MATLAB/SupportPackages/R2013a';
supportpkg.TpPkg(1).IsDownloaded = 1;
supportpkg.TpPkg(1).IsInstalled = 1;
supportpkg.TpPkg(1).InstallCmd = '';
supportpkg.TpPkg(1).RemoveCmd = 'matlab:rmdir(fullfile(''$(INSTALLDIR)'',''EttusResearch-UHD-Mirror-ad12df0''), ''s'')';
supportpkg.TpPkg(1).RootDir = '/tmp/MATLAB/SupportPackages/R2013a';
