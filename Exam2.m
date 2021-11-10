%% Chioma Abed-Amazu
% Exam 2
% 11/03/2021

clear all, close all, clc

% -------Create Y-bus------------

Y12 = -5 + i*15;
Y21 = -5 + i*15;
Y11 = 5 - i*14.95;
Y22 = 5 - i*14.7;
Ya11 = (angle(Y11));
Ya12 = (angle(Y12));
Ya21 = (angle(Y21));
Ya22 = (angle(Y22));


Ybus = [Y11, Y12 ; Y21, Y22];

% -----------Given specifications in pu------------%

 V1 = 1.0;
 d1 = 0;
 P2 = 1.0;
 Q2 = 0.5;                   


% ----Solution Parameters----% 
Tolerance= 0.001;
iter = 0;
flag = 0;
iter_max = 10;

%----- Initialization-------%
% Initial Guesses
d2=0;  
V2=1.0;

% Initialize change in unknown variables
% This will be used to find values for next iteration
deld2=0; 
delV2=0; 


%P2 = V2*((Y21*V1*cos(d2-d1-Ya21))+(Y22*V2*cos(d2-d2-Ya22)));
%Q2 = V2*((Y21*V1*sin(d2-d1-Ya21))+(Y22*V2*sin(d2-d2-Ya22)));


%------------------ Start Iteration Process-----------------%

% The iteration loop will start here
% We will establish this in Lab 10

while(iter < iter_max)
    iter = iter + 1;
    
    d2=d2+deld2;
    V2=V2+delV2;

%------- Creation of Jacobian J--------%

 J(1,1) = V2*V1*abs(Y21)*sin(Ya21-d2);
 
 J(1,2) = 2*V2*cos(Ya22)*abs(Y22) + V1*cos(Ya21 - d2)*abs(Y21);
 
 J(2,1) = V1*V2*cos(Ya21- d2)*abs(Y21);
 
 J(2,2) = -2*V2*sin(Ya22)*abs(Y22) - V1*sin(Ya21- d2)*abs(Y21);
 
 


% ---------Bus Voltages--------%
% Establish a voltage vector V

V(1,1)=V1*exp(1i*d1);      %Voltage @ Bus1
V(2,1)=V2*exp(1i*d2);      %Voltage @ Bus2



% -------Injected currents into Buses-------%
% Use Ybus Matrix and Voltage Vector V to calculate I @ each bus
% I = Y*V (will be matrix multiplication)
 Iinj = Ybus*V;


%------- P and Q Injected into Buses--------%
S(1,1)=V(1,1)*conj(Iinj(1));
S(2,1)=V(2,1)*conj(Iinj(2));


% -----Mismatch at PQ and PV buses-------%
% This is the difference in known real or reactive power at each bus 
% with current values of unknown variables.
Mismatch(1,1)= P2 - real(S(2,1));       
Mismatch(2,1)= Q2 - imag(S(2,1));


% -------calculate new delta values for ANG2, ANG3, and MAG3------&
del=inv(J)*Mismatch;
deld2=del(1);
delV2=del(2);

if (max(abs(Mismatch)) > Tolerance)
    flag = 0;
else
    flag = 1;

end

end      % while loop ends

%% Solutions for Exam 2

fprintf("The voltage in Bus 2 (V2) = %f p.u.\n", V2);
fprintf("The phase angle of the voltage in Bus 2 (d2) = %f degrees\n", rad2deg(d2));

%% Gauss Seidel Method

% Given
Y12 = -5 + i*15;
Y21 = -5 + i*15;
Y11 = 5 - i*14.95;
Y22 = 5 - i*14.7;
S2 = 1 + i*0.5;

V1 = 1*exp(1i*deg2rad(0));
V2 = 1*exp(1i*deg2rad(0));

Tolerance= 0.001;
iter = 0;
flag = 0;
iter_max = 10;

delV2=0; 


while iter < iter_max
    iter = iter + 1;
    V2=V2+delV2;
    
    V2 = 1/Y22*((conj(S2)/conj(V2))-(Y12*V1));
end
fprintf('V2: Magnitude = %f p.u., Phase Angle = %f degrees\n', abs(V2), rad2deg(angle(V2)));