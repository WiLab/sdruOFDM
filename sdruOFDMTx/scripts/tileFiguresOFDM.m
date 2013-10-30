function positions = tileFiguresOFDM(tile,border)
% tileFiguresOFDM: Tile figures by postiion, border adds space around
% entire tiled map

screenSize  = get(0,'screensize'); % determine terminal size in pixels

% Adjust to actual visible screen size
screenSize(4) = screenSize(4) - 35;%Moves all figures down (TUNABLE)
screenSize(3) = screenSize(3) - 0;%Compresses all figures to left (TUNABLE)

numFigs = tile(1)*tile(2);

numRows = tile(1);
numColumns = tile(2);

if nargin < 2
    border = 0;
else
    screenSize(3) = screenSize(3) - 2*border;
    screenSize(4) = screenSize(4) - 2*border;
end

width = fix(screenSize(3)/numColumns) - 20; %Changes width of all figures (TUNABLE)
height = fix(screenSize(4)/numRows) - 100; %New tiled figure height (TUNABLE)

% Create positions
positions = zeros(numFigs,4);
numFigure = 0;
for iy = 1:numRows
    vertPostion = screenSize(4) - fix((iy)*screenSize(4)/numRows) + border + 50;% Move all rows up
    for ix = 1:numColumns
        horizPostion = fix((ix-1)*screenSize(3)/numColumns + 1) + border + 10;% Move all columns left
        numFigure = numFigure + 1;
        positions(numFigure,:) = [ horizPostion vertPostion width height ];
    end
end

end
