clear

% ------------------ 303 ----------------------------

x1 = load("..\new_data\303_data.mat").Y;
x1 = x1(2:257,:);
s = size(x1);
N = s(2); % Number of nodes
Num = 8; % Time window length
Layout = load("..\new_data\303_layout.mat").Layout;
sigma = 1; % Parameter determining connections (variance of gaussian distance)
% gamma = 0.8; % Parameter determining connections (Threshold)

[Graphs_W,Graphs_top,Graphs_Layout] = simLearn(x1,Num,sigma,N,Layout);
save("303Sim_8s.mat","Graphs_W","Graphs_Layout","Graphs_top");

% ------------------ 375 ----------------------------

x1 = load("..\new_data\375_data.mat").Y;
x1 = x1(2:257,:);
s = size(x1);
N = s(2); % Number of nodes
Num = 8; % Time window length
Layout = load("..\new_data\375_layout.mat").Layout;
sigma = 1; % Parameter determining connections (variance of gaussian distance)
% gamma = 0.8; % Parameter determining connections (Threshold)

[Graphs_W,Graphs_top,Graphs_Layout] = simLearn(x1,Num,sigma,N,Layout);
save("375Sim_8s.mat","Graphs_W","Graphs_Layout","Graphs_top");