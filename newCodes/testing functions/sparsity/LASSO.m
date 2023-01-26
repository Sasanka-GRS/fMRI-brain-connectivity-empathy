function X = LASSO(A,y,lambda,iter)

M = (A')*A;
[~,eval] = eig(M);
eval = diag(eval);
S = length(eval);
maxEval = eval(S);
alpha = 1/(2*maxEval);

XNow = (A')*y;

for i = 1:iter
    XNew = soft(2*alpha*(A')*(y-A*XNow)+XNow,alpha*lambda);
    XNow = XNew;
end

X = XNew;

end