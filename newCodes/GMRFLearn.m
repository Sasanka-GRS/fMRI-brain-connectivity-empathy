function [Graphs_W,Graphs_top,Graphs_Layout] = GMRFLearn(XData,N,Num,Layout,lambda)

% Issue due to strict inequality
% Lambda increases sparsity of learnt graph

L = size(XData);
L = L(2);

Graphs_W = zeros(N,N,L/Num);
Graphs_top = zeros(N,N,L/Num);
Graphs_Layout = zeros(N,2,L/Num);

for k = 1:(L/Num)

    X = XData(:,(k-1)*Num+1:k*Num);
    
    % Optimization problem is argmin tr(L_pre*1/p*X*X^T)-log|L_pre|+lambda||W||_1
    % constraints - L_pre = diag(\sum_j w_ij)-W+I/sigma^2
    % W - adjacency
    % L_pre is precision matrix for multi-variate gaussian that generates X
    % lambda - regularization parameter
    % sigma^2 is priori feature variance

    L_pre = sdpvar(N,N);
    W_hat = sdpvar(N,N);
    sigma_hat = sdpvar(1);
    L_sup = sdpvar(N,N);
    
    constraints = [];

    for i = 1:N
        for j = 1:N
            if(i~=j)
                constraints = [constraints, W_hat(i,j)>=0];
                constraints = [constraints,L_pre(i,j)==L_pre(j,i)]; % verify
            else
                constraints = [constraints, W_hat(i,i)==0];
            end
        end
    end

    E_hat = eig(L_pre);
    for i = 1:N
        constriants = [constraints, E_hat(i)>0]; % Not able to get strict inequality
    end

    constraints = [constraints, sigma_hat>0]; % Not able to get strict inequality
    L_sup = diag(sum(W_hat,2))-W_hat+eye(N)/sigma_hat;

    for i = 1:N
        for j = 1:N
            constraints = [constraints, L_pre(i,j)==L_sup(i,j)];
        end
    end

    % Problem is - argmin tr(L_pre*1/p*X*X^T)-log|L_pre|+lambda||W||_1
    objective = sum(diag(L_pre*(X*X')/Num)) - log(det(L_pre)) + (lambda/Num)*norm(W_hat,1);
    options = sdpsettings('solver','sdpt3');

    optimize(constraints,objective,options); % Gets all NaN
    %optimize(constraints,objective);

    W = value(W_hat);

    A = W;
    [W,top] = thres1(A,N,3);
    W = normAdj(W);

    Graphs_W(:,:,k) = W;
    Graphs_Layout(:,:,k) = Layout;
    Graphs_top(:,:,k) = top;

end

end