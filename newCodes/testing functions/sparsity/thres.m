function W = thres(A,k)

N = size(A);
N = N(1);
P = triu(A,1);
S = sort(reshape(P.',1,[]),'descend'); % symmetric, upper triangle
val = S(k);
K = k-1;
while val==0 && K>0
    val = S(K);
    K = K-1;
end
W = A;
W(A>=val) = 1;
W(A<val) = 0;

end