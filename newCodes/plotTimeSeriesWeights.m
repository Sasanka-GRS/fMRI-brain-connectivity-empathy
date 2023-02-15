%% Extract Data

Sim303 = load(".\generated\303SimWindowWeighted_8s.mat").Graphs_W;
Pear303 = load(".\generated\303PearWindowWeighted_8s.mat").Graphs_W;
Spar303 = load(".\generated\303SparWindowWeighted_8s.mat").Graphs_W;

Sim375 = load(".\generated\1092SimWindowWeighted_8s.mat").Graphs_W;
Pear375 = load(".\generated\1092PearWindowWeighted_8s.mat").Graphs_W;
Spar375 = load(".\generated\1092SparWindowWeighted_8s.mat").Graphs_W;

nodes303 = load(".\nodes.mat").nodes303;
nodes375 = load(".\nodes.mat").nodes375;

%% Important Regions

R1 = 5;
R2 = 10;

time = 1:2:498;

%% Calculate Indices

indexR1303 = find(nodes303==R1);
indexR2303 = find(nodes303==R2);

indexR1375 = find(nodes375==R1);
indexR2375 = find(nodes375==R2);

%% Similarity 

Sim303Signal = squeeze(Sim303(indexR1303,indexR2303,:));
Sim375Signal = squeeze(Sim375(indexR1375,indexR2375,:));

figure()
subplot(2,1,1)
plot(time,Sim303Signal);
title('Similarity 303');
subplot(2,1,2)
plot(time,Sim375Signal);
title('Similarity 375');

%% Sparsity

Spar303Signal = real(squeeze(Spar303(indexR1303,indexR2303,:)));
Spar375Signal = real(squeeze(Spar375(indexR1375,indexR2375,:)));

figure()
subplot(2,1,1)
plot(time,Spar303Signal);
title('Sparsity 303');
subplot(2,1,2)
plot(time,Spar375Signal);
title('Sparsity 375');

%% Pearson 

Pear303Signal = squeeze(Pear303(indexR1303,indexR2303,:));
Pear375Signal = squeeze(Pear375(indexR1375,indexR2375,:));

figure()
subplot(2,1,1)
plot(time,Pear303Signal);
title('Pearson 303');
subplot(2,1,2)
plot(time,Pear375Signal);
title('Pearson 375');