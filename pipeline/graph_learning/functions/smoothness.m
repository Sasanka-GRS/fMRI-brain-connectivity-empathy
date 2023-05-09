function smoothness(windowSize,alpha,beta,iter,cutoffA_string,cutoffTop,subject)

%% Set default parameters

if(nargin==0)
    windowSize = 8;
    alpha = 4;
    beta = 10;
    iter = 1000;
    cutoffA_string = 'N';
    cutoffTop = 3;
elseif(nargin==4)
    cutoffA_string = 'N';
    cutoffTop = 3;
end

Num = windowSize; % Time window length

%% ------------------ 303 ----------------------------

s1 = "..\combination\combined_data\";
s2 = "_data_combined.mat";
sub = s1+subject+s2;

x1 = load(sub).data;
s = size(x1);
N = s(2); % Number of nodes

x1 = x1';

cutoffA = N;
if(strcmp(cutoffA_string,'2N'))
    cutoffA = 2*N;
end

Graphs_W = smoothWindowLearnWeighted(x1,Num,alpha,beta,iter,N,cutoffA,cutoffTop);
s1 = ".\graph_data\";
s2 = "_graph_SmoothWindowWeighted.mat";
sub = s1+subject+s2;
save(sub,"Graphs_W");

end