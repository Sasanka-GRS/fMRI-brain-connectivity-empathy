function [Graphs_W,Graphs_top,Graphs_Layout] = PearWindowLearnWeighted(XData,N,Num,Layout)

L = size(XData);
L = L(2);

Graphs_W = zeros(N,N,L-Num+1);
Graphs_top = zeros(N,N,L-Num+1);
Graphs_Layout = zeros(N,2,L-Num+1);

start = 1;
last = Num;

while(last <= L)

    X = XData(:,start:last);
    
    W = corrcoef(X');

    %A = W;
    %[W,top] = thres1(A,N,3);
    %W = normAdj(W);

    Graphs_W(:,:,start) = W;
    Graphs_Layout(:,:,start) = Layout;
    %Graphs_top(:,:,start) = top;
    
    start = start + 1;
    last = last + 1;

end

end