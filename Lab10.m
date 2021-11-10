%% Chioma Abed-Amazu
% Lab 10
% 05/05/2021

clear all, close all, clc

% -------Create Y-bus------------

Y12 =2-4i;
Y13 = 3-6i;
Y21 = Y12;
Y11 = Y12 + Y13;
Y31 = Y13;
Y22 = Y12;
Y33 = Y13;
Y23 = 0;
Y32 = Y23;
Ya11 = (angle(Y11));
Ya12 = (angle(Y12));
Ya13 = (angle(Y13));
Ya21 = (angle(Y21));
Ya22 = (angle(Y22));
Ya23 = (angle(Y23));
Ya31 = (angle(Y31));
Ya32 = (angle(Y32));
Ya33 = (angle(Y33));

Ybus = [Y11, -Y12, -Y13; -Y21, Y22, -Y23; -Y31, -Y32, Y33];

% -----------Given specifications in pu------------%

 V1 = 1;
 d1 = 0;
 V2 = 1.1;
 P2 = 1.5;
 P3 = -1.5;                   
 Q3 = 0.8;

% ----Solution Parameters----% 
Tolerance= 0.001;
iter = 0;
flag = 0;
iter_max = 10;

%----- Initialization-------%
% Initial Guesses
d2=0; 
d3=0; 
V3=1.0;

% Initialize change in unknown variables
% This will be used to find values for next iteration
deld2=0; 
deld3=0; 
delV3=0;

%P2 = V2*((Y21*V1*cos(d2-d1-Ya21))+(Y22*V2*cos(d2-d2-Ya22))+(Y23*V3*cos(d2-d3-Ya23)));
%P3 = V3*((Y31*V1*cos(d3-d1-Ya31))+(Y32*V2*cos(d3-d2-Ya32))+(Y33*V3*cos(d3-d3-Ya33)));
%Q3 = V3*((Y31*V1*sin(d3-d1-Ya31))+(Y32*V2*sin(d3-d2-Ya32))+(Y33*V3*sin(d3-d3-Ya33)));


%------------------ Start Iteration Process-----------------%

% The iteration loop will start here
% We will establish this in Lab 10

while(iter < iter_max)
    iter = iter + 1;
    
d2=d2+deld2;
d3=d3+deld3;
V3=V3+delV3;

%------- Creation of Jacobian J--------%
 J(1,1) = V2*((V1*sin(d2-d1-Ya21)*abs(Y21))+ (V3*sin(d2-d3-Ya23)*abs(Y23)));
 J(1,2) = (-V2)*V3*sin(Ya23-d2+d3)*abs(Y23);
 J(1,3) = V2*cos(Ya23-d2+d3)*abs(Y23);
 
 J(2,1) = (-V2)*V3*sin(Ya32+d2-d3)*abs(Y32);
 J(2,2) = V3*((V1*sin(d3-d1-Ya31)*abs(Y31)) + (V2*sin(d3-d2-Ya32)*abs(Y32)));
 J(2,3) = (2*V3*abs(Y33)*cos(Ya33)) - (V1*cos(d3-d1-Ya31)*abs(Y31)) - (V2*cos(d3-d2-Ya32)*abs(Y32));
 
 J(3,1) = ((-V2)*V3*cos(Ya32+d2-d3)*abs(Y32));
 J(3,2) = V3*((-V1*cos(d3-d1-Ya31)*abs(Y31)) - (V2*cos(d3-d2-Ya32)*abs(Y32)));
 J(3,3) = (2*V3*abs(Y33)*sin(-Ya33)) - (V1*sin(d3-d1-Ya31)*abs(Y31)) + (V2*sin(d3-d2-Ya32)*abs(Y32));


% ---------Bus Voltages--------%
% Establish a voltage vector V

V(1,1)=V1*exp(j*d1);      %Voltage @ Bus1
V(2,1)=V2*exp(j*d2);      %Voltage @ Bus2
V(3,1)=V3*exp(j*d3);      %Voltage @ Bus3



% -------Injected currents into Buses-------%
% Use Ybus Matrix and Voltage Vector V to calculate I @ each bus
% I = Y*V (will be matrix multiplication)
 Iinj = Ybus*V;


%------- P and Q Injected into Buses--------%
S(1,1)=V(1,1)*conj(Iinj(1));
S(2,1)=V(2,1)*conj(Iinj(2));
S(3,1)=V(3,1)*conj(Iinj(3));

% -----Mismatch at PQ and PV buses-------%
% This is the difference in known real or reactive power at each bus 
% with current values of unknown variables.
Mismatch(1,1)= P2 - real(S(2,1));       
Mismatch(2,1)= P3 - real(S(3,1));
Mismatch(3,1)= Q3 - imag(S(3,1));


% -------calculate new delta values for ANG2, ANG3, and MAG3------&
del=inv(J)*Mismatch;
deld2=del(1);
deld3=del(2);
delV3=del(3);

if (max(abs(Mismatch)) > Tolerance)
    flag = 0;
else
    flag = 1;

end

end      % while loop ends

%% Solutions for Lab10

fprintf("The phase angle of the voltage in Bus 2 (d2) = %f rad, %f degrees\n", d2, rad2deg(d2));
fprintf("The phase angle of the voltage in Bus 3 (d3) = %f rad, %f degrees\n", d3, rad2deg(d3));
fprintf("The voltage in Bus 3 (V3) = %f p.u.\n", V3);
fprintf("The complex power S in Bus 1:  Real = %f p.u., Imag = %fj p.u.\n", real(S(1,1)), imag(S(1,1)));
fprintf("The complex power S in Bus 2:  Real = %f p.u., Imag = %fj p.u.\n", real(S(2,1)), imag(S(2,1)));
