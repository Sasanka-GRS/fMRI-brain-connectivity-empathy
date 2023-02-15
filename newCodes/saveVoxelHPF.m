cutoff1 = 0.043;
cutoff2 = 0.051;
indexCut = 6;
order = 50;

%% HPF with cutoff1

data = load(".\saved_data_voxel\303_data_voxel_N.mat").Y;
[yRect, yFIR1, yFIR2, yFIRLS, yButter, yCheby] = voxelHPF(data, cutoff1, cutoff2, indexCut, order);
figure()
subplot(7,1,1)
plot(yRect.y01);
title('Box filter')
subplot(7,1,2)
plot(yFIR1.y01);
title('FIR1 filter')
subplot(7,1,3)
plot(yFIR2.y01);
title('FIR2 filter')
subplot(7,1,4)
plot(yFIRLS.y01);
title('FIRLS filter')
subplot(7,1,5)
plot(yButter.y01);
title('Butterworth filter')
subplot(7,1,6)
plot(yCheby.y01);
title('Chebyshev filter')
subplot(7,1,7)
plot(data.y01);
title('Original')

figure()
plot(yRect.y01(:,1)/max(abs(yRect.y01(:,1))));
hold on
plot(2+yFIR1.y01(:,1)/max(abs(yFIR1.y01(:,1))));
plot(4+yFIR2.y01(:,1)/max(abs(yFIR2.y01(:,1))));
plot(6+yFIRLS.y01(:,1)/max(abs(yFIRLS.y01(:,1))));
plot(8+yButter.y01(:,1)/max(abs(yButter.y01(:,1))));
plot(10+yCheby.y01(:,1)/max(abs(yCheby.y01(:,1))));
plot(12+data.y01(:,1)/max(abs(data.y01(:,1))));
hold off
legend('Box filter','FIR1 filter','FIR2 filter','FIRLS filter','Butterworth filter','Chebyshev filter','Original')