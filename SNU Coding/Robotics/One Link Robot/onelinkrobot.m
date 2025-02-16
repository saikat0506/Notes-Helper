% MATLAB program to animate a one-link robot
a1 = 1; % Length of the single link

th1max = 360; % Maximum angle for the single link (full circle)
th1 = 0:th1max/100:th1max; % Angle values from 0 to 360 degrees

xmin = -1.5 * a1; % Minimum x-axis value
ymin = -1.5 * a1; % Minimum y-axis value
xmax = 1.5 * a1; % Maximum x-axis value
ymax = 1.5 * a1; % Maximum y-axis value

for i = 1:101
    % Compute the endpoint of the single link
    x1 = a1 * cos(th1(i) * pi / 180); % x-coordinate
    y1 = a1 * sin(th1(i) * pi / 180); % y-coordinate
    
    % Plot the single link
    plot([0, x1], [0, y1], 'b-', 'LineWidth', 2); % Link as a line
    hold on;
    plot(x1, y1, 'ro', 'MarkerSize', 8, 'MarkerFaceColor', 'r'); % Endpoint as a point
    hold off;
    
    % Set axis limits and properties
    axis([xmin xmax ymin ymax]);
    axis square;
    grid on;
    
    % Draw the animation frame
    drawnow;
end
