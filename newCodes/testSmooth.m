%% Declare Global Parameters

N = 15; % Number of nodes
M = 100; % Number of data points for each node (time instants)
alpha = 4;
beta = 0.1;
iter = 1;

%% Generate Random Graph

W_real = rand(N,N);
for i = 1:N
    W_real(i,i) = 0;
end
W_real = W_real+W_real';
L_real = diag(sum(W_real,1)) - W_real;
Layout = rand(N,2);

%% Generate Random Signal

data = rand(N,M);

%% GFT

[EVec,EVal] = eig(L_real);
data_Hat = (EVec')*data;

%% Make all signals smooth

% Reject 50% of frequencies
data_Hat(N-floor(N/2):N,:) = zeros(floor(N/2)+1,M);
data_real = EVec*data_Hat;

%% Learn graph from signals

W_learnt = smoothLearnTest(data_real,N,alpha,beta,iter);
plotting(Layout,W,zeros(N,N));