function [W,Layout] = simLearn(x,sigma,N,Lay)

L = size(x);
L = L(1);

W = zeros(N,N);

for i = 1:N
    for j = 1:N
        if(i==j)
            continue;
        end
        W(i,j) = exp(-abs((x(i)-x(j)))/(2*(sigma^2))); % Distances
    end
end

A = W;
W = thres(A,N);
Layout = Lay;

end