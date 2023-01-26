clear
% Spectral Graph Learning
% Assume it is GWSS

N = 15; % Number of nodes
threshold = 0.001; % Thresholding in A

x1 = load("new_data\303_data.mat").Y;
x1 = x1';
x1 = x1(:,2:257);
L = size(x1);
L = L(2);
Num = 16;
Layout = [14,40;28,-36;46,-56;60,-28;34,14;0,2;32,58;48,-44;42,14;54,20;18,68;-2,64;-48,4;60,4;-50,38];

Graphs = [];

%figure()

for kk = 1:(L/Num)

    X = x1(:,(kk-1)*Num+1:kk*Num);

    Cx = cov(X'); % use inbuilt function
    [eVec,eVal] = eig(Cx);

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

figure()

%{

for kk = 1:(L/Num)

    grasp_show_graph(gca,Graphs(kk),'node_text','ID','node_text_fontsize',10,'node_text_shift',4);
    xlim([-52,62]);
    ylim([-58,70]);
    sgtitle('Estimated Graph');
    colorbar
    pause(1);

end

%}

%{
X = x1;

Cx = (1/15)*(X*(X'));
[eVec,eVal] = eig(Cx);

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

objective = norm(Z,1);
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

figure()
grasp_show_graph(gca,G_hat);
title('Learnt Graph')
xlim([-52,62]);
ylim([-58,70]);
%}