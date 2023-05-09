%% Extract Data

Sim303 = load("..\graph_learning\graph_data\303_graph_SimWindowWeighted.mat").Graphs_W;
Pear303 = load("..\graph_learning\graph_data\303_graph_PearWindowWeighted.mat").Graphs_W;
Spar303 = load("..\graph_learning\graph_data\303_graph_SparWindowWeighted.mat").Graphs_W;
Smooth303 = load("..\graph_learning\graph_data\303_graph_SmoothWindowWeighted.mat").Graphs_W;

Sim375 = load("..\graph_learning\graph_data\375_graph_SimWindowWeighted.mat").Graphs_W;
Pear375 = load("..\graph_learning\graph_data\375_graph_PearWindowWeighted.mat").Graphs_W;
Spar375 = load("..\graph_learning\graph_data\375_graph_SparWindowWeighted.mat").Graphs_W;
Smooth375 = load("..\graph_learning\graph_data\375_graph_SmoothWindowWeighted.mat").Graphs_W;

Sim378 = load("..\graph_learning\graph_data\378_graph_SimWindowWeighted.mat").Graphs_W;
Pear378 = load("..\graph_learning\graph_data\378_graph_PearWindowWeighted.mat").Graphs_W;
Spar378 = load("..\graph_learning\graph_data\378_graph_SparWindowWeighted.mat").Graphs_W;
Smooth378 = load("..\graph_learning\graph_data\378_graph_SmoothWindowWeighted.mat").Graphs_W;

Sim797 = load("..\graph_learning\graph_data\797_graph_SimWindowWeighted.mat").Graphs_W;
Pear797 = load("..\graph_learning\graph_data\797_graph_PearWindowWeighted.mat").Graphs_W;
Spar797 = load("..\graph_learning\graph_data\797_graph_SparWindowWeighted.mat").Graphs_W;
Smooth797 = load("..\graph_learning\graph_data\797_graph_SmoothWindowWeighted.mat").Graphs_W;

Sim820 = load("..\graph_learning\graph_data\820_graph_SimWindowWeighted.mat").Graphs_W;
Pear820 = load("..\graph_learning\graph_data\820_graph_PearWindowWeighted.mat").Graphs_W;
Spar820 = load("..\graph_learning\graph_data\820_graph_SparWindowWeighted.mat").Graphs_W;
Smooth820 = load("..\graph_learning\graph_data\820_graph_SmoothWindowWeighted.mat").Graphs_W;

node = load("..\extract_data\nodeLabels.mat").nodes;

%% Important Regions

R1 = "R13L";
R2 = "R45R";

N = size(Sim375);
N = N(3);

time = 1:2:2*N;

%% Calculate Indices

indexR1 = find(node==R1);
indexR2 = find(node==R2);

%% Similarity 

Sim303Signal = squeeze(Sim303(indexR1,indexR2,:)/max(max(Sim303(indexR1,indexR2,:))));
Sim375Signal = squeeze(Sim375(indexR1,indexR2,:)/max(max(Sim375(indexR1,indexR2,:))));
Sim378Signal = squeeze(Sim378(indexR1,indexR2,:)/max(max(Sim378(indexR1,indexR2,:))));
Sim797Signal = squeeze(Sim797(indexR1,indexR2,:)/max(max(Sim797(indexR1,indexR2,:))));
Sim820Signal = squeeze(Sim820(indexR1,indexR2,:)/max(max(Sim820(indexR1,indexR2,:))));

figure()
subplot(5,1,1)
plot(time,Sim303Signal);
xlabel('Time (s)')
ylabel('W')
title('Similarity 303 Insula (L) and Triangularis (R)');
subplot(5,1,2)
plot(time,Sim375Signal);
xlabel('Time (s)')
ylabel('W')
title('Similarity 375 Insula (L) and Triangularis (R)');
subplot(5,1,3)
plot(time,Sim378Signal);
xlabel('Time (s)')
ylabel('W')
title('Similarity 378 Insula (L) and Triangularis (R)');
subplot(5,1,4)
plot(time,Sim797Signal);
xlabel('Time (s)')
ylabel('W')
title('Similarity 797 Insula (L) and Triangularis (R)');
subplot(5,1,5)
plot(time,Sim820Signal);
xlabel('Time (s)')
ylabel('W')
title('Similarity 820 Insula (L) and Triangularis (R)');
sgtitle('Variation across subjects Similarity')

%% Sparsity

Spar303Signal = real(squeeze(Spar303(indexR1,indexR2,:)/max(max(Spar303(indexR1,indexR2,:)))));
Spar375Signal = real(squeeze(Spar375(indexR1,indexR2,:)/max(max(Spar375(indexR1,indexR2,:)))));
Spar378Signal = real(squeeze(Spar378(indexR1,indexR2,:)/max(max(Spar378(indexR1,indexR2,:)))));
Spar797Signal = real(squeeze(Spar797(indexR1,indexR2,:)/max(max(Spar797(indexR1,indexR2,:)))));
Spar820Signal = real(squeeze(Spar820(indexR1,indexR2,:)/max(max(Spar820(indexR1,indexR2,:)))));

figure()
subplot(5,1,1)
plot(time,Spar303Signal);
xlabel('Time (s)')
ylabel('W')
title('Sparsity 303 Insula (L) and Triangularis (R)');
subplot(5,1,2)
plot(time,Spar375Signal);
xlabel('Time (s)')
ylabel('W')
title('Sparsity 375 Insula (L) and Triangularis (R)');
subplot(5,1,3)
plot(time,Spar378Signal);
xlabel('Time (s)')
ylabel('W')
title('Sparsity 378 Insula (L) and Triangularis (R)');
subplot(5,1,4)
plot(time,Spar797Signal);
xlabel('Time (s)')
ylabel('W')
title('Sparsity 797 Insula (L) and Triangularis (R)');
subplot(5,1,5)
plot(time,Spar820Signal);
xlabel('Time (s)')
ylabel('W')
title('Sparsity 820 Insula (L) and Triangularis (R)');
sgtitle('Variation across subjects Sparsity')

%% Pearson

Pear303Signal = squeeze(Pear303(indexR1,indexR2,:)/max(max(Pear303(indexR1,indexR2,:))));
Pear375Signal = squeeze(Pear375(indexR1,indexR2,:)/max(max(Pear375(indexR1,indexR2,:))));
Pear378Signal = squeeze(Pear378(indexR1,indexR2,:)/max(max(Pear378(indexR1,indexR2,:))));
Pear797Signal = squeeze(Pear797(indexR1,indexR2,:)/max(max(Pear797(indexR1,indexR2,:))));
Pear820Signal = squeeze(Pear820(indexR1,indexR2,:)/max(max(Pear820(indexR1,indexR2,:))));

figure()
subplot(5,1,1)
plot(time,Pear303Signal);
xlabel('Time (s)')
ylabel('W')
title('Pearson 303 Insula (L) and Triangularis (R)');
subplot(5,1,2)
plot(time,Pear375Signal);
xlabel('Time (s)')
ylabel('W')
title('Pearson 375 Insula (L) and Triangularis (R)');
subplot(5,1,3)
plot(time,Pear378Signal);
xlabel('Time (s)')
ylabel('W')
title('Pearson 378 Insula (L) and Triangularis (R)');
subplot(5,1,4)
plot(time,Pear797Signal);
xlabel('Time (s)')
ylabel('W')
title('Pearson 797 Insula (L) and Triangularis (R)');
subplot(5,1,5)
plot(time,Pear820Signal);
xlabel('Time (s)')
ylabel('W')
title('Pearson 820 Insula (L) and Triangularis (R)');
sgtitle('Variation across subjects Pearson')

%% Smoothness

Smooth303Signal = abs(squeeze(Smooth303(indexR1,indexR2,:)/max(max(Smooth303(indexR1,indexR2,:)))));
Smooth375Signal = abs(squeeze(Smooth375(indexR1,indexR2,:)/max(max(Smooth375(indexR1,indexR2,:)))));
Smooth378Signal = abs(squeeze(Smooth378(indexR1,indexR2,:)/max(max(Smooth378(indexR1,indexR2,:)))));
Smooth797Signal = abs(squeeze(Smooth797(indexR1,indexR2,:)/max(max(Smooth797(indexR1,indexR2,:)))));
Smooth820Signal = abs(squeeze(Smooth820(indexR1,indexR2,:)/max(max(Smooth820(indexR1,indexR2,:)))));

figure()
subplot(5,1,1)
plot(time,Smooth303Signal);
xlabel('Time (s)')
ylabel('W')
title('Smoothness 303 Insula (L) and Triangularis (R)');
subplot(5,1,2)
plot(time,Smooth375Signal);
xlabel('Time (s)')
ylabel('W')
title('Smoothness 375 Insula (L) and Triangularis (R)');
subplot(5,1,3)
plot(time,Smooth378Signal);
xlabel('Time (s)')
ylabel('W')
title('Smoothness 378 Insula (L) and Triangularis (R)');
subplot(5,1,4)
plot(time,Smooth797Signal);
xlabel('Time (s)')
ylabel('W')
title('Smoothness 797 Insula (L) and Triangularis (R)');
subplot(5,1,5)
plot(time,Smooth820Signal);
xlabel('Time (s)')
ylabel('W')
title('Smoothness 820 Insula (L) and Triangularis (R)');
sgtitle('Variation across subjects Smoothness')

%% For one subject all methods

figure()
subplot(4,1,1)
plot(time,Sim375Signal);
xlabel('Time (s)')
ylabel('W')
title('Similarity 303 Insula (L) and Triangularis (R)');
subplot(4,1,2)
plot(time,Spar375Signal);
xlabel('Time (s)')
ylabel('W')
title('Sparsity 303 Insula (L) and Triangularis (R)');
subplot(4,1,3)
plot(time,Pear375Signal);
xlabel('Time (s)')
ylabel('W')
title('Pearson 303 Insula (L) and Triangularis (R)');
subplot(4,1,4)
plot(time,Smooth375Signal);
xlabel('Time (s)')
ylabel('W')
title('Smoothness 303 Insula (L) and Triangularis (R)');
sgtitle('Variation across methods for subject 303')

%% All subjects all methods

figure()
subplot(4,1,1)
plot(time,Sim303Signal)
hold on
plot(time,Sim375Signal)
plot(time,Sim378Signal)
plot(time,Sim797Signal)
plot(time,Sim820Signal)
hold off
legend('303','375','378','797','820',...
    'Location','northwest','NumColumns',5)
xlabel('Time (s)')
ylabel('W')
ylim([0,1.5])
title('Similarity Insula (L) and Triangularis (R)');
subplot(4,1,2)
plot(time,Spar303Signal)
hold on
plot(time,Spar375Signal)
plot(time,Spar378Signal)
plot(time,Spar797Signal)
plot(time,Spar820Signal)
hold off
legend('303','375','378','797','820',...
    'Location','northwest','NumColumns',5)
xlabel('Time (s)')
ylabel('W')
ylim([0,1.5])
title('Sparsity Insula (L) and Triangularis (R)');
subplot(4,1,3)
plot(time,Pear303Signal)
hold on
plot(time,Pear375Signal)
plot(time,Pear378Signal)
plot(time,Pear797Signal)
plot(time,Pear820Signal)
hold off
legend('303','375','378','797','820',...
    'Location','northwest','NumColumns',5)
xlabel('Time (s)')
ylabel('W')
ylim([0,1.5])
title('Pearson Insula (L) and Triangularis (R)');
subplot(4,1,4)
plot(time,Smooth303Signal)
hold on
plot(time,Smooth375Signal)
plot(time,Smooth378Signal)
plot(time,Smooth797Signal)
plot(time,Smooth820Signal)
hold off
legend('303','375','378','797','820',...
    'Location','northwest','NumColumns',5)
xlabel('Time (s)')
ylabel('W')
ylim([0,1.5])
title('Smoothness Insula (L) and Triangularis (R)');
sgtitle('Variation across subjects and methods')