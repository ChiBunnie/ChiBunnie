%% Chioma Abed-Amazu
% Lab 9
% 04/26/2021

%% Problem 1

%Known Variables
V1 = 1;
P2 = 1.5;
V2 = 1.1;
P3 =-1.5;
Q3 = 0.8;
Y_11 = (2-4i)+(3-6i);
Y_12 = 2-4i;
Y_13 = 3-6i;
Y_21 = 2-4i;
Y_22 = 2-4i;
Y_23 = 0;
Y_31 = 3-6i;
Y_32 = 0;
Y_33 = 3-6i;
Ya11 = angle(Y_11);
Ya12 = angle(Y_12);
Ya13 = angle(Y_13);
Ya21 = angle(Y_21);
Ya22 = angle(Y_22);
Ya23 = angle(Y_23);
Ya31 = angle(Y_31);
Ya32 = angle(Y_32);
Ya33 = angle(Y_33);

% Unkown Variables
% Phase1 = the phase angle of bus 1
% Phase2 = the phase angle of bus 2
% Phase3 = the phase angle of bus 3
% V3 is = voltage of bus 3

Y_bus = [Y_11, -Y_12, -Y_13; -Y_21, Y_22, -Y_23; -Y_31, -Y_32, Y_33]

fprintf('Power Flow Equations for P2,P3 and Q3:\n')
fprintf('P2= V2*((Y_21*V1)*(cos(Phase2-Phase1-(angle(Y_21))))+(Y_22*V2)*(cos(Phase2-Phase2-(angle(Y_22))))+(Y_23*V3)*(cos(Phase2-Phase3-(angle(Y_23)))))\n');
fprintf('P3= V3*((Y_31*V1)*(cos(Phase3-Phase1-(angle(Y_31))))+(Y_32*V2)*(cos(Phase3-Phase2-(angle(Y_32))))+(Y_33*V3)*(cos(Phase3-Phase3-(angle(Y_33)))))\n');
fprintf('Q3= V3*((Y_31*V1)*(sin(Phase3-Phase1-(angle(Y_31))))+(Y_32*V2)*(sin(Phase3-Phase2-(angle(Y_32))))+(Y_33*V3)*(sin(Phase3-Phase3-(angle(Y_33)))))\n');

syms d1 d2 d3 V1 V2 V3 Y_11 Y_12 Y_13 Y_21 Y_22 Y_23 Y_31 Y_32 Y_33 Ya_11 Ya11 Ya12 Ya13 Ya21 Ya22 Ya23 Ya31 Ya32 Ya33

P2 = V2*((abs(Y_21)*V1*cos(d2-d1-Ya21))+(abs(Y_22)*V2*cos(d2-d2-Ya22))+(abs(Y_23)*V3*cos(d2-d3-Ya23)));
P3 = V3*((abs(Y_31)*V1*cos(d3-d1-Ya31))+(abs(Y_32)*V2*cos(d3-d2-Ya32))+(abs(Y_33)*V3*cos(d3-d3-Ya33)));
%Q3 = V2*((abs(Y_31)*V1*sin(d3-d1-Ya31))+(abs(Y_32)*V2*sin(d3-d2-Ya32))+(abs(Y_33)*V3*sin(d3-d3-Ya33)));
Q3 = V3*((abs(Y_31)*V1*sin(d3-d1-Ya31))+(abs(Y_32)*V2*sin(d3-d2-Ya32))+(abs(Y_33)*V3*sin(d3-d3-Ya33)));

J11 = diff(P2, d2)
J12 = diff(P2, d3)
J13 = diff(P2, V2)
J14 = diff(P2, V3)

J21 = diff(P3, d2)
J22 = diff(P3, d3)
J23 = diff(P3, V2)
J14 = diff(P3, V3)

J31 = diff(Q2, d2)
J32 = diff(Q2, d3)
J33 = diff(Q2, V2)
J14 = diff(Q2, V3)

J41 = diff(Q3, d2)
J42 = diff(Q3, d3)
J43 = diff(Q3, V2)
J14 = diff(Q3, V3)