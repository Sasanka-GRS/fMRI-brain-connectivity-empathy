function Graphs_W = sparWindowLearnWeighted(XData,Num,lambda,N,cutoffA,cutoffTop)

L = size(XData);
L = L(2);

Graphs_W = [];
Graphs_top = [];

start = 1;
%last = Num;

parfor last = Num:L

    %% Starting with NULL to append further

    beta_final = [];

    %% Repeating optimization solving N times

    for j=1:N

        beta_hat = sdpvar(N-1,1);

        X = XData(:,last-Num+1:last);

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

    %% Making it symmetric

    W = zeros(N,N);

    for i=1:N
        for j=1:N
            W(i,j) = sqrt(beta_final(i,j)*beta_final(j,i));
        end
    end

    %% Thresholding
    %{
    A = W;
    [A,W,top] = thres(A,cutoffA,cutoffTop);
    %}

    W = normAdj(W);
    
    Graphs_W = [Graphs_W,W];
    %Graphs_top(:,:,start) = top;

end

Graphs_W = reshape(Graphs_W,N,N,L-Num+1);

end
