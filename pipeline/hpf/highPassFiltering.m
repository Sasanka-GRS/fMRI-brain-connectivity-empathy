function highPassFiltering(option)

%% Set default to LS

if(nargin==0)
    option = 'LS';
end

%% Add dependencies

addpath(".\functions");

%% For subject 303

dataIn = load("..\normalize_data\normalized_data\303_data_voxel_N.mat").data;
data = hpf(dataIn,option);

save(".\hpf_data\303_data_voxel_N_hpf.mat","data");

%% For subject 375

dataIn = load("..\normalize_data\normalized_data\375_data_voxel_N.mat").data;
data = hpf(dataIn,option);

save(".\hpf_data\375_data_voxel_N_hpf.mat","data");

%% For subject 378

dataIn = load("..\normalize_data\normalized_data\378_data_voxel_N.mat").data;
data = hpf(dataIn,option);

save(".\hpf_data\378_data_voxel_N_hpf.mat","data");

%% For subject 797

dataIn = load("..\normalize_data\normalized_data\797_data_voxel_N.mat").data;
data = hpf(dataIn,option);

save(".\hpf_data\797_data_voxel_N_hpf.mat","data");

%% For subject 820

dataIn = load("..\normalize_data\normalized_data\820_data_voxel_N.mat").data;
data = hpf(dataIn,option);

save(".\hpf_data\820_data_voxel_N_hpf.mat","data");

%%

clc

end