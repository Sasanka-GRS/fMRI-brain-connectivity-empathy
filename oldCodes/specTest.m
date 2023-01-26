clear

Num = 8; % Time Window Length

% ------------------ 303 ----------------------------

x1 = load("new_data\303_data.mat").Y;
x1 = x1';
x1 = x1(:,2:257);
s = size(x1);
N = s(1); % Number of nodes
Layout = load("new_data\303_layout.mat").Layout;

Graphs = specLearn(N,x1,Num,Layout);
save("303Spec_8s.mat","Graphs");

% ------------------ 375 ----------------------------

x1 = load("new_data\375_data.mat").Y;
x1 = x1';
x1 = x1(:,2:257);
s = size(x1);
N = s(1); % Number of nodes
Layout = load("new_data\375_layout.mat").Layout;

Graphs = specLearn(N,x1,Num,Layout);
save("375Spec_8s.mat","Graphs");