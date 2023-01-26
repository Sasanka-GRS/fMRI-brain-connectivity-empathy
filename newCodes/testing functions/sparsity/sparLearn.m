function [W,Layout] = sparLearn(XData,lambda,N,Lay,iter)

beta_final = [];

for j=1:N

    X = XData;

    yj = X(j,:);
    X(j,:) = [];
    Yj = X;

    beta_est = LASSO(Yj',yj',lambda,iter);
    beta_est = beta_est';

    beta_final = [beta_final;[beta_est(1:N-1 < j),0,beta_est(1:N-1 >= j)]];

end

W = zeros(N,N);

for i = 1:N
    for j = 1:N
        if(i~=j)
            W(i,j) = sqrt(beta_final(i,j)*beta_final(j,i));
        end
    end
end

W = real(W);

A = W;
W = thres(A,2*N);
Layout = Lay;

end