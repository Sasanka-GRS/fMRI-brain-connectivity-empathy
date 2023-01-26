function [] = learn(subject,window,sigmaSim,lambdaSpar)

% Figure with weights only
name = ['new_data\',int2str(subject),'_data.mat'];
lay = ['new_data\',int2str(subject),'_layout.mat'];
outsim = [int2str(subject),'Sim_',int2str(window),'s.mat'];
outspar = [int2str(subject),'Spar_',int2str(window),'s.mat'];
outspec = [int2str(subject),'Spec_',int2str(window),'s.mat'];

% ------------------ sim ----------------------------

x1 = load(name).Y;
x1 = x1(2:257,:);
s = size(x1);
N = s(2); % Number of nodes
Layout = load(lay).Layout;
%sigmaSim = 1; % Parameter determining connections (variance of gaussian distance)
% gamma = 0.8; % Parameter determining connections (Threshold)

Graphs = simLearn(x1,window,sigmaSim,N,Layout); % Gaussian is redundant
save(outsim,"Graphs");

% ------------------ spar ----------------------------

% lambda = 2.5; % Optimization Parameter
Layout = load(lay).Layout;

data = load(name);
X = data.Y;
XData = X';
XData = XData(:,2:257);
s = size(XData);
N = s(1); % Number of nodes

Graphs = sparLearn(XData,N,window,lambdaSpar,Layout);
save(outspar,"Graphs");

% ------------------ spec ----------------------------

x1 = load(name).Y;
x1 = x1';
x1 = x1(:,2:257);
s = size(x1);
N = s(1); % Number of nodes
Layout = load(lay).Layout;

Graphs = specLearn(N,x1,window,Layout);
save(outspec,"Graphs");

end