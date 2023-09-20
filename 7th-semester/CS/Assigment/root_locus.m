% Define the transfer function

num = [1 2];
den = [1 2 1];
G = tf(num, den);

% Plot the root locus
rlocus(G);
hold on;
