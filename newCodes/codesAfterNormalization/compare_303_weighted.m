clear

GraphsSim = load("generated\303SimWindowWeightedNorm_8s.mat");
%GraphsSmooth = load("generated\303Smooth_8s.mat");
GraphsSpar = load("generated\303PearWindowWeightedNorm_8s.mat");
%GraphsGMRF = load("generated\303GMRF_8s.mat");
GraphsPear = load("generated\303PearWindowWeightedNorm_8s.mat");

node = load("nodes.mat").nodes303;

W_Sim = sum(GraphsSim.Graphs_W,3);
W_Spar = sum(GraphsSpar.Graphs_W,3);
W_Pear = sum(GraphsPear.Graphs_W,3);

N = 15;

A = W_Sim;
[W,topSim] = thres1(A,N,3);
W = normAdj(W);

W_Sim = W;

A = W_Spar;
[W,topSpar] = thres1(A,N,3);
W = normAdj(W);

W_Spar = W;

A = W_Pear;
[W,topPear] = thres1(A,N,3);
W = normAdj(W);

W_Pear = W;

k = 3;

figure()

subplot(2,3,1)
plotting(GraphsSim.Graphs_Layout(:,:,k),W_Sim,topSim,node);
title('Similarity','FontSize',25);
set(gca,'XColor', 'none','YColor','none')
subplot(2,3,2)
plotting(GraphsSpar.Graphs_Layout(:,:,k),W_Spar,topSpar,node);
title('Sparsity','FontSize',25);
set(gca,'XColor', 'none','YColor','none')
subplot(2,3,3)
plotting(GraphsPear.Graphs_Layout(:,:,k),W_Pear,topPear,node);
title('Pearson','FontSize',25);
set(gca,'XColor', 'none','YColor','none')
subplot(2,4,4)
plotting(GraphsPear.Graphs_Layout(:,:,k),W_Pear,topPear,node);
title('Pearson','FontSize',25);
set(gca,'XColor', 'none','YColor','none')

sgtitle('Weighted Learning using Methods','FontSize',25);
%tightfig;