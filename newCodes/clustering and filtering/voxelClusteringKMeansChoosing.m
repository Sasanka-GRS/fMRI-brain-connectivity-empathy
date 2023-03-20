function [chosenVoxels, combinedRegions] = voxelClusteringKMeansChoosing(x)

chosenVoxels = x;
combinedRegions = [];

figure()

k1 = 1;

for numClust = [2,3,5]

    yPhase = x;
    clusters = x;

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
            clusters.(fNames{i}) = 1;
        else

            % K-Means
            clustersKMeans = kmeans(yi',numClust);

            clusters.(fNames{i}) = clustersKMeans;

        end
    end

    %% Selecting best cluster
    for i = 1:L-1
        xi = x.(fNames{i});
        yi = yPhase.(fNames{i});
        l = size(xi);
        if(l(2)<=numClust)
            chosenVoxels.(fNames{i}) = xi;
        else
            clusterHere = clusters.(fNames{i});
            variance = zeros(numClust,1);
            for n = 1:numClust
                vPh = yi(:,clusterHere==n);
                variance(n) = norm(var(vPh),2);
            end
            [~,clustMin] = min(variance);
            v = xi(:,clusterHere==clustMin);
            chosenVoxels.(fNames{i}) = v;
        end
    end

    %% Plotting
    subplot(3,1,k1)
    hold on
    for i = 2 % Change here for which region you want to plot for
        xi = chosenVoxels.(fNames{i});
        l = size(xi);
        for j = 1:l(2)
            plot(xi(:,j));
        end
    end
    hold off
    title(['K = ', int2str(numClust)]);
    k1 = k1+1;
    
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
sgtitle('K-Means with varying K')
end

%{
    subplot(3,1,k1)
    hold on
    for i = 2
        xi = x.(fNames{i});
        l = size(xi);
        if(l(2)<2)
            plot(xi);
            yKMeansFinal = [yKMeansFinal, xi];
        else
            clustersKMeans = yKMeans.(fNames{i});

            % K-Means
            num1KMeans = norm(var(xi(:,clustersKMeans==1),0,2),2);
            num2KMeans = norm(var(xi(:,clustersKMeans==2),0,2),2);
            temp = zeros(l(1),1);
            count = 0;
            if(num1KMeans<num2KMeans)
                kMeVar = [kMeVar, num1KMeans];
                for j = 1:l(2)
                    if(clustersKMeans(j)==1)
                        plot(xi(:,j));
                        temp = temp + xi(:,j);
                        count = count + 1;
                    end
                end
            else
                kMeVar = [kMeVar, num2KMeans];
                for j = 1:l(2)
                    if(clustersKMeans(j)==2)
                        plot(xi(:,j));
                        temp = temp + xi(:,j);
                        count = count + 1;
                    end
                end
            end
            yKMeansFinal = [yKMeansFinal, temp/count];
        end
    end
    hold off
    title(['k = ', int2str(numClust)]);
    k1 = k1+1;
%}