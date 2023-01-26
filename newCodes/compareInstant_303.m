% Compare the 3 methods we have

GraphsSim = load("303Sim_8s.mat");
GraphsSmooth = load("303Smooth_8s.mat");
GraphsSpar = load("303Spar_8s.mat");
GraphsGMRF = load("303GMRF_8s.mat");
GraphsPear = load("303Pear_8s.mat");

Asim = GraphsSim(1).Graphs_W;
Asmooth = GraphsSmooth(1).Graphs_W;
Aspar = GraphsSpar(1).Graphs_W;
AGMRF = GraphsGMRF(1).Graphs_W;
APear = GraphsPear(1).Graphs_W;
Asim = Asim(:,:,5);
Asmooth = Asmooth(:,:,5);
Aspar = Aspar(:,:,5);
AGMRF = AGMRF(:,:,5);
APear = APear(:,:,5);

N = size(Asim);
N = N(1);

Matrices = zeros(N,N,5);
Matrices(:,:,1) = Asim;
Matrices(:,:,2) = Asmooth;
Matrices(:,:,3) = Aspar;
Matrices(:,:,4) = AGMRF;
Matrices(:,:,5) = APear;

compare = zeros(5);

for i=1:5
    for j=1:5
        compare(i,j) = norm(Matrices(:,:,i)-Matrices(:,:,j),'fro');
    end
end

T = array2table(compare,'VariableNames',{'Similarity','Sparsity','Smoothness','GMRF','Pearson'},'RowName',{'Similarity','Sparsity','Smoothness','GMRF','Pearson'});
disp(T);