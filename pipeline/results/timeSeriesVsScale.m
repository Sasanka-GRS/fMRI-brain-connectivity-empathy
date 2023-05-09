%% Extract Data

Data303 = load("..\combination\combined_data\303_data_combined.mat").data;
Data375 = load("..\combination\combined_data\375_data_combined.mat").data;
Data378 = load("..\combination\combined_data\378_data_combined.mat").data;
Data797 = load("..\combination\combined_data\797_data_combined.mat").data;
Data820 = load("..\combination\combined_data\820_data_combined.mat").data;

node = load("..\extract_data\nodeLabels.mat").nodes;
scale = load("..\extract_data\rating.mat").scale;

%% Scale downsampling

scaleD = scale(1:2:end);

%% Important Region

R1 = "R13L";

N = size(Data375);
N = N(1);

time = 1:2:2*N;

%% Calculate Index

indexR1 = find(node==R1);

%% Extracting time series

Signal303 = squeeze(Data303(:,indexR1));
Signal375 = squeeze(Data375(:,indexR1));
Signal378 = squeeze(Data378(:,indexR1));
Signal797 = squeeze(Data797(:,indexR1));
Signal820 = squeeze(Data820(:,indexR1));

%% Plotting time series

figure()
subplot(5,1,1)
plot(time,Signal303);
xlabel('Time (s)')
ylabel('BOLD')
title('Insula (L) 303');
subplot(5,1,2)
plot(time,Signal375);
xlabel('Time (s)')
ylabel('BOLD')
title('Insula (L) 375');
subplot(5,1,3)
plot(time,Signal378);
xlabel('Time (s)')
ylabel('BOLD')
title('Insula (L) 378');
subplot(5,1,4)
plot(time,Signal797);
xlabel('Time (s)')
ylabel('BOLD')
title('Insula (L) 797');
subplot(5,1,5)
plot(time,Signal820);
xlabel('Time (s)')
ylabel('BOLD')
title('Insula (L) 820');
sgtitle('Variation across subjects Insula(L) BOLD vs Time')

%% Plotting BOLD vs scale

figure()
subplot(5,1,1)
scatter(scaleD,Signal303,30,'o','filled');
xlabel('Scale')
ylabel('BOLD')
title('Insula (L) 303');
subplot(5,1,2)
scatter(scaleD,Signal375,30,'o','filled');
xlabel('Scale')
ylabel('BOLD')
title('Insula (L) 375');
subplot(5,1,3)
scatter(scaleD,Signal378,30,'o','filled');
xlabel('Scale')
ylabel('BOLD')
title('Insula (L) 378');
subplot(5,1,4)
scatter(scaleD,Signal797,30,'o','filled');
xlabel('Scale')
ylabel('BOLD')
title('Insula (L) 797');
subplot(5,1,5)
scatter(scaleD,Signal820,30,'o','filled');
xlabel('Scale')
ylabel('BOLD')
title('Insula (L) 820');
sgtitle('Variation across subjects Insula(L) BOLD vs Scale')

%% Plotting BOLD vs scale for all on one plot

figure()
scatter(scaleD,Signal303,30,'o','filled');
hold on
scatter(scaleD,Signal375,30,'o','filled');
scatter(scaleD,Signal378,30,'o','filled');
scatter(scaleD,Signal797,30,'o','filled');
scatter(scaleD,Signal820,30,'o','filled');
hold off
xlabel('Scale')
ylabel('BOLD')
sgtitle('Variation across subjects Insula(L) BOLD vs Scale')
legend('303','375','378','797','820')