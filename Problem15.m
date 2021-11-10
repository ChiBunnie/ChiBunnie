clc
clear

Z_11 = 1i*0.25;
Z_22 = 1i*0.25;
Z_12 = 1i*0.2;
Z_13 = 1i*0.25;
Z_23 = 1i*0.4;
Z_34 = 1i*0.4;
Z_24 = 1i*0.5;

Y_11 = 1/Z_11;
Y_22 = 1/Z_22;
Y_12 = 1/Z_12;
Y_13 = 1/Z_13;
Y_23 = 1/Z_23;
Y_34 = 1/Z_34;
Y_24 = 1/Z_24;

Y_21 = -Y_12;
Y_31 = -Y_13;
Y_32 = -Y_23;
Y_43 = -Y_34;
Y_42 = -Y_24;
Y_33 = Y_13 + Y_23 + Y_34;
Y_44 = Y_24 + Y_34;

Y_14 = 0;
Y_41 = -Y_14;


Y_bus = [Y_11, -Y_12, -Y_13, -Y_14;Y_21, Y_22, -Y_23, -Y_24; Y_31, Y_32, Y_33, -Y_34; Y_41, Y_42, Y_43, Y_44]


I_2 = (-4*1i);
I_1 = (2-3.4641*1i);

x = (Y_bus)^-1;
y = [I_1;I_2;0;0];
V = x*y