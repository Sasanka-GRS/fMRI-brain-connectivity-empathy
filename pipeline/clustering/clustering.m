function clustering(option1,option2)

%% Set default to LS

if(nargin==0)
    option1 = 'KM';
    option2 = 3;
elseif (nargin==1 && strcmp(option1,'KM'))
    option2 = 3;
elseif (nargin==1 && strcmp(option1,'ISRM'))
    option2 = 0.5;
end

%% Add dependencies

addpath(".\functions");

%% For subject 303

dataIn = load("..\hpf\hpf_data\303_data_voxel_N_hpf.mat").data;
data = clusterMine(dataIn,option1,option2);

save(".\clustered_data\303_data_clustered.mat","data");

%% For subject 375

dataIn = load("..\hpf\hpf_data\375_data_voxel_N_hpf.mat").data;
data = clusterMine(dataIn,option1,option2);

save(".\clustered_data\375_data_clustered.mat","data");

%% For subject 378

dataIn = load("..\hpf\hpf_data\378_data_voxel_N_hpf.mat").data;
data = clusterMine(dataIn,option1,option2);

save(".\clustered_data\378_data_clustered.mat","data");

%% For subject 797

dataIn = load("..\hpf\hpf_data\797_data_voxel_N_hpf.mat").data;
data = clusterMine(dataIn,option1,option2);

save(".\clustered_data\797_data_clustered.mat","data");

%% For subject 820

dataIn = load("..\hpf\hpf_data\820_data_voxel_N_hpf.mat").data;
data = clusterMine(dataIn,option1,option2);

save(".\clustered_data\820_data_clustered.mat","data");

end

