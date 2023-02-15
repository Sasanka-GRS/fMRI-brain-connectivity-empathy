clear

%% ------------------ 303 ----------------------------
%{
x1 = load("..\new_data\303_data.mat").Y;
x1 = x1(2:257,:);
s = size(x1);
N = s(2); % Number of nodes
Num = 8; % Time window length
Layout = load("..\new_data\303_layout.mat").Layout;
sigma = 1; % Parameter determining connections (variance of gaussian distance)
% gamma = 0.8; % Parameter determining connections (Threshold)

[Graphs_W,Graphs_top,Graphs_Layout] = simWindowLearnWeighted(x1,Num,sigma,N,Layout);
save("generated\303SimWindowWeighted_8s.mat","Graphs_W","Graphs_Layout","Graphs_top");
%}

%% ------------------ 375 ----------------------------
%{
x1 = load("..\new_data\375_data.mat").Y;
x1 = x1(2:257,:);
s = size(x1);
N = s(2); % Number of nodes
Num = 8; % Time window length
Layout = load("..\new_data\375_layout.mat").Layout;
sigma = 1; % Parameter determining connections (variance of gaussian distance)
% gamma = 0.8; % Parameter determining connections (Threshold)

[Graphs_W,Graphs_top,Graphs_Layout] = simWindowLearnWeighted(x1,Num,sigma,N,Layout);
save("generated\375SimWindowWeighted_8s.mat","Graphs_W","Graphs_Layout","Graphs_top");
%}

%% ------------------ 378 ----------------------------
%{
x1 = load("..\new_data\378_data.mat").Y;
x1 = x1(2:257,:);
s = size(x1);
N = s(2); % Number of nodes
Num = 8; % Time window length
Layout = load("..\new_data\378_layout.mat").Layout;
sigma = 1; % Parameter determining connections (variance of gaussian distance)
% gamma = 0.8; % Parameter determining connections (Threshold)

[Graphs_W,Graphs_top,Graphs_Layout] = simWindowLearnWeighted(x1,Num,sigma,N,Layout);
save("generated\378SimWindowWeighted_8s.mat","Graphs_W","Graphs_Layout","Graphs_top");
%}

%% ------------------ 386 ----------------------------
%{
x1 = load("..\new_data\386_data.mat").Y;
x1 = x1(2:257,:);
s = size(x1);
N = s(2); % Number of nodes
Num = 8; % Time window length
Layout = load("..\new_data\386_layout.mat").Layout;
sigma = 1; % Parameter determining connections (variance of gaussian distance)
% gamma = 0.8; % Parameter determining connections (Threshold)

[Graphs_W,Graphs_top,Graphs_Layout] = simWindowLearnWeighted(x1,Num,sigma,N,Layout);
save("generated\386SimWindowWeighted_8s.mat","Graphs_W","Graphs_Layout","Graphs_top");
%}

%% ------------------ 797 ----------------------------
%{
x1 = load("..\new_data\797_data.mat").Y;
x1 = x1(2:257,:);
s = size(x1);
N = s(2); % Number of nodes
Num = 8; % Time window length
Layout = load("..\new_data\797_layout.mat").Layout;
sigma = 1; % Parameter determining connections (variance of gaussian distance)
% gamma = 0.8; % Parameter determining connections (Threshold)

[Graphs_W,Graphs_top,Graphs_Layout] = simWindowLearnWeighted(x1,Num,sigma,N,Layout);
save("generated\797SimWindowWeighted_8s.mat","Graphs_W","Graphs_Layout","Graphs_top");
%}

%% ------------------ 998 ----------------------------
%{
x1 = load("..\new_data\998_data.mat").Y;
x1 = x1(2:257,:);
s = size(x1);
N = s(2); % Number of nodes
Num = 8; % Time window length
Layout = load("..\new_data\998_layout.mat").Layout;
sigma = 1; % Parameter determining connections (variance of gaussian distance)
% gamma = 0.8; % Parameter determining connections (Threshold)

[Graphs_W,Graphs_top,Graphs_Layout] = simWindowLearnWeighted(x1,Num,sigma,N,Layout);
save("generated\998SimWindowWeighted_8s.mat","Graphs_W","Graphs_Layout","Graphs_top");
%}

%% ------------------ 1092 ----------------------------
%{
x1 = load("..\new_data\1092_data.mat").Y;
x1 = x1(2:257,:);
s = size(x1);
N = s(2); % Number of nodes
Num = 8; % Time window length
Layout = load("..\new_data\1092_layout.mat").Layout;
sigma = 1; % Parameter determining connections (variance of gaussian distance)
% gamma = 0.8; % Parameter determining connections (Threshold)

[Graphs_W,Graphs_top,Graphs_Layout] = simWindowLearnWeighted(x1,Num,sigma,N,Layout);
save("generated\1092SimWindowWeighted_8s.mat","Graphs_W","Graphs_Layout","Graphs_top");
%}

%% ------------------ 1093 ----------------------------
%{
x1 = load("..\new_data\1093_data.mat").Y;
x1 = x1(2:257,:);
s = size(x1);
N = s(2); % Number of nodes
Num = 8; % Time window length
Layout = load("..\new_data\1093_layout.mat").Layout;
sigma = 1; % Parameter determining connections (variance of gaussian distance)
% gamma = 0.8; % Parameter determining connections (Threshold)

[Graphs_W,Graphs_top,Graphs_Layout] = simWindowLearnWeighted(x1,Num,sigma,N,Layout);
save("generated\1093SimWindowWeighted_8s.mat","Graphs_W","Graphs_Layout","Graphs_top");
%}

%% ------------------ 1271 ----------------------------
%{
x1 = load("..\new_data\1271_data.mat").Y;
x1 = x1(2:257,:);
s = size(x1);
N = s(2); % Number of nodes
Num = 8; % Time window length
Layout = load("..\new_data\1271_layout.mat").Layout;
sigma = 1; % Parameter determining connections (variance of gaussian distance)
% gamma = 0.8; % Parameter determining connections (Threshold)

[Graphs_W,Graphs_top,Graphs_Layout] = simWindowLearnWeighted(x1,Num,sigma,N,Layout);
save("generated\1271SimWindowWeighted_8s.mat","Graphs_W","Graphs_Layout","Graphs_top");
%}

%% ------------------ 1352 ----------------------------
%{
x1 = load("..\new_data\1352_data.mat").Y;
x1 = x1(2:257,:);
s = size(x1);
N = s(2); % Number of nodes
Num = 8; % Time window length
Layout = load("..\new_data\1352_layout.mat").Layout;
sigma = 1; % Parameter determining connections (variance of gaussian distance)
% gamma = 0.8; % Parameter determining connections (Threshold)

[Graphs_W,Graphs_top,Graphs_Layout] = simWindowLearnWeighted(x1,Num,sigma,N,Layout);
save("generated\1352SimWindowWeighted_8s.mat","Graphs_W","Graphs_Layout","Graphs_top");
%}

%% ------------------ 1511 ----------------------------
%{
x1 = load("..\new_data\1511_data.mat").Y;
x1 = x1(2:257,:);
s = size(x1);
N = s(2); % Number of nodes
Num = 8; % Time window length
Layout = load("..\new_data\1511_layout.mat").Layout;
sigma = 1; % Parameter determining connections (variance of gaussian distance)
% gamma = 0.8; % Parameter determining connections (Threshold)

[Graphs_W,Graphs_top,Graphs_Layout] = simWindowLearnWeighted(x1,Num,sigma,N,Layout);
save("generated\1511SimWindowWeighted_8s.mat","Graphs_W","Graphs_Layout","Graphs_top");
%}

%% ------------------ 1603 ----------------------------
%{
x1 = load("..\new_data\1603_data.mat").Y;
x1 = x1(2:257,:);
s = size(x1);
N = s(2); % Number of nodes
Num = 8; % Time window length
Layout = load("..\new_data\1603_layout.mat").Layout;
sigma = 1; % Parameter determining connections (variance of gaussian distance)
% gamma = 0.8; % Parameter determining connections (Threshold)

[Graphs_W,Graphs_top,Graphs_Layout] = simWindowLearnWeighted(x1,Num,sigma,N,Layout);
save("generated\1603SimWindowWeighted_8s.mat","Graphs_W","Graphs_Layout","Graphs_top");
%}

%% ------------------ 1629 ----------------------------
%{
x1 = load("..\new_data\1629_data.mat").Y;
x1 = x1(2:257,:);
s = size(x1);
N = s(2); % Number of nodes
Num = 8; % Time window length
Layout = load("..\new_data\1629_layout.mat").Layout;
sigma = 1; % Parameter determining connections (variance of gaussian distance)
% gamma = 0.8; % Parameter determining connections (Threshold)

[Graphs_W,Graphs_top,Graphs_Layout] = simWindowLearnWeighted(x1,Num,sigma,N,Layout);
save("generated\1629SimWindowWeighted_8s.mat","Graphs_W","Graphs_Layout","Graphs_top");
%}