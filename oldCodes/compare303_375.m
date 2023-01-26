clear
Graphs1 = load(".\303\303Sim.mat").Graphs;
Graphs2 = load(".\375\375Sim.mat").Graphs;

figure()

for k = 1:8

    subplot(2,8,k)
    grasp_show_graph(gca,Graphs1(k),'node_text','ID','node_text_fontsize',5,'node_text_shift',4);
    xlim([-52,62]);
    ylim([-58,70]);
    message = ['Similarity, ',int2str((k-1)*2*16+1),'s'];
    title(message);

end

for k = 1:8

    subplot(2,8,8+k)
    grasp_show_graph(gca,Graphs2(k),'node_text','ID','node_text_fontsize',5,'node_text_shift',4);
    xlim([-58,62]);
    ylim([-66,56]);
    message = ['Sparsity, ',int2str((k-1)*2*16+1),'s'];
    title(message);

end

sgtitle('From time 1s - time 255s');
tightfig;

figure()

for k = 9:16

    subplot(2,8,k-8)
    grasp_show_graph(gca,Graphs1(k),'node_text','ID','node_text_fontsize',5,'node_text_shift',4);
    xlim([-52,62]);
    ylim([-58,70]);
    message = ['Similarity, ',int2str((k-1)*2*16+1),'s'];
    title(message);

end

for k = 9:16

    subplot(2,8,k)
    grasp_show_graph(gca,Graphs2(k),'node_text','ID','node_text_fontsize',5,'node_text_shift',4);
    xlim([-58,62]);
    ylim([-66,56]);
    message = ['Sparsity, ',int2str((k-1)*2*16+1),'s'];
    title(message);

end

sgtitle('From time 256s - time 511s');
tightfig;