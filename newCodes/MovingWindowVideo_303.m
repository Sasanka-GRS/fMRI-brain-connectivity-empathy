clear

GraphsSim = load("generated\303SimWindow_8s.mat");
%GraphsSmooth = load("generated\303SmoothWindow_8s.mat");
GraphsSpar = load("generated\303SparWindow_8s.mat");
%GraphsGMRF = load("generated\303GMRF_8s.mat");
GraphsPear = load("generated\303PearWindow_8s.mat");

node = load("nodes.mat").nodes303;

figure();

for k = 1:249

    subplot(2,4,1)
    plotting(GraphsSim.Graphs_Layout(:,:,k),GraphsSim.Graphs_W(:,:,k),GraphsSim.Graphs_top(:,:,k),node);
    title('Similarity','FontSize',25);
    set(gca,'XColor', 'none','YColor','none')
    
    subplot(2,4,2)
    %plotting(GraphsSmooth.Graphs_Layout(:,:,k),GraphsSmooth.Graphs_W(:,:,k),GraphsSmooth.Graphs_top(:,:,k),node);
    title('Smoothness','FontSize',25);
    set(gca,'XColor', 'none','YColor','none')
    
    subplot(2,4,3)
    plotting(GraphsSpar.Graphs_Layout(:,:,k),GraphsSpar.Graphs_W(:,:,k),GraphsSpar.Graphs_top(:,:,k),node);
    title('Sparsity','FontSize',25);
    set(gca,'XColor', 'none','YColor','none')
    
    subplot(2,4,4)
    plotting(GraphsPear.Graphs_Layout(:,:,k),GraphsPear.Graphs_W(:,:,k),GraphsPear.Graphs_top(:,:,k),node);
    title('Pearson','FontSize',25);
    set(gca,'XColor', 'none','YColor','none')

    sgtitle('Comparison of Methods','FontSize',25);

    M(k)=getframe(gcf);
    pause(0.5);

end
%{
%Saving as a video file
videofile = VideoWriter('303MovingWindow_8s.avi','Uncompressed AVI');
open(videofile);
writeVideo(videofile,M);
close(videofile);
%}

%tightfig;