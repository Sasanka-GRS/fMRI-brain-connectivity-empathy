function [chosenVoxels, combinedRegions] = voxelClusteringISRM(x, scale)

chosenVoxels = x;
combinedRegions = [];

yPhase = x;

fNames = fieldnames(x);
L = length(fieldnames(x));

%% Extract Phase
for i = 1:L-1
    xi = x.(fNames{i});
    l = size(xi);
    yi = xi;
    for K = 1:l(2)
        x1 = xi(:,K);
        ph1 = angle(fft(x1));
        yi(:,K) = ph1;
    end
    yPhase.(fNames{i}) = yi;
end

for i = 1:L-1
    xi = x.(fNames{i});
    yi = yPhase.(fNames{i});
    l = size(xi);
    K = floor(l(2)*(1-scale));

    if(K~=0 && l(2)>=2)
        while(l(2)>K)
            
            %% Clustering
            ZMedian = linkage(yi','single');
            clusters = cluster(ZMedian,'maxclust',2);

            %% Choosing cluster to be removed
            num1 = sum(clusters==1);
            num2 = sum(clusters==2);

            notChosenCluster = 2;

            if(num2>num1)
                notChosenCluster = 1;
            end

            %% Removing the outlier
            %{
            idx = clusters==notChosenCluster;
            lNow = size(xi);
            if(find(idx)>lNow(2))
                break;
            end
            disp('num1,num2')
            disp(num1)
            disp(num2)
            disp(' ')
            %}
            xi(:,clusters==notChosenCluster) = [];
            yi(:,clusters==notChosenCluster) = [];

            l = size(xi);
        end
    end

    chosenVoxels.(fNames{i}) = xi;
end

%% Combination
for i = 1:L-1
    xi = chosenVoxels.(fNames{i});
    l = size(xi);
    if(l(2)>1)
        xiCombined = sum(xi,2)/(l(2));
        combinedRegions = [combinedRegions, xiCombined];
    else
        combinedRegions = [combinedRegions, xi];
    end
end

end