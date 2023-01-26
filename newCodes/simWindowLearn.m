function [Graphs_W,Graphs_top,Graphs_Layout] = simWindowLearn(x1,Num,sigma,N,Layout)

L = size(x1);
L = L(1);

x1 = dataNorm(x1);
Graphs_W = zeros(N,N,L-Num+1);
Graphs_top = zeros(N,N,L-Num+1);
Graphs_Layout = zeros(N,2,L-Num+1);

start = 1;
last = Num;

while (last <= L)

    xN = x1(start:last,:);
    x = xN;

    W = zeros(N,N);

    for i = 1:N
        for j = 1:N
            if(i==j)
                continue;
            end
            W(i,j) = exp((norm(x(:,i)-x(:,j),2))/(2*(sigma^2))); % Vector distances
        end
    end

    A = W;
    [W,top] = thres1(A,N,3);
    W = normAdj(W);

    Graphs_W(:,:,start) = W;
    Graphs_Layout(:,:,start) = Layout;
    Graphs_top(:,:,start) = top;

    start = start + 1;
    last = last  + 1;

end

end