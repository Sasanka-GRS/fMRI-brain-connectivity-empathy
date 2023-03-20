%% Data
data = load("..\saved_data_voxel\303_data_voxel_N.mat").Y;
data1 = load("..\saved_data_avg\303_data_N.mat").Y;

%% Clustering with K-Means
[~, combinedRegions] = voxelClusteringKMeansChoosing(data);

figure()
subplot(3,1,1)
plot(data1(:,2));
title('Simple Average');
subplot(3,1,2)
plot(combinedRegions(:,2));
title('KMeans Agglomerative');

%% Clustering with min-distance method
combinedRegions = voxelClusteringMinDist(data);

subplot(3,1,3)
plot(combinedRegions(:,2));
title('Min Distance Clustering');

sgtitle('Simple Avg vs Kmeans vs Min-Distance')

%% Clustering with Similarity Based Graph Learning and Processing

