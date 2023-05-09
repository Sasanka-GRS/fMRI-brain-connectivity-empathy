function Graphs_W = simWindowLearnWeighted(x1,Num,sigma,N,cutoffA,cutoffTop)

L = size(x1);
L = L(1);

%{
Graphs_A = zeros(N,N,L-Num+1);
Graphs_W = zeros(N,N,L-Num+1);
Graphs_top = zeros(N,N,L-Num+1);
%}

Graphs_W = [];

start = 1;
%last = Num;

parfor last = Num:L
    
    %% Windowing data

    xN = x1(last-Num+1:last,:);
    x = xN;

    W = zeros(N,N);

    %% Setting weights as exponential distances

    for i = 1:N
        for j = 1:N
            if(i==j)
                continue;
            end
            W(i,j) = exp(-(norm(x(:,i)-x(:,j),2))/(2*(sigma^2)));
        end
    end

    %% Thresholding
    %{
    A = W;
    [A,W,top] = thres(A,cutoffA,cutoffTop);
    %}
    W = normAdj(W);
    
    Graphs_W = [Graphs_W,W];
    %last = last  + 1;

end

Graphs_W = reshape(Graphs_W,N,N,L-Num+1);

end