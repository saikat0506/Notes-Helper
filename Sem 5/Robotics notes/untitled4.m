a1=1;
a2=1;
th1max = 180;
th2max = 90;
th1 = 0:th1max/100:th1max;
th2 = 0:th2max/100:th2max;
xmin = -1.5*(a1+a2);
ymin = -1.5*(a1+a2);
xmax = 1.5*(a1+a2);
ymax = 1.5*(a1+a2);
for i=1:101
x1(i)=a1*cos(th1(i)*pi/180);
y1(i)=a1*sin(th1(i)*pi/180);
x2(i) = a1*cos(th1(i)*pi/180)+a2*cos((th1(i)+th2(i))*pi/180);
y2(i) = a1*sin(th1(i)*pi/180)+a2*sin((th1(i)+th2(i))*pi/180);
plot([0, x1(i), x2(i)],[0, y1(i), y2(i)])
hold on
plot([0, x1(i), x2(i)],[0, y1(i), y2(i)],'o')
hold off
axis([xmin xmax ymin ymax])
axis("square")
drawnow
end



a1 = 1; 
th1max = 360;
th1 = 0:th1max/100:th1max;
xmin = -1.5 * a1;
ymin = -1.5 * a1;
xmax = 1.5 * a1;
ymax = 1.5 * a1;
for i = 1:101
    x1 = a1 * cos(th1(i) * pi / 180);
    y1 = a1 * sin(th1(i) * pi / 180);
    plot([0, x1], [0, y1], 'b-', 'LineWidth', 2);
    hold on;
    plot(x1, y1, 'ro', 'MarkerSize', 8, 'MarkerFaceColor', 'r');
    hold off;
    axis([xmin xmax ymin ymax]);
    axis square;
    grid on;
    drawnow;
end
