clear

Num = 8; % Time Window Length

%% ------------------ 303 ----------------------------
%{
Layout = load("..\new_data\303_layout.mat").Layout;

data = load("..\new_data\303_data.mat");
X = data.Y;
XData = X';
XData = XData(:,2:257);
s = size(XData);
N = s(1); % Number of nodes

[Graphs_W,Graphs_top,Graphs_Layout] = PearWindowLearnWeighted(XData,N,Num,Layout);
save("generated\303PearWindowWeighted_8s.mat","Graphs_W","Graphs_Layout","Graphs_top");
%}
%% ------------------ 375 ----------------------------
%{
Layout = load("..\new_data\375_layout.mat").Layout;

data = load("..\new_data\375_data.mat");
X = data.Y;
XData = X';
XData = XData(:,2:257);
s = size(XData);
N = s(1); % Number of nodes

[Graphs_W,Graphs_top,Graphs_Layout] = PearWindowLearnWeighted(XData,N,Num,Layout);
save("generated\375PearWindowWeighted_8s.mat","Graphs_W","Graphs_Layout","Graphs_top");
%}

%% ------------------ 378 ----------------------------
%{
Layout = load("..\new_data\378_layout.mat").Layout;

data = load("..\new_data\378_data.mat");
X = data.Y;
XData = X';
XData = XData(:,2:257);
s = size(XData);
N = s(1); % Number of nodes

[Graphs_W,Graphs_top,Graphs_Layout] = PearWindowLearnWeighted(XData,N,Num,Layout);
save("generated\378PearWindowWeighted_8s.mat","Graphs_W","Graphs_Layout","Graphs_top");
%}

%% ------------------ 386 ----------------------------
%{
Layout = load("..\new_data\386_layout.mat").Layout;

data = load("..\new_data\386_data.mat");
X = data.Y;
XData = X';
XData = XData(:,2:257);
s = size(XData);
N = s(1); % Number of nodes

[Graphs_W,Graphs_top,Graphs_Layout] = PearWindowLearnWeighted(XData,N,Num,Layout);
save("generated\386PearWindowWeighted_8s.mat","Graphs_W","Graphs_Layout","Graphs_top");
%}

%% ------------------ 797 ----------------------------
%{
Layout = load("..\new_data\797_layout.mat").Layout;

data = load("..\new_data\797_data.mat");
X = data.Y;
XData = X';
XData = XData(:,2:257);
s = size(XData);
N = s(1); % Number of nodes

[Graphs_W,Graphs_top,Graphs_Layout] = PearWindowLearnWeighted(XData,N,Num,Layout);
save("generated\797PearWindowWeighted_8s.mat","Graphs_W","Graphs_Layout","Graphs_top");
%}

%% ------------------ 998 ----------------------------
%{
Layout = load("..\new_data\998_layout.mat").Layout;

data = load("..\new_data\998_data.mat");
X = data.Y;
XData = X';
XData = XData(:,2:257);
s = size(XData);
N = s(1); % Number of nodes

[Graphs_W,Graphs_top,Graphs_Layout] = PearWindowLearnWeighted(XData,N,Num,Layout);
save("generated\998PearWindowWeighted_8s.mat","Graphs_W","Graphs_Layout","Graphs_top");
%}

%% ------------------ 1092 ----------------------------
%{
Layout = load("..\new_data\1092_layout.mat").Layout;

data = load("..\new_data\1092_data.mat");
X = data.Y;
XData = X';
XData = XData(:,2:257);
s = size(XData);
N = s(1); % Number of nodes

[Graphs_W,Graphs_top,Graphs_Layout] = PearWindowLearnWeighted(XData,N,Num,Layout);
save("generated\1092PearWindowWeighted_8s.mat","Graphs_W","Graphs_Layout","Graphs_top");
%}

%% ------------------ 1093 ----------------------------
%{
Layout = load("..\new_data\1093_layout.mat").Layout;

data = load("..\new_data\1093_data.mat");
X = data.Y;
XData = X';
XData = XData(:,2:257);
s = size(XData);
N = s(1); % Number of nodes

[Graphs_W,Graphs_top,Graphs_Layout] = PearWindowLearnWeighted(XData,N,Num,Layout);
save("generated\1093PearWindowWeighted_8s.mat","Graphs_W","Graphs_Layout","Graphs_top");
%}

%% ------------------ 1271 ----------------------------
%{
Layout = load("..\new_data\1271_layout.mat").Layout;

data = load("..\new_data\1271_data.mat");
X = data.Y;
XData = X';
XData = XData(:,2:257);
s = size(XData);
N = s(1); % Number of nodes

[Graphs_W,Graphs_top,Graphs_Layout] = PearWindowLearnWeighted(XData,N,Num,Layout);
save("generated\1271PearWindowWeighted_8s.mat","Graphs_W","Graphs_Layout","Graphs_top");
%}

%% ------------------ 1352 ----------------------------
%{
Layout = load("..\new_data\1352_layout.mat").Layout;

data = load("..\new_data\1352_data.mat");
X = data.Y;
XData = X';
XData = XData(:,2:257);
s = size(XData);
N = s(1); % Number of nodes

[Graphs_W,Graphs_top,Graphs_Layout] = PearWindowLearnWeighted(XData,N,Num,Layout);
save("generated\1352PearWindowWeighted_8s.mat","Graphs_W","Graphs_Layout","Graphs_top");
%}

%% ------------------ 1511 ----------------------------
%{
Layout = load("..\new_data\1511_layout.mat").Layout;

data = load("..\new_data\1511_data.mat");
X = data.Y;
XData = X';
XData = XData(:,2:257);
s = size(XData);
N = s(1); % Number of nodes

[Graphs_W,Graphs_top,Graphs_Layout] = PearWindowLearnWeighted(XData,N,Num,Layout);
save("generated\1511PearWindowWeighted_8s.mat","Graphs_W","Graphs_Layout","Graphs_top");
%}

%% ------------------ 1603 ----------------------------
%{
Layout = load("..\new_data\1603_layout.mat").Layout;

data = load("..\new_data\1603_data.mat");
X = data.Y;
XData = X';
XData = XData(:,2:257);
s = size(XData);
N = s(1); % Number of nodes

[Graphs_W,Graphs_top,Graphs_Layout] = PearWindowLearnWeighted(XData,N,Num,Layout);
save("generated\1603PearWindowWeighted_8s.mat","Graphs_W","Graphs_Layout","Graphs_top");
%}

%% ------------------ 1629 ----------------------------
%{
Layout = load("..\new_data\1629_layout.mat").Layout;

data = load("..\new_data\1629_data.mat");
X = data.Y;
XData = X';
XData = XData(:,2:257);
s = size(XData);
N = s(1); % Number of nodes

[Graphs_W,Graphs_top,Graphs_Layout] = PearWindowLearnWeighted(XData,N,Num,Layout);
save("generated\1629PearWindowWeighted_8s.mat","Graphs_W","Graphs_Layout","Graphs_top");
%}