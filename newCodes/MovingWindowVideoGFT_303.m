clear

GraphsSim = load("generated\303SimWindow_8s.mat");
GraphsSimGFT = load("generated\303SimWindowGFT_8s.mat");
%GraphsSmooth = load("generated\303SmoothWindow_8s.mat");
%GraphsSmoothGFT = load("generated\303SmoothWindowGFT_8s.mat");
GraphsSpar = load("generated\303SparWindow_8s.mat");
GraphsSparGFT = load("generated\303SparWindowGFT_8s.mat");
%GraphsGMRF = load("generated\303GMRF_8s.mat");
GraphsPear = load("generated\303PearWindow_8s.mat");
GraphsPearGFT = load("generated\303PearWindowGFT_8s.mat");

node = load("nodes.mat").nodes303;

figure();

for k = 1:249

    subplot(2,3,1)
    plottingGFT(GraphsSim.Graphs_Layout(:,:,k),GraphsSimGFT.LPSignalsSim(:,k),node);
    title('Similarity','FontSize',25);
    set(gca,'XColor', 'none','YColor','none')
    
    subplot(2,3,2)
    plottingGFT(GraphsSpar.Graphs_Layout(:,:,k),GraphsSparGFT.LPSignalsSpar(:,k),node);
    title('Sparsity','FontSize',25);
    set(gca,'XColor', 'none','YColor','none')
    
    subplot(2,3,3)
    plottingGFT(GraphsPear.Graphs_Layout(:,:,k),GraphsPearGFT.LPSignalsPear(:,k),node);
    title('Pearson','FontSize',25);
    set(gca,'XColor', 'none','YColor','none')

    sgtitle('Low Pass Regions','FontSize',25);
    pause(0.1);

end

figure();

for k = 1:249

    subplot(2,3,1)
    plottingGFT(GraphsSim.Graphs_Layout(:,:,k),GraphsSimGFT.HPSignalsSim(:,k),node);
    title('Similarity','FontSize',25);
    set(gca,'XColor', 'none','YColor','none')
    
    subplot(2,3,2)
    plottingGFT(GraphsSpar.Graphs_Layout(:,:,k),GraphsSparGFT.HPSignalsSpar(:,k),node);
    title('Sparsity','FontSize',25);
    set(gca,'XColor', 'none','YColor','none')
    
    subplot(2,3,3)
    plottingGFT(GraphsPear.Graphs_Layout(:,:,k),GraphsPearGFT.HPSignalsPear(:,k),node);
    title('Pearson','FontSize',25);
    set(gca,'XColor', 'none','YColor','none')

    sgtitle('High Pass Regions','FontSize',25);
    pause(0.5);

end

figure();

for k = 1:249

    subplot(2,3,1)
    plottingGFT(GraphsSim.Graphs_Layout(:,:,k),GraphsSimGFT.BPSignalsSim(:,k),node);
    title('Similarity','FontSize',25);
    set(gca,'XColor', 'none','YColor','none')
    
    subplot(2,3,2)
    plottingGFT(GraphsSpar.Graphs_Layout(:,:,k),GraphsSparGFT.BPSignalsSpar(:,k),node);
    title('Sparsity','FontSize',25);
    set(gca,'XColor', 'none','YColor','none')
    
    subplot(2,3,3)
    plottingGFT(GraphsPear.Graphs_Layout(:,:,k),GraphsPearGFT.BPSignalsPear(:,k),node);
    title('Pearson','FontSize',25);
    set(gca,'XColor', 'none','YColor','none')

    sgtitle('Band Pass Regions','FontSize',25);
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