function plottingGFT(Layout,top,node)

N = size(Layout);
N = N(1);

hold on
%scatter(Layout(:,1),Layout(:,2),40,'o','filled'); % Plot nodes
for i = 1:N
    if top(i)~=0
        scatter(Layout(i,1),Layout(i,2),40,'o','filled','r'); % Plot nodes
    else
        scatter(Layout(i,1),Layout(i,2),40,'o','filled','b'); % Plot nodes
    end
    text(Layout(i,1)+1,Layout(i,2)+5,num2str(node(i)),'FontSize',10);
end
hold off

end