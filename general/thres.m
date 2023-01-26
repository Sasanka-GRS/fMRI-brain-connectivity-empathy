function W = thres(A)

N = size(A);
N = N(1);
S = sort(reshape(A,[N,1]));
val = S(2*N);
W = A;
W(A>=val) = 1;
W(A<val) = 0;

end