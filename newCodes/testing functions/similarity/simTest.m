%% Known Graph, Known Signal

AdjOriginal = [0,1,1,0,0;1,0,1,0,0;1,1,0,1,0;0,0,1,0,1;0,0,0,1,0];
x = [0.4,0.45,0.5,0.6,0.65];
sigma = 1;
N = 5;
Lay = [0,1;-2,0;-1,-1;1,-1;2,0];
node = 1:5;

[WLearnt,Layout] = simLearn(x,sigma,N,Lay);

figure()
subplot(1,2,1);
plotting(Layout,AdjOriginal,zeros(N),node);
title('Original graph','FontSize',20);
xlim([-4,4]);
ylim([-3,3]);
subplot(1,2,2);
plotting(Layout,WLearnt,zeros(N),node);
title('Learnt graph','FontSize',20);
xlim([-4,4]);
ylim([-3,3]);

%% Unknown Graph, known signal

x = ones(1,5);
sigma = 1;
N = 5;
Lay = [0,1;-2,0;-1,-1;1,-1;2,0];
node = 1:5;

[WLearnt,Layout] = simLearn(x,sigma,N,Lay);

figure()
subplot(1,2,1);
image(WLearnt,'CDataMapping','scaled');
colorbar;
title('Learnt Adjacency','FontSize',20);
subplot(1,2,2);
plotting(Layout,WLearnt,zeros(N),node);
title('Learnt graph','FontSize',20);
xlim([-4,4]);
ylim([-3,3]);