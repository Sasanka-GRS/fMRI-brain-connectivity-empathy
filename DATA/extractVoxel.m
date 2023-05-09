clc
clear

%% Read data

Y = load("completeDataOneSubject820.mat").Y;
XYZ = load("completeDataOneSubject820.mat").XYZ;

%% Read voxel locations

LOC = load("VoxelLocations.mat").LOC;

%% Declare variable names

regions = ["ACC", "Fusiform_Gyrus", "Insula", "Inferior_Parietal_Lobule", "Inferior_Temporal_Gyrus", "MCC", "Middle_Frontal_Gyrus", "Middle_Temporal_Gyrus", "Orbitalis","Opercularis", "PCC", "Posterior_Medial_Frontal", "Superior_Parietal_Lobule", "Superior_Temporal_Gyrus", "Temporal_Pole", "Triangularis"];

%% Iterate over all regions

fNames = fieldnames(LOC);
R = length(fieldnames(LOC));

extractedData = LOC;

for r = 1:R

%% Choose region

right = LOC.(fNames{r}).R;
left = LOC.(fNames{r}).L;

L = size(right);
L = L(1);

%% Set xyz location of voxels

concatenate = [];

for i=1:L
    %% Find the index with the XYZ coordinates

    coord = find(ismember(XYZ',right(i,:),'rows'));
    
    %% Reshape

    sz = size(Y);
    Y1 = reshape(Y,[],sz(4));

    %% get time series

    series1 = Y1(coord,:);

    %% Concatenate
    concatenate = [concatenate;series1];
end

concatenate = concatenate';

extractedData.(fNames{r}).R = concatenate;

L = size(left);
L = L(1);

%% Set xyz location of voxels

concatenate = [];

for i=1:L
    %% Find the index with the XYZ coordinates

    coord = find(ismember(XYZ',left(i,:),'rows'));
    
    %% Reshape

    sz = size(Y);
    Y1 = reshape(Y,[],sz(4));

    %% get time series

    series1 = Y1(coord,:);

    %% Concatenate
    concatenate = [concatenate;series1];
end

concatenate = concatenate';

extractedData.(fNames{r}).L = concatenate;

end

save("820Data.mat","extractedData");