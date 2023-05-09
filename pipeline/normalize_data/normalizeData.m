clear
close all
clc

%% Add dependencies

addpath(".\functions");

%% For subject 303

data = load("..\extract_data\extracted_data\303_data_voxel.mat").data;
data = dataNormVoxel(data);
save(".\normalized_data\303_data_voxel_N.mat","data");

%% For subject 375

data = load("..\extract_data\extracted_data\375_data_voxel.mat").data;
data = dataNormVoxel(data);
save(".\normalized_data\375_data_voxel_N.mat","data");

%% For subject 378

data = load("..\extract_data\extracted_data\378_data_voxel.mat").data;
data = dataNormVoxel(data);
save(".\normalized_data\378_data_voxel_N.mat","data");

%% For subject 797

data = load("..\extract_data\extracted_data\797_data_voxel.mat").data;
data = dataNormVoxel(data);
save(".\normalized_data\797_data_voxel_N.mat","data");

%% For subject 820

data = load("..\extract_data\extracted_data\820_data_voxel.mat").data;
data = dataNormVoxel(data);
save(".\normalized_data\820_data_voxel_N.mat","data");