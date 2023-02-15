
%% Clustering with inbuilt algorithms

data = load(".\saved_data_voxel\303_data_voxel_N.mat").Y;
[yMedian, yCentroid, yKMeans] = voxelClusteringInbuilt(data);

data1 = load(".\saved_data_avg\303_data_N.mat").Y;

figure()
subplot(4,1,1)
plot(data1(:,1));
title('Simple Average');
subplot(4,1,2)
plot(yMedian(:,1));
title('Median Agglomerative');
subplot(4,1,3)
plot(yCentroid(:,1))
title('Centroid Agglomerative');
subplot(4,1,4)
plot(yKMeans(:,1))
title('KMeans Agglomerative');

%% Clustering with min-distance method

data = load(".\saved_data_voxel\303_data_voxel_N.mat").Y;
yMinDistance = voxelClusteringMinDist(data);

data1 = load(".\saved_data_avg\303_data_N.mat").Y;

figure()
subplot(2,1,1)
plot(data1);
title('Simple Average');
subplot(2,1,2)
plot(yMinDistance);
title('Min Distance Clustering');

%% Clustering with Similarity Based Graph Learning and Processing

