clear

Num = 8; % Time Window Length

% ------------------ 303 ----------------------------

Layout = load("..\..\new_data\303_layout.mat").Layout;

data = load("..\saved_data_avg\303_data_N.mat");
X = data.Y;
XData = X';
s = size(XData);
N = s(1); % Number of nodes

[Graphs_W,Graphs_top,Graphs_Layout] = PearWindowLearn(XData,N,Num,Layout);
save(".\generated\303PearWindowNorm_8s.mat","Graphs_W","Graphs_Layout","Graphs_top");

% ------------------ 375 ----------------------------
%{
Layout = load("..\new_data\375_layout.mat").Layout;

data = load("..\new_data\375_data.mat");
X = data.Y;
XData = X';
XData = XData(:,2:257);
s = size(XData);
N = s(1); % Number of nodes

[Graphs_W,Graphs_top,Graphs_Layout] = PearLearn(XData,N,Num,Layout);
save("375Pear_8s.mat","Graphs_W","Graphs_Layout","Graphs_top");
%}