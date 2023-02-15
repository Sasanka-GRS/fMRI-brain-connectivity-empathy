r1 = normrnd(0,1,[1,100]);
r2 = normrnd(4,1,[1,100]);

data1 = [r1,r2];
data2 = [];
color = [];

for i=1:100
    data2 = [data2, r1(i), r2(i)];
    color = [color, 1, 2];
end

%% Data 1

disp('Data 1')

X = data1';

figure()
subplot(3,3,1);
scatter(1:200,data1,10,[ones(1,100),2*ones(1,100)]);
title('Original Data 1');
subplot(3,3,2)
Z = linkage(X,'average');
c = cluster(Z,'Maxclust',2);
scatter(1:200,data1,10,c);
title('Average');
var1 = [];
var2 = [];
for i=1:200
    if(c(i)==1)
        var1 = [var1,data1(i)];
    else
        var2 = [var2,data1(i)];
    end
end
disp('Average')
message = ['Var1 is ', int2str(var(var1)), ', Var2 is ', int2str(var(var2))];
disp(message)
subplot(3,3,3)
Z = linkage(X,'centroid');
c = cluster(Z,'Maxclust',2);
scatter(1:200,data1,10,c);
title('Centroid');
var1 = [];
var2 = [];
for i=1:200
    if(c(i)==1)
        var1 = [var1,data1(i)];
    else
        var2 = [var2,data1(i)];
    end
end
disp('Centroid')
message = ['Var1 is ', int2str(var(var1)), ', Var2 is ', int2str(var(var2))];
disp(message)
subplot(3,3,4)
Z = linkage(X,'complete');
c = cluster(Z,'Maxclust',2);
scatter(1:200,data1,10,c);
title('Complete');
var1 = [];
var2 = [];
for i=1:200
    if(c(i)==1)
        var1 = [var1,data1(i)];
    else
        var2 = [var2,data1(i)];
    end
end
disp('Complete')
message = ['Var1 is ', int2str(var(var1)), ', Var2 is ', int2str(var(var2))];
disp(message)
subplot(3,3,5)
Z = linkage(X,'median');
c = cluster(Z,'Maxclust',2);
scatter(1:200,data1,10,c);
title('Median');
var1 = [];
var2 = [];
for i=1:200
    if(c(i)==1)
        var1 = [var1,data1(i)];
    else
        var2 = [var2,data1(i)];
    end
end
disp('Median')
message = ['Var1 is ', int2str(var(var1)), ', Var2 is ', int2str(var(var2))];
disp(message)
subplot(3,3,6)
Z = linkage(X,'single');
c = cluster(Z,'Maxclust',2);
scatter(1:200,data1,10,c);
title('Single');
var1 = [];
var2 = [];
for i=1:200
    if(c(i)==1)
        var1 = [var1,data1(i)];
    else
        var2 = [var2,data1(i)];
    end
end
disp('Single')
message = ['Var1 is ', int2str(var(var1)), ', Var2 is ', int2str(var(var2))];
disp(message)
subplot(3,3,7)
Z = linkage(X,'ward');
c = cluster(Z,'Maxclust',2);
scatter(1:200,data1,10,c);
title('Ward');
var1 = [];
var2 = [];
for i=1:200
    if(c(i)==1)
        var1 = [var1,data1(i)];
    else
        var2 = [var2,data1(i)];
    end
end
disp('Ward')
message = ['Var1 is ', int2str(var(var1)), ', Var2 is ', int2str(var(var2))];
disp(message)
subplot(3,3,8)
Z = linkage(X,'weighted');
c = cluster(Z,'Maxclust',2);
scatter(1:200,data1,10,c);
title('Weighted');
var1 = [];
var2 = [];
for i=1:200
    if(c(i)==1)
        var1 = [var1,data1(i)];
    else
        var2 = [var2,data1(i)];
    end
end
disp('Weighted')
message = ['Var1 is ', int2str(var(var1)), ', Var2 is ', int2str(var(var2))];
disp(message)

%% Data 2

disp(' ')
disp('Data 2')

X = data2';

figure()
subplot(3,3,1);
scatter(1:200,data2,10,color);
title('Original Data 2');
subplot(3,3,2)
Z = linkage(X,'average');
c = cluster(Z,'Maxclust',2);
scatter(1:200,data2,10,c);
title('Average');
var1 = [];
var2 = [];
for i=1:200
    if(c(i)==1)
        var1 = [var1,data2(i)];
    else
        var2 = [var2,data2(i)];
    end
end
disp('Average')
message = ['Var1 is ', int2str(var(var1)), ', Var2 is ', int2str(var(var2))];
disp(message)
subplot(3,3,3)
Z = linkage(X,'centroid');
c = cluster(Z,'Maxclust',2);
scatter(1:200,data2,10,c);
title('Centroid');
var1 = [];
var2 = [];
for i=1:200
    if(c(i)==1)
        var1 = [var1,data2(i)];
    else
        var2 = [var2,data2(i)];
    end
end
disp('Centroid')
message = ['Var1 is ', int2str(var(var1)), ', Var2 is ', int2str(var(var2))];
disp(message)
subplot(3,3,4)
Z = linkage(X,'complete');
c = cluster(Z,'Maxclust',2);
scatter(1:200,data2,10,c);
title('Complete');
var1 = [];
var2 = [];
for i=1:200
    if(c(i)==1)
        var1 = [var1,data2(i)];
    else
        var2 = [var2,data2(i)];
    end
end
disp('Complete')
message = ['Var1 is ', int2str(var(var1)), ', Var2 is ', int2str(var(var2))];
disp(message)
subplot(3,3,5)
Z = linkage(X,'median');
c = cluster(Z,'Maxclust',2);
scatter(1:200,data2,10,c);
title('Median');
var1 = [];
var2 = [];
for i=1:200
    if(c(i)==1)
        var1 = [var1,data2(i)];
    else
        var2 = [var2,data2(i)];
    end
end
disp('Median')
message = ['Var1 is ', int2str(var(var1)), ', Var2 is ', int2str(var(var2))];
disp(message)
subplot(3,3,6)
Z = linkage(X,'single');
c = cluster(Z,'Maxclust',2);
scatter(1:200,data2,10,c);
title('Single');
var1 = [];
var2 = [];
for i=1:200
    if(c(i)==1)
        var1 = [var1,data2(i)];
    else
        var2 = [var2,data2(i)];
    end
end
disp('Single')
message = ['Var1 is ', int2str(var(var1)), ', Var2 is ', int2str(var(var2))];
disp(message)
subplot(3,3,7)
Z = linkage(X,'ward');
c = cluster(Z,'Maxclust',2);
scatter(1:200,data2,10,c);
title('Ward');
var1 = [];
var2 = [];
for i=1:200
    if(c(i)==1)
        var1 = [var1,data2(i)];
    else
        var2 = [var2,data2(i)];
    end
end
disp('Ward')
message = ['Var1 is ', int2str(var(var1)), ', Var2 is ', int2str(var(var2))];
disp(message)
subplot(3,3,8)
Z = linkage(X,'weighted');
c = cluster(Z,'Maxclust',2);
scatter(1:200,data2,10,c);
title('Weighted');
var1 = [];
var2 = [];
for i=1:200
    if(c(i)==1)
        var1 = [var1,data2(i)];
    else
        var2 = [var2,data2(i)];
    end
end
disp('Weighted')
message = ['Var1 is ', int2str(var(var1)), ', Var2 is ', int2str(var(var2))];
disp(message)