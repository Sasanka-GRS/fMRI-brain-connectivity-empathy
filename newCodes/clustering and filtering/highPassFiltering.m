wstop = 0.043;
wpass = 0.051;

%% HPF

data = load("..\saved_data_voxel\303_data_voxel_N.mat").Y;
[yFIRLS,yFIREQ] = voxelHPF(data, wstop, wpass);

%% Plot

figure()
subplot(3,1,1)
plot(data.y01);
title('Original')
subplot(3,1,2)
plot(yFIRLS.y01);
title('FIR Least Squares')
subplot(3,1,3)
plot(yFIREQ.y01);
title('FIR Equiripple')
sgtitle('Compare LS and Equiripple')

figure()
plot(data.y01(:,1)/max(abs(data.y01(:,1))));
hold on
plot(2+yFIRLS.y01(:,1)/max(abs(yFIRLS.y01(:,1))));
plot(4+yFIREQ.y01(:,1)/max(abs(yFIREQ.y01(:,1))));
hold off
legend('Original','FIR Least Squares','FIR Equiripple')