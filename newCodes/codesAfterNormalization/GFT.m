clear

x1 = load("..\saved_data_avg\303_data_N.mat").Y;
GraphsSim = load("generated\303SimWindowNorm_8s.mat");
%GraphsSmooth = load("generated\303SmoothWindow_8s.mat");
GraphsSpar = load("generated\303SparWindowNorm_8s.mat");
%GraphsGMRF = load("generated\303GMRFWindow_8s.mat");
GraphsPear = load("generated\303PearWindowNorm_8s.mat");

LP = [ones(1,5),zeros(1,10)]';
BP = [zeros(1,5),ones(1,5),zeros(1,5)]';
HP = [zeros(1,10),ones(1,5)]';
P = 3; % Number of Top Nodes

N1 = size(GraphsSim.Graphs_W);
N = N1(3);

LPSignalsSim = zeros(N1(1),N);
BPSignalsSim = zeros(N1(1),N);
HPSignalsSim = zeros(N1(1),N);

start = 1;
last = 8;

while (last <= 255)
    data = x1(start:last,:);
    data = sum(data,1)';
    
    L = diag(sum(GraphsSim.Graphs_W(:,:,start),1)) - GraphsSim.Graphs_W(:,:,start);
    [eVec,eVal] = eig(L);
    
    GFTSignal = eVec\data;
    
    LPGFTSignal = GFTSignal.*LP;
    LPSignal = eVec*LPGFTSignal;
    BPGFTSignal = GFTSignal.*BP;
    BPSignal = eVec*BPGFTSignal;
    HPGFTSignal = GFTSignal.*HP;
    HPSignal = eVec*HPGFTSignal;
    
    LPSignalsSim(:,start) = LPSignal;
    BPSignalsSim(:,start) = BPSignal;
    HPSignalsSim(:,start) = HPSignal;

    start = start+1;
    last = last+1;
end

%{
N1 = size(GraphsSmooth.Graphs_W);
N = N1(3);

LPSignalsSmooth = zeros(N1(1),N);
BPSignalsSmooth = zeros(N1(1),N);
HPSignalsSmooth = zeros(N1(1),N);

start = 1;
last = 8;

while (last <= 255)
    data = x1(start:last,:);
    data = sum(data,1)';
    
    L = diag(sum(GraphsSmooth.Graphs_W(:,:,start),1)) - GraphsSmooth.Graphs_W(:,:,start);
    [eVec,eVal] = eig(L);
    
    GFTSignal = eVec\data;
    
    LPGFTSignal = GFTSignal.*LP;
    LPSignal = eVec*LPGFTSignal;
    BPGFTSignal = GFTSignal.*BP;
    BPSignal = eVec*BPGFTSignal;
    HPGFTSignal = GFTSignal.*HP;
    HPSignal = eVec*HPGFTSignal;
    
    LPSignalsSmooth(:,start) = LPSignal;
    BPSignalsSmooth(:,start) = BPSignal;
    HPSignalsSmooth(:,start) = HPSignal;

    start = start+1;
    last = last+1;
end
%}

N1 = size(GraphsSpar.Graphs_W);
N = N1(3);

LPSignalsSpar = zeros(N1(1),N);
BPSignalsSpar = zeros(N1(1),N);
HPSignalsSpar = zeros(N1(1),N);

start = 1;
last = 8;

while (last <= 255)
    data = x1(start:last,:);
    data = sum(data,1)';
    
    L = diag(sum(GraphsSpar.Graphs_W(:,:,start),1)) - GraphsSpar.Graphs_W(:,:,start);
    [eVec,eVal] = eig(L);
    
    GFTSignal = eVec\data;
    
    LPGFTSignal = GFTSignal.*LP;
    LPSignal = eVec*LPGFTSignal;
    BPGFTSignal = GFTSignal.*BP;
    BPSignal = eVec*BPGFTSignal;
    HPGFTSignal = GFTSignal.*HP;
    HPSignal = eVec*HPGFTSignal;
    
    LPSignalsSpar(:,start) = LPSignal;
    BPSignalsSpar(:,start) = BPSignal;
    HPSignalsSpar(:,start) = HPSignal;

    start = start+1;
    last = last+1;
end

N1 = size(GraphsPear.Graphs_W);
N = N1(3);

LPSignalsPear = zeros(N1(1),N);
BPSignalsPear = zeros(N1(1),N);
HPSignalsPear = zeros(N1(1),N);

start = 1;
last = 8;

while (last <= 255)
    data = x1(start:last,:);
    data = sum(data,1)';
    
    L = diag(sum(GraphsPear.Graphs_W(:,:,start),1)) - GraphsPear.Graphs_W(:,:,start);
    [eVec,eVal] = eig(L);
    
    GFTSignal = eVec\data;
    
    LPGFTSignal = GFTSignal.*LP;
    LPSignal = eVec*LPGFTSignal;
    BPGFTSignal = GFTSignal.*BP;
    BPSignal = eVec*BPGFTSignal;
    HPGFTSignal = GFTSignal.*HP;
    HPSignal = eVec*HPGFTSignal;
    
    LPSignalsPear(:,start) = LPSignal;
    BPSignalsPear(:,start) = BPSignal;
    HPSignalsPear(:,start) = HPSignal;

    start = start+1;
    last = last+1;
end

% Get the max valued nodes in red color

for i=1:249
    data = LPSignalsSim(:,i);
    LPSignalsSim(:,i) = thresData(data,P);
    data = BPSignalsSim(:,i);
    BPSignalsSim(:,i) = thresData(data,P);
    data = HPSignalsSim(:,i);
    HPSignalsSim(:,i) = thresData(data,P);

    %{
    data = LPSignalsSmooth(:,i);
    LPSignalsSmooth(:,i) = thresData(data,P);
    data = BPSignalsSmooth(:,i);
    BPSignalsSmooth(:,i) = thresData(data,P);
    data = HPSignalsSmooth(:,i);
    HPSignalsSmooth(:,i) = thresData(data,P);
    %}

    data = LPSignalsSpar(:,i);
    LPSignalsSpar(:,i) = thresData(data,P);
    data = BPSignalsSpar(:,i);
    BPSignalsSpar(:,i) = thresData(data,P);
    data = HPSignalsSpar(:,i);
    HPSignalsSpar(:,i) = thresData(data,P);

    data = LPSignalsPear(:,i);
    LPSignalsPear(:,i) = thresData(data,P);
    data = BPSignalsPear(:,i);
    BPSignalsPear(:,i) = thresData(data,P);
    data = HPSignalsPear(:,i);
    HPSignalsPear(:,i) = thresData(data,P);

end

save("generated\303SimWindowGFTNorm_8s.mat","LPSignalsSim","BPSignalsSim","HPSignalsSim");
%save("generated\303SmoothWindowGFT_8s.mat","LPSignalsSmooth","BPSignalsSmooth","HPSignalsSmooth");
save("generated\303SparWindowGFTNorm_8s.mat","LPSignalsSpar","BPSignalsSpar","HPSignalsSpar");
save("generated\303PearWindowGFTNorm_8s.mat","LPSignalsPear","BPSignalsPear","HPSignalsPear");