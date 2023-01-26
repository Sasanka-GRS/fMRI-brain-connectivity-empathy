x1 = load("..\new_data\303_data.mat").Y;
x1 = x1(2:257,:);
a = 0:2:510;
plot(a(1:255),x1(1:255,1),'r',LineWidth=2.0);
hold on
plot(a(1:255),x1(1:255,2),'g',LineWidth=2.0);
plot(a(1:255),x1(1:255,3),'black',LineWidth=2.0);
hold off
xlabel('Time (sec)','FontSize',25);
ylabel('fMRI BOLD','FontSize',25);
title('fMRI signal for one region','FontSize',35);
%legend('Node 5 (Insula)', 'Node 18 (MCC)', 'Node 10 (Opercularis)','FontSize',20);