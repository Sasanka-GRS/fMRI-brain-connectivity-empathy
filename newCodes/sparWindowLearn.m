function [Graphs_W,Graphs_top,Graphs_Layout] = sparWindowLearn(XData,N,Num,lambda,Layout)

L = size(XData);
L = L(2);

Graphs_W = zeros(N,N,L-Num+1);
Graphs_top = zeros(N,N,L-Num+1);
Graphs_Layout = zeros(N,2,L-Num+1);

start = 1;
last = Num;

while (last <= L)

    beta_final = [];

    for j=1:N

        beta_hat = sdpvar(N-1,1);

        X = XData(:,start:last);

        yj = X(j,:);
        X(j,:) = [];
        Yn = X;
        
        constraints = [];
        for i = 1:N-1
            constraints = [constraints,beta_hat(i,1)>=0];
        end
        objective = norm((yj'-Yn'*beta_hat),2) + lambda*norm(beta_hat,1);
        options = sdpsettings('solver','mosek');

        optimize(constraints,objective,options);
        beta_est = value(beta_hat);
        beta_est = beta_est';

        beta_final = [beta_final;[beta_est(1:N-1 < j),0,beta_est(1:N-1 >= j)]];

    end

    W = zeros(N,N);

    for i=1:N
        for j=1:N
            W(i,j) = sqrt(beta_final(i,j)*beta_final(j,i));
        end
    end

    A = W;
    %A1 = W;
    %A = normInvAdj(W);
    [W,top] = thres1(A,N,3);
    W = normAdj(W);

    Graphs_W(:,:,start) = W;
    Graphs_Layout(:,:,start) = Layout;
    Graphs_top(:,:,start) = top;

    start = start + 1;
    last = last + 1;

end

end