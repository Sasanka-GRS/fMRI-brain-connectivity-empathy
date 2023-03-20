%% Data
data = load("..\saved_data_voxel\303_data_voxel_N.mat").Y;
data1 = load("..\saved_data_avg\303_data_N.mat").Y;

%% Clustering with Iterative Single Reject Method
[chosenVoxels1, combinedRegions1] = voxelClusteringKMeansChoosing(data);

figure()
subplot(3,1,1)
plot(data1(:,2));
title('Simple Average');
subplot(3,1,2)
plot(combinedRegions1(:,2));
title('KMeans Agglomerative');

%% Clustering with min-distance method
scale = 0.5; % Preserve this fraction of nodes
[chosenVoxels2,combinedRegions2] = voxelClusteringISRM(data, scale);

subplot(3,1,3)
plot(combinedRegions2(:,2));
title('Iterative Single Reject Method');

sgtitle('Combined Region Data');

figure()
subplot(2,1,1)
plot(chosenVoxels1.y02);
title('KMeans Agglomerative');
subplot(2,1,2)
plot(chosenVoxels2.y02);
title('Iterative Single Reject Method');

sgtitle('Chosen voxel');

%% Clustering with DBSCAN

