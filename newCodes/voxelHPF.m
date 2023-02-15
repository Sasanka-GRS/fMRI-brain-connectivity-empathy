function [yRect, yFIR1, yFIR2, yFIRLS, yButter, yCheby] = voxelHPF(x, cutoff, cutoff2, indexCut, order)
yRect = x;
yFIR1 = x;
yFIR2 = x;
yFIRLS = x;
yButter = x;
yCheby = x;
fNames = fieldnames(x);
L = length(fieldnames(x));
for i = 1:L-1
    xi = x.(fNames{i});
    l = size(xi);
    yiFIR1 = xi;
    yiFIR2 = xi;
    yiFIRLS = xi;
    yiButter = xi;
    yiCheby = xi;
    
    Xi = fft(xi);
    Xi(1:indexCut,:) = zeros(indexCut,l(2));
    Xi(l(1)-indexCut+1:l(1),:) = zeros(indexCut,l(2));
    yiRect = real(ifft(Xi));
    FIR1 = fir1(34,cutoff,'high',chebwin(35,30));
    FIR2 = fir2(10,[0 cutoff cutoff 1],[0 0 1 1]);
    FIRLS = firls(l(1)-1,[0 cutoff cutoff2 1],[0 0 1 1]);
    Butter = butter(9,cutoff,'high');
    [b,a] = cheby1(9,0.5,43/1000,'high');
    for k = 1:l(2)
        x1 = xi(:,k);
        yiFIR1(:,k) = filter(FIR1,1,x1);
        yiFIR2(:,k) = filter(FIR2,1,x1);
        yiFIRLS(:,k) = filter(FIRLS,1,x1);
        yiButter(:,k) = filter(Butter,1,x1);
        yiCheby(:,k) = filter(b,a,x1);
    end
    yRect.(fNames{i}) = yiRect;
    yFIR1.(fNames{i}) = yiFIR1;
    yFIR2.(fNames{i}) = yiFIR2;
    yFIRLS.(fNames{i}) = yiFIRLS;
    yButter.(fNames{i}) = yiButter;
    yCheby.(fNames{i}) = yiCheby;
end
end