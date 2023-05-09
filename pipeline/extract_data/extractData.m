clear
close all
clc

%% For subject 303

data = [];
nodes = [];

y = load("..\data\303Data.mat").extractedData.R9.R;
data.R9_R = y(4:end-3,:);
nodes = [nodes,"9_R"];

y = load("..\data\303Data.mat").extractedData.R9.L;
data.R9_L = y(4:end-3,:);
nodes = [nodes,"9_L"];

y = load("..\data\303Data.mat").extractedData.R10.R;
data.R10_R = y(4:end-3,:);
nodes = [nodes,"10_R"];

y = load("..\data\303Data.mat").extractedData.R10.L;
data.R10_L = y(4:end-3,:);
nodes = [nodes,"10_L"];

y = load("..\data\303Data.mat").extractedData.R11.R;
data.R11_R = y(4:end-3,:);
nodes = [nodes,"11_R"];

y = load("..\data\303Data.mat").extractedData.R11.L;
data.R11_L = y(4:end-3,:);
nodes = [nodes,"11_L"];

y = load("..\data\303Data.mat").extractedData.R45.R;
data.R45_R = y(4:end-3,:);
nodes = [nodes,"45_R"];

y = load("..\data\303Data.mat").extractedData.R45.L;
data.R45_L = y(4:end-3,:);
nodes = [nodes,"45_L"];

y = load("..\data\303Data.mat").extractedData.R44.R;
data.R44_R = y(4:end-3,:);
nodes = [nodes,"44_R"];

y = load("..\data\303Data.mat").extractedData.R44.L;
data.R44_L = y(4:end-3,:);
nodes = [nodes,"44_L"];

y = load("..\data\303Data.mat").extractedData.R22.R;
data.R22_R = y(4:end-3,:);
nodes = [nodes,"22_R"];

y = load("..\data\303Data.mat").extractedData.R22.L;
data.R22_L = y(4:end-3,:);
nodes = [nodes,"22_L"];

y = load("..\data\303Data.mat").extractedData.R24.R;
data.R24_R = y(4:end-3,:);
nodes = [nodes,"24_R"];

y = load("..\data\303Data.mat").extractedData.R24.L;
data.R24_L = y(4:end-3,:);
nodes = [nodes,"24_L"];

y = load("..\data\303Data.mat").extractedData.R46.R;
data.R46_R = y(4:end-3,:);
nodes = [nodes,"46_R"];

y = load("..\data\303Data.mat").extractedData.R46.L;
data.R46_L = y(4:end-3,:);
nodes = [nodes,"46_L"];

y = load("..\data\303Data.mat").extractedData.R47.R;
data.R47_R = y(4:end-3,:);
nodes = [nodes,"47_R"];

y = load("..\data\303Data.mat").extractedData.R47.L;
data.R47_L = y(4:end-3,:);
nodes = [nodes,"47_L"];

y = load("..\data\303Data.mat").extractedData.R13.R;
data.R13_R = y(4:end-3,:);
nodes = [nodes,"13_R"];

y = load("..\data\303Data.mat").extractedData.R13.L;
data.R13_L = y(4:end-3,:);
nodes = [nodes,"13_L"];

y = load("..\data\303Data.mat").extractedData.R32.R;
data.R32_R = y(4:end-3,:);
nodes = [nodes,"32_R"];

y = load("..\data\303Data.mat").extractedData.R32.L;
data.R32_L = y(4:end-3,:);
nodes = [nodes,"32_L"];

y = load("..\data\303Data.mat").extractedData.R38.R;
data.R38_R = y(4:end-3,:);
nodes = [nodes,"38_R"];

y = load("..\data\303Data.mat").extractedData.R38.L;
data.R38_L = y(4:end-3,:);
nodes = [nodes,"38_L"];

y = load("..\data\303Data.mat").extractedData.R40.R;
data.R40_R = y(4:end-3,:);
nodes = [nodes,"40_R"];

y = load("..\data\303Data.mat").extractedData.R40.L;
data.R40_L = y(4:end-3,:);
nodes = [nodes,"40_L"];

save(".\extracted_data\303_data_voxel.mat","data");

%% For subject 375

data = [];
nodes = [];

y = load("..\data\375Data.mat").extractedData.R9.R;
data.R9_R = y(4:end-3,:);
nodes = [nodes,"9_R"];

y = load("..\data\375Data.mat").extractedData.R9.L;
data.R9_L = y(4:end-3,:);
nodes = [nodes,"9_L"];

y = load("..\data\375Data.mat").extractedData.R10.R;
data.R10_R = y(4:end-3,:);
nodes = [nodes,"10_R"];

y = load("..\data\375Data.mat").extractedData.R10.L;
data.R10_L = y(4:end-3,:);
nodes = [nodes,"10_L"];

y = load("..\data\375Data.mat").extractedData.R11.R;
data.R11_R = y(4:end-3,:);
nodes = [nodes,"11_R"];

y = load("..\data\375Data.mat").extractedData.R11.L;
data.R11_L = y(4:end-3,:);
nodes = [nodes,"11_L"];

y = load("..\data\375Data.mat").extractedData.R45.R;
data.R45_R = y(4:end-3,:);
nodes = [nodes,"45_R"];

y = load("..\data\375Data.mat").extractedData.R45.L;
data.R45_L = y(4:end-3,:);
nodes = [nodes,"45_L"];

y = load("..\data\375Data.mat").extractedData.R44.R;
data.R44_R = y(4:end-3,:);
nodes = [nodes,"44_R"];

y = load("..\data\375Data.mat").extractedData.R44.L;
data.R44_L = y(4:end-3,:);
nodes = [nodes,"44_L"];

y = load("..\data\375Data.mat").extractedData.R22.R;
data.R22_R = y(4:end-3,:);
nodes = [nodes,"22_R"];

y = load("..\data\375Data.mat").extractedData.R22.L;
data.R22_L = y(4:end-3,:);
nodes = [nodes,"22_L"];

y = load("..\data\375Data.mat").extractedData.R24.R;
data.R24_R = y(4:end-3,:);
nodes = [nodes,"24_R"];

y = load("..\data\375Data.mat").extractedData.R24.L;
data.R24_L = y(4:end-3,:);
nodes = [nodes,"24_L"];

y = load("..\data\375Data.mat").extractedData.R46.R;
data.R46_R = y(4:end-3,:);
nodes = [nodes,"46_R"];

y = load("..\data\375Data.mat").extractedData.R46.L;
data.R46_L = y(4:end-3,:);
nodes = [nodes,"46_L"];

y = load("..\data\375Data.mat").extractedData.R47.R;
data.R47_R = y(4:end-3,:);
nodes = [nodes,"47_R"];

y = load("..\data\375Data.mat").extractedData.R47.L;
data.R47_L = y(4:end-3,:);
nodes = [nodes,"47_L"];

y = load("..\data\375Data.mat").extractedData.R13.R;
data.R13_R = y(4:end-3,:);
nodes = [nodes,"13_R"];

y = load("..\data\375Data.mat").extractedData.R13.L;
data.R13_L = y(4:end-3,:);
nodes = [nodes,"13_L"];

y = load("..\data\375Data.mat").extractedData.R32.R;
data.R32_R = y(4:end-3,:);
nodes = [nodes,"32_R"];

y = load("..\data\375Data.mat").extractedData.R32.L;
data.R32_L = y(4:end-3,:);
nodes = [nodes,"32_L"];

y = load("..\data\375Data.mat").extractedData.R38.R;
data.R38_R = y(4:end-3,:);
nodes = [nodes,"38_R"];

y = load("..\data\375Data.mat").extractedData.R38.L;
data.R38_L = y(4:end-3,:);
nodes = [nodes,"38_L"];

y = load("..\data\375Data.mat").extractedData.R40.R;
data.R40_R = y(4:end-3,:);
nodes = [nodes,"40_R"];

y = load("..\data\375Data.mat").extractedData.R40.L;
data.R40_L = y(4:end-3,:);
nodes = [nodes,"40_L"];

save(".\extracted_data\375_data_voxel.mat","data");

%% For subject 378

data = [];
nodes = [];

y = load("..\data\378Data.mat").extractedData.R9.R;
data.R9_R = y(4:end-3,:);
nodes = [nodes,"9_R"];

y = load("..\data\378Data.mat").extractedData.R9.L;
data.R9_L = y(4:end-3,:);
nodes = [nodes,"9_L"];

y = load("..\data\378Data.mat").extractedData.R10.R;
data.R10_R = y(4:end-3,:);
nodes = [nodes,"10_R"];

y = load("..\data\378Data.mat").extractedData.R10.L;
data.R10_L = y(4:end-3,:);
nodes = [nodes,"10_L"];

y = load("..\data\378Data.mat").extractedData.R11.R;
data.R11_R = y(4:end-3,:);
nodes = [nodes,"11_R"];

y = load("..\data\378Data.mat").extractedData.R11.L;
data.R11_L = y(4:end-3,:);
nodes = [nodes,"11_L"];

y = load("..\data\378Data.mat").extractedData.R45.R;
data.R45_R = y(4:end-3,:);
nodes = [nodes,"45_R"];

y = load("..\data\378Data.mat").extractedData.R45.L;
data.R45_L = y(4:end-3,:);
nodes = [nodes,"45_L"];

y = load("..\data\378Data.mat").extractedData.R44.R;
data.R44_R = y(4:end-3,:);
nodes = [nodes,"44_R"];

y = load("..\data\378Data.mat").extractedData.R44.L;
data.R44_L = y(4:end-3,:);
nodes = [nodes,"44_L"];

y = load("..\data\378Data.mat").extractedData.R22.R;
data.R22_R = y(4:end-3,:);
nodes = [nodes,"22_R"];

y = load("..\data\378Data.mat").extractedData.R22.L;
data.R22_L = y(4:end-3,:);
nodes = [nodes,"22_L"];

y = load("..\data\378Data.mat").extractedData.R24.R;
data.R24_R = y(4:end-3,:);
nodes = [nodes,"24_R"];

y = load("..\data\378Data.mat").extractedData.R24.L;
data.R24_L = y(4:end-3,:);
nodes = [nodes,"24_L"];

y = load("..\data\378Data.mat").extractedData.R46.R;
data.R46_R = y(4:end-3,:);
nodes = [nodes,"46_R"];

y = load("..\data\378Data.mat").extractedData.R46.L;
data.R46_L = y(4:end-3,:);
nodes = [nodes,"46_L"];

y = load("..\data\378Data.mat").extractedData.R47.R;
data.R47_R = y(4:end-3,:);
nodes = [nodes,"47_R"];

y = load("..\data\378Data.mat").extractedData.R47.L;
data.R47_L = y(4:end-3,:);
nodes = [nodes,"47_L"];

y = load("..\data\378Data.mat").extractedData.R13.R;
data.R13_R = y(4:end-3,:);
nodes = [nodes,"13_R"];

y = load("..\data\378Data.mat").extractedData.R13.L;
data.R13_L = y(4:end-3,:);
nodes = [nodes,"13_L"];

y = load("..\data\378Data.mat").extractedData.R32.R;
data.R32_R = y(4:end-3,:);
nodes = [nodes,"32_R"];

y = load("..\data\378Data.mat").extractedData.R32.L;
data.R32_L = y(4:end-3,:);
nodes = [nodes,"32_L"];

y = load("..\data\378Data.mat").extractedData.R38.R;
data.R38_R = y(4:end-3,:);
nodes = [nodes,"38_R"];

y = load("..\data\378Data.mat").extractedData.R38.L;
data.R38_L = y(4:end-3,:);
nodes = [nodes,"38_L"];

y = load("..\data\378Data.mat").extractedData.R40.R;
data.R40_R = y(4:end-3,:);
nodes = [nodes,"40_R"];

y = load("..\data\378Data.mat").extractedData.R40.L;
data.R40_L = y(4:end-3,:);
nodes = [nodes,"40_L"];

save(".\extracted_data\378_data_voxel.mat","data");

%% For subject 797

data = [];
nodes = [];

y = load("..\data\797Data.mat").extractedData.R9.R;
data.R9_R = y(4:end-3,:);
nodes = [nodes,"9_R"];

y = load("..\data\797Data.mat").extractedData.R9.L;
data.R9_L = y(4:end-3,:);
nodes = [nodes,"9_L"];

y = load("..\data\797Data.mat").extractedData.R10.R;
data.R10_R = y(4:end-3,:);
nodes = [nodes,"10_R"];

y = load("..\data\797Data.mat").extractedData.R10.L;
data.R10_L = y(4:end-3,:);
nodes = [nodes,"10_L"];

y = load("..\data\797Data.mat").extractedData.R11.R;
data.R11_R = y(4:end-3,:);
nodes = [nodes,"11_R"];

y = load("..\data\797Data.mat").extractedData.R11.L;
data.R11_L = y(4:end-3,:);
nodes = [nodes,"11_L"];

y = load("..\data\797Data.mat").extractedData.R45.R;
data.R45_R = y(4:end-3,:);
nodes = [nodes,"45_R"];

y = load("..\data\797Data.mat").extractedData.R45.L;
data.R45_L = y(4:end-3,:);
nodes = [nodes,"45_L"];

y = load("..\data\797Data.mat").extractedData.R44.R;
data.R44_R = y(4:end-3,:);
nodes = [nodes,"44_R"];

y = load("..\data\797Data.mat").extractedData.R44.L;
data.R44_L = y(4:end-3,:);
nodes = [nodes,"44_L"];

y = load("..\data\797Data.mat").extractedData.R22.R;
data.R22_R = y(4:end-3,:);
nodes = [nodes,"22_R"];

y = load("..\data\797Data.mat").extractedData.R22.L;
data.R22_L = y(4:end-3,:);
nodes = [nodes,"22_L"];

y = load("..\data\797Data.mat").extractedData.R24.R;
data.R24_R = y(4:end-3,:);
nodes = [nodes,"24_R"];

y = load("..\data\797Data.mat").extractedData.R24.L;
data.R24_L = y(4:end-3,:);
nodes = [nodes,"24_L"];

y = load("..\data\797Data.mat").extractedData.R46.R;
data.R46_R = y(4:end-3,:);
nodes = [nodes,"46_R"];

y = load("..\data\797Data.mat").extractedData.R46.L;
data.R46_L = y(4:end-3,:);
nodes = [nodes,"46_L"];

y = load("..\data\797Data.mat").extractedData.R47.R;
data.R47_R = y(4:end-3,:);
nodes = [nodes,"47_R"];

y = load("..\data\797Data.mat").extractedData.R47.L;
data.R47_L = y(4:end-3,:);
nodes = [nodes,"47_L"];

y = load("..\data\797Data.mat").extractedData.R13.R;
data.R13_R = y(4:end-3,:);
nodes = [nodes,"13_R"];

y = load("..\data\797Data.mat").extractedData.R13.L;
data.R13_L = y(4:end-3,:);
nodes = [nodes,"13_L"];

y = load("..\data\797Data.mat").extractedData.R32.R;
data.R32_R = y(4:end-3,:);
nodes = [nodes,"32_R"];

y = load("..\data\797Data.mat").extractedData.R32.L;
data.R32_L = y(4:end-3,:);
nodes = [nodes,"32_L"];

y = load("..\data\797Data.mat").extractedData.R38.R;
data.R38_R = y(4:end-3,:);
nodes = [nodes,"38_R"];

y = load("..\data\797Data.mat").extractedData.R38.L;
data.R38_L = y(4:end-3,:);
nodes = [nodes,"38_L"];

y = load("..\data\797Data.mat").extractedData.R40.R;
data.R40_R = y(4:end-3,:);
nodes = [nodes,"40_R"];

y = load("..\data\797Data.mat").extractedData.R40.L;
data.R40_L = y(4:end-3,:);
nodes = [nodes,"40_L"];

save(".\extracted_data\797_data_voxel.mat","data");

%% For subject 820

data = [];
nodes = [];

y = load("..\data\820Data.mat").extractedData.R9.R;
data.R9_R = y(4:end-3,:);
nodes = [nodes,"9_R"];

y = load("..\data\820Data.mat").extractedData.R9.L;
data.R9_L = y(4:end-3,:);
nodes = [nodes,"9_L"];

y = load("..\data\820Data.mat").extractedData.R10.R;
data.R10_R = y(4:end-3,:);
nodes = [nodes,"10_R"];

y = load("..\data\820Data.mat").extractedData.R10.L;
data.R10_L = y(4:end-3,:);
nodes = [nodes,"10_L"];

y = load("..\data\820Data.mat").extractedData.R11.R;
data.R11_R = y(4:end-3,:);
nodes = [nodes,"11_R"];

y = load("..\data\820Data.mat").extractedData.R11.L;
data.R11_L = y(4:end-3,:);
nodes = [nodes,"11_L"];

y = load("..\data\820Data.mat").extractedData.R45.R;
data.R45_R = y(4:end-3,:);
nodes = [nodes,"45_R"];

y = load("..\data\820Data.mat").extractedData.R45.L;
data.R45_L = y(4:end-3,:);
nodes = [nodes,"45_L"];

y = load("..\data\820Data.mat").extractedData.R44.R;
data.R44_R = y(4:end-3,:);
nodes = [nodes,"44_R"];

y = load("..\data\820Data.mat").extractedData.R44.L;
data.R44_L = y(4:end-3,:);
nodes = [nodes,"44_L"];

y = load("..\data\820Data.mat").extractedData.R22.R;
data.R22_R = y(4:end-3,:);
nodes = [nodes,"22_R"];

y = load("..\data\820Data.mat").extractedData.R22.L;
data.R22_L = y(4:end-3,:);
nodes = [nodes,"22_L"];

y = load("..\data\820Data.mat").extractedData.R24.R;
data.R24_R = y(4:end-3,:);
nodes = [nodes,"24_R"];

y = load("..\data\820Data.mat").extractedData.R24.L;
data.R24_L = y(4:end-3,:);
nodes = [nodes,"24_L"];

y = load("..\data\820Data.mat").extractedData.R46.R;
data.R46_R = y(4:end-3,:);
nodes = [nodes,"46_R"];

y = load("..\data\820Data.mat").extractedData.R46.L;
data.R46_L = y(4:end-3,:);
nodes = [nodes,"46_L"];

y = load("..\data\820Data.mat").extractedData.R47.R;
data.R47_R = y(4:end-3,:);
nodes = [nodes,"47_R"];

y = load("..\data\820Data.mat").extractedData.R47.L;
data.R47_L = y(4:end-3,:);
nodes = [nodes,"47_L"];

y = load("..\data\820Data.mat").extractedData.R13.R;
data.R13_R = y(4:end-3,:);
nodes = [nodes,"13_R"];

y = load("..\data\820Data.mat").extractedData.R13.L;
data.R13_L = y(4:end-3,:);
nodes = [nodes,"13_L"];

y = load("..\data\820Data.mat").extractedData.R32.R;
data.R32_R = y(4:end-3,:);
nodes = [nodes,"32_R"];

y = load("..\data\820Data.mat").extractedData.R32.L;
data.R32_L = y(4:end-3,:);
nodes = [nodes,"32_L"];

y = load("..\data\820Data.mat").extractedData.R38.R;
data.R38_R = y(4:end-3,:);
nodes = [nodes,"38_R"];

y = load("..\data\820Data.mat").extractedData.R38.L;
data.R38_L = y(4:end-3,:);
nodes = [nodes,"38_L"];

y = load("..\data\820Data.mat").extractedData.R40.R;
data.R40_R = y(4:end-3,:);
nodes = [nodes,"40_R"];

y = load("..\data\820Data.mat").extractedData.R40.L;
data.R40_L = y(4:end-3,:);
nodes = [nodes,"40_L"];

save(".\extracted_data\820_data_voxel.mat","data");