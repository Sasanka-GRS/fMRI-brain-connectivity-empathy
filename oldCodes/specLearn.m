%{
function Graphs = specLearn(N,threshold,x1,Num,Layout)

Graphs = [];

L = size(x1);
L = L(2);

%figure()

for kk = 1:(L/Num)

    X = x1(:,(kk-1)*Num+1:kk*Num);

    Cx = cov(X'); % use inbuilt function
    [eVec,~] = eig(Cx);

    % We have to minimize -> min ||Z||_{0} subject to Z = U \Lambda U^{T}

    Lambda = sdpvar(N,1);
    L = diag(Lambda);
    Z = eVec*L*(eVec');

    constraints = [(Z*ones(N,1))==zeros(N,1),sum(diag(Z))==N,Z==eVec*L*(eVec')];

    for i=1:N
        for j=1:N
            if(i==j)
                constraints = [constraints,Z(i,j)>=0];
                continue;
            else
                constraints = [constraints,Z(i,j)<=0];
            end
        end
    end

    objective = norm(Z,1); % See if we can use something better
    options = sdpsettings('solver','mosek');

    optimize(constraints,objective,options);
    Z_est = abs(value(Z));

    D_hat = diag(Z_est);
    A_hat = Z_est - D_hat;
    W = A_hat;
    A_hat(W>threshold) = 1;
    A_hat(W<=threshold) = 0;

    G_hat = grasp_struct; % Defining the struct variable
    G_hat.A = A_hat; % Assigning Adjacency
    % Assigning coordinates to nodes
    G_hat.layout = Layout; % Assigning coordinates for each node

    Graphs = [Graphs,G_hat];
    %{
    grasp_show_graph(gca,Graphs(kk),'node_text','ID','node_text_fontsize',10,'node_text_shift',4);
    xlim([-52,62]);
    ylim([-58,70]);
    message = ['Graph at Time ',int2str((kk-1)*2*Num+1),'s - ',int2str(kk*2*Num), 's'];
    sgtitle(message);
    %colorbar
    pause(1);
    %}

end

disp(size(Graphs))

end
%}
function Graphs = specLearn(N,x1,Num,Layout)

Graphs = [];

L = size(x1);
L = L(2);

%figure()

for kk = 1:(L/Num)

    X = x1(:,(kk-1)*Num+1:kk*Num);

    Cx = cov(X'); % use inbuilt function
    [eVec,~] = eig(Cx);

    % We have to minimize -> min ||Z||_{0} subject to Z = U \Lambda U^{T}

    Lambda = sdpvar(N,1);
    L = diag(Lambda);
    Z = eVec*L*(eVec');

    constraints = [(Z*ones(N,1))==zeros(N,1),sum(diag(Z))==N,Z==eVec*L*(eVec')];

    for i=1:N
        for j=1:N
            if(i==j)
                constraints = [constraints,Z(i,j)>=0];
                continue;
            else
                constraints = [constraints,Z(i,j)<=0];
            end
        end
    end

    objective = norm(Z,1); % See if we can use something better
    options = sdpsettings('solver','mosek');

    optimize(constraints,objective,options);
    Z_est = abs(value(Z));

    D_hat = diag(Z_est);
    A_hat = Z_est - D_hat;
    W = A_hat;
    A_hat = thres(W,N);

    G_hat = grasp_struct; % Defining the struct variable
    G_hat.A = A_hat; % Assigning Adjacency
    % Assigning coordinates to nodes
    G_hat.layout = Layout; % Assigning coordinates for each node

    Graphs = [Graphs,G_hat];

end

end