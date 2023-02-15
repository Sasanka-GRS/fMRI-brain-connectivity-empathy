function [yMedianFinal, yCentroidFinal, yKMeansFinal] = voxelClusteringInbuilt(x)
yPhase = x;
yMedian = x;
yCentroid = x;
yKMeans = x;

yMedianFinal = [];
yCentroidFinal = [];
yKMeansFinal = [];

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
         yMedian.(fNames{i}) = 1;
         yCentroid.(fNames{i}) = 1;
         yKMeans.(fNames{i}) = 1;
    else
        % Median
        ZMedian = linkage(yi','median');
        clustersMedian = cluster(ZMedian,'maxclust',2);
        
        % Centroid
        ZMedian = linkage(yi','centroid');
        clustersCentroid = cluster(ZMedian,'maxclust',2);

        % K-Means
        clustersKMeans = kmeans(yi',2);

        yMedian.(fNames{i}) = clustersMedian;
        yCentroid.(fNames{i}) = clustersCentroid;
        yKMeans.(fNames{i}) = clustersKMeans;

        num1Median = sum(clustersMedian==1);
        num2Median = sum(clustersMedian==2);
        temp = zeros(l(1),1);
        count = 0;
        if(num1Median>num2Median)
            for j = 1:l(2)
                if(clustersMedian(j)==1)
                    temp = temp + xi(:,j);
                    count = count + 1;
                end
            end
        else
            for j = 1:l(2)
                if(clustersMedian(j)==2)
                    temp = temp + xi(:,j);
                    count = count + 1;
                end
            end
        end
        yMedianFinal = [yMedianFinal, temp/count];
    end
end

%% Combination

for i = 1:L-1
    xi = x.(fNames{i});
    l = size(xi);
    if(l(2)<2)
         yMedianFinal = [yMedianFinal, xi];
         yCentroidFinal = [yCentroidFinal, xi];
         yKMeansFinal = [yKMeansFinal, xi];
    else
        clustersMedian = yMedian.(fNames{i});
        clustersCentroid = yCentroid.(fNames{i});
        clustersKMeans = yKMeans.(fNames{i});
        
        % Median
        num1Median = sum(clustersMedian==1);
        num2Median = sum(clustersMedian==2);
        temp = zeros(l(1),1);
        count = 0;
        if(num1Median>num2Median) % Intra Class Variances
            for j = 1:l(2)
                if(clustersMedian(j)==1)
                    temp = temp + xi(:,j);
                    count = count + 1;
                end
            end
        else
            for j = 1:l(2)
                if(clustersMedian(j)==2)
                    temp = temp + xi(:,j);
                    count = count + 1;
                end
            end
        end
        yMedianFinal = [yMedianFinal, temp/count];

        % Centroid
        num1Centroid = sum(clustersCentroid==1);
        num2Centroid = sum(clustersCentroid==2);
        temp = zeros(l(1),1);
        count = 0;
        if(num1Centroid>num2Centroid)
            for j = 1:l(2)
                if(clustersCentroid(j)==1)
                    temp = temp + xi(:,j);
                    count = count + 1;
                end
            end
        else
            for j = 1:l(2)
                if(clustersCentroid(j)==2)
                    temp = temp + xi(:,j);
                    count = count + 1;
                end
            end
        end
        yCentroidFinal = [yCentroidFinal, temp/count];

        % K-Means
        num1KMeans = sum(clustersKMeans==1);
        num2KMeans = sum(clustersKMeans==2);
        temp = zeros(l(1),1);
        count = 0;
        if(num1KMeans>num2KMeans)
            for j = 1:l(2)
                if(clustersKMeans(j)==1)
                    temp = temp + xi(:,j);
                    count = count + 1;
                end
            end
        else
            for j = 1:l(2)
                if(clustersKMeans(j)==2)
                    temp = temp + xi(:,j);
                    count = count + 1;
                end
            end
        end
        yKMeansFinal = [yKMeansFinal, temp/count];
    end
end

end