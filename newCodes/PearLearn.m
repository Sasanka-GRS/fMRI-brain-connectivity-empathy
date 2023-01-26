function [Graphs_W,Graphs_top,Graphs_Layout] = PearLearn(XData,N,Num,Layout)

L = size(XData);
L = L(2);

Graphs_W = zeros(N,N,L/Num);
Graphs_top = zeros(N,N,L/Num);
Graphs_Layout = zeros(N,2,L/Num);

for k = 1:(L/Num)

    X = XData(:,(k-1)*Num+1:k*Num);
    
    W = corrcoef(X');

    A = W;
    [W,top] = thres1(A,N,3);
    W = normAdj(W);

    Graphs_W(:,:,k) = W;
    Graphs_Layout(:,:,k) = Layout;
    Graphs_top(:,:,k) = top;

end

end