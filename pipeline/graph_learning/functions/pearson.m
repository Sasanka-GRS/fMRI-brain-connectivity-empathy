function pearson(windowSize,cutoffA_string,cutoffTop,subject)

%% Set default parameters

if(nargin==0)
    windowSize = 8;
    cutoffA_string = 'N';
    cutoffTop = 3;
elseif(nargin==1)
    cutoffA_string = 'N';
    cutoffTop = 3;
end

Num = windowSize; % Time window length

%% ------------------ subject ----------------------------

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

Graphs_W = pearWindowLearnWeighted(x1,Num,N,cutoffA,cutoffTop);

s1 = ".\graph_data\";
s2 = "_graph_PearWindowWeighted.mat";
sub = s1+subject+s2;
save(sub,"Graphs_W");

end