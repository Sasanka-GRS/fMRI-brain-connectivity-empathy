function yFinal = voxelClusteringMinDist(x)
yPhase = x;
y = x;

yFinal = [];

fNames = fieldnames(x);
L = length(fieldnames(x));

%% Extract Phase
for i = 1:L-1
    xi = x.(fNames{i});
    l = size(xi);
    yi = xi;
    for k = 1:l(2)
        x1 = xi(:,k);
        ph1 = angle(fft(x1));
        yi(:,k) = ph1;
    end
    yPhase.(fNames{i}) = yi;
end

%% Clustering
for i = 1:L-1
    yi = yPhase.(fNames{i});
    xi = x.(fNames{i});
    l = size(xi);
    if(l(2)<2)
        y.(fNames{i}) = 1;
    else
        % Find Max Dist Nodes
        distMatrix = zeros(l(2),l(2));
        for j = 1:l(2)
            for k = 1:l(2)
                if(j~=k)
                    distMatrix(j,k) = norm(yi(:,j)-yi(:,k),2);
            
                end
            end
        end
        [~,loc] = max(distMatrix);
        mean1 = yi(:,loc(1));
        mean2 = yi(:,loc(2));
        clusters = zeros(l(2),1);
        clusters(loc(1)) = 1;
        clusters(loc(2)) = 2;
        for j = 1:l(2)
            if(j==loc(1) || j == loc(2))
                continue;
            end
            dist1 = norm(yi(:,j)-mean1,2);
            dist2 = norm(yi(:,j)-mean2,2);
            if(dist1>dist2)
                clusters(j) = 2;
            else 
                clusters(j) = 1;
            end
        end

        y.(fNames{i}) = clusters;
    end
end

%% Combination
for i = 1:L-1
    xi = x.(fNames{i});
    l = size(xi);
    if(l(2)<2)
        yFinal = [yFinal, xi];
    else
        clusters = y.(fNames{i});

        num1 = sum(clusters==1);
        num2 = sum(clusters==2);
        temp = zeros(l(1),1);
        count = 0;
        if(num1>num2)
            for j = 1:l(2)
                if(clusters(j)==1)
                    temp = temp + xi(:,j);
                    count = count + 1;
                end
            end
        else
            for j = 1:l(2)
                if(clusters(j)==2)
                    temp = temp + xi(:,j);
                    count = count + 1;
                end
            end
        end
        disp(count);
        yFinal = [yFinal, temp/count];
    end
end

end