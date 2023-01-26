%{
function Graphs = sparLearn(XData,N,Num,lambda,gamma,Layout)

Graphs = [];

L = size(XData);
L = L(2);


for k = 1:(L/Num)

    beta_final = [];

    for j=1:N

        beta_hat = sdpvar(N-1,1);

        X = XData(:,(k-1)*Num+1:k*Num);

        yj = X(j,:);
        X(j,:) = [];
        Yn = X;

        constraints = [beta_hat>=0];
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
    A(W >= gamma) = 1;
    A(W < gamma) = 0;

    G1 = grasp_struct; % Defining the struct variable
    G1.A = A; % Assigning Adjacency
    G1.layout = Layout; % Assigning coordinates for each node

    Graphs = [Graphs,G1];

end

end
%}
function [Graphs_W,Graphs_top,Graphs_Layout] = sparLearn(XData,N,Num,lambda,Layout)

L = size(XData);
L = L(2);

Graphs_W = zeros(N,N,L/Num);
Graphs_top = zeros(N,N,L/Num);
Graphs_Layout = zeros(N,2,L/Num);

for k = 1:(L/Num)

    beta_final = [];

    for j=1:N

        beta_hat = sdpvar(N-1,1);

        X = XData(:,(k-1)*Num+1:k*Num);

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

    Graphs_W(:,:,k) = W;
    Graphs_Layout(:,:,k) = Layout;
    Graphs_top(:,:,k) = top;

end

end