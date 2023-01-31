function y = voxelCombinationPhaseless(x)
y = [];
fNames = fieldnames(x);
L = length(fieldnames(x));
for i = 1:L-1
    xi = x.(fNames{i});
    yi = xi;
    l = size(xi);
    for k = 1:l(2)
        x1 = fft(xi(:,k));
        Y = abs(ifft(abs(x1)));
        yi(:,k) = Y;
    end
    Yi = sum(yi,2);
    y = [y,Yi];
end
end