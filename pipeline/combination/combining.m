function combining(option)

%% Set default to SA

if(nargin==0)
    option = 'SA';
end

%% Add dependencies

addpath(".\functions");

%% For subject 303

dataIn = load("..\clustering\clustered_data\303_data_clustered.mat").data;
data = combine(dataIn,option);

save(".\combined_data\303_data_combined.mat","data");

%% For subject 375

dataIn = load("..\clustering\clustered_data\375_data_clustered.mat").data;
data = combine(dataIn,option);

save(".\combined_data\375_data_combined.mat","data");

%% For subject 378

dataIn = load("..\clustering\clustered_data\378_data_clustered.mat").data;
data = combine(dataIn,option);

save(".\combined_data\378_data_combined.mat","data");

%% For subject 797

dataIn = load("..\clustering\clustered_data\797_data_clustered.mat").data;
data = combine(dataIn,option);

save(".\combined_data\797_data_combined.mat","data");

%% For subject 820

dataIn = load("..\clustering\clustered_data\820_data_clustered.mat").data;
data = combine(dataIn,option);

save(".\combined_data\820_data_combined.mat","data");

end