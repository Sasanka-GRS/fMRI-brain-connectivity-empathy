clear

alpha = 4; % Optimization Parameter
beta = 10; % Sparsity Parameter
Num = 8; % Time Window Length
iter = 1000; % Number of iterations

% ------------------ 303 ----------------------------

Layout = load("..\new_data\303_layout.mat").Layout;

data = load("..\new_data\303_data.mat");
X = data.Y;
XData = X';
XData = XData(:,2:257);
s = size(XData);
N = s(1); % Number of nodes

[Graphs_W,Graphs_top,Graphs_Layout] = smoothWindowLearn(XData,N,Num,alpha,beta,Layout,iter);
save("generated\303SmoothWindow_8s.mat","Graphs_W","Graphs_Layout","Graphs_top");

% ------------------ 375 ----------------------------
%{
Layout = load("..\new_data\375_layout.mat").Layout;

data = load("..\new_data\375_data.mat");
X = data.Y;
XData = X';
XData = XData(:,2:257);
s = size(XData);
N = s(1); % Number of nodes

[Graphs_W,Graphs_top,Graphs_Layout] = smoothLearn(XData,N,Num,alpha,beta,Layout,iter);
save("375Smooth_8s.mat","Graphs_W","Graphs_Layout","Graphs_top");
%}