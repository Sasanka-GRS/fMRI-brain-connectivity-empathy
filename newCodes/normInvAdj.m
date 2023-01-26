function W = normInvAdj(A)

mini = min(A(A>0));
W = A/min(mini(mini>0));

end