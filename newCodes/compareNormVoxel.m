data = load("..\new_data\303_data_voxel.mat").data;
%Y = dataNormVoxel(data);
Y = load(".\saved_data_voxel\303_data_voxel_N.mat").Y;

figure()
subplot(2,1,1)
plot(data.y01);
subplot(2,1,2)
plot(Y.y01)