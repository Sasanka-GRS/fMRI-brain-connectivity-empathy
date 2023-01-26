clear

N = 15;

x1 = load("new_data\303_data.mat").Y;
x1 = x1(2:257,:);
L = size(x1);
L = L(1);
Num = 16;
Layout = [14,40;28,-36;46,-56;60,-28;34,14;0,2;32,58;48,-44;42,14;54,20;18,68;-2,64;-48,4;60,4;-50,38];

% ------------------------------ Time = 2 ----------------------------

Graphs = [];

x1 = dataNorm(x1);

for k = 1:(L/Num)
    
    xN = x1((k-1)*Num+1:k*Num,:);
    x = xN;
    %x = average(xN);
    sigma = 1; % Parameter determining connections (variance of gaussian distance)
    gamma = 0.8; % Parameter determining connections (Threshold)

    W = zeros(N,N);

    for i = 1:N
        for j = 1:N
            if(i==j)
                continue;
            end
            W(i,j) = exp((-(x(i,:)*(x(j,:)'))^2)/2*(sigma^2)); % Vector distances
        end
    end

    A = W;
    W(A>=gamma) = 1;
    W(A<gamma) = 0;

    G = grasp_struct; % Defining the struct variable
    G.A = W; % Assigning Adjacency
    G.layout = Layout; % Assigning coordinates for each node
    G.node_names = {"1","2","3","4","5","6","7","8","9","10","11","12","13","14","15"};

    Graphs = [Graphs,G];

end

figure()

for k = 1:(L/Num)

    grasp_show_graph(gca,Graphs(k),'node_values',x,'node_text','ID','node_text_fontsize',10,'node_text_shift',4);
    xlim([-52,62]);
    ylim([-58,70]);
    message = ['Graph at Time ',int2str((k-1)*2*Num+1),'s - ',int2str(k*2*Num), 's'];
    sgtitle(message);
    %colorbar
    pause(1);

end
%{
% ------------------------------ Time = 100 ----------------------------

x = x1(100,:);
x = dataNorm(x);

sigma = 1;
gamma = 0.998;

W = zeros(N,N);

for i = 1:N
    for j = 1:N
        if(i==j)
            continue;
        end
        W(i,j) = exp((-(x(i)-x(j))^2)/2*(sigma^2));
    end
end

A = W;
W(A>=gamma) = 1;
W(A<gamma) = 0;

G = grasp_struct; % Defining the struct variable
G.A = W; % Assigning Adjacency
G.layout = Layout; % Assigning coordinates for each node

figure()
grasp_show_graph(gca,G,'node_values',x);
xlim([-52,62]);
ylim([-58,70]);
sgtitle('Generated Graph');
colorbar
%}