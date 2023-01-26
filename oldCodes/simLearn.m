%{
function Graphs = simLearn(x1,Num,sigma,gamma,N,Layout)

Graphs = [];

L = size(x1);
L = L(1);

x1 = dataNorm(x1);

for k = 1:(L/Num)

    xN = x1((k-1)*Num+1:k*Num,:);
    x = xN;
    %x = average(xN);
    %sigma = 1; % Parameter determining connections (variance of gaussian distance)
    %gamma = 0.8; % Parameter determining connections (Threshold)

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

    Graphs = [Graphs,G];

end

end
%}
function Graphs = simLearn(x1,Num,sigma,N,Layout)

Graphs = [];

L = size(x1);
L = L(1);

x1 = dataNorm(x1);

for k = 1:(L/Num)

    xN = x1((k-1)*Num+1:k*Num,:);
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
    W = thres(A,N);

    G = grasp_struct; % Defining the struct variable
    G.A = W; % Assigning Adjacency
    G.layout = Layout; % Assigning coordinates for each node

    Graphs = [Graphs,G];

end

end