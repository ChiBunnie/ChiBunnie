%% Lab 4
% Chioma Abed-Amazu
% 09/22/2021

%% Part I
clc
clear

% Z^-1 transform
% This system will be a anti-causal system because the numerator has a higher
% polynomial order and it would be unstable because the ROC: z < -1 doesn't
% inculde the unit circle.
B=[0.6,0.5,1];
A=[1,1];
[X,Y]=freqz(B,A);

% Z^-1 transform
% This system will be stable if the ROC: z < 1 which would inculde the unit circle,
% and would be unstable if the ROC is z > 1.
B1=[1,-0.2,1];
A1=[2,-3,1];
[X1,Y1]=freqz(B1,A1);

%pole-zero plot
figure();
zplane(B,A);
title('pole-zero 1');

% Frequency response
figure();
plot((Y/pi),abs(X));
title('Frequency response1');
xlabel('w');
ylabel('H(e^j^w)');

%pole-zero plot
figure();
zplane(B1,A1);
title('pole-zero 2');

% Frequency response
figure();
plot((Y1/pi),abs(X1));
title('Frequency response2');
xlabel('w');
ylabel('H(e^j^w)');


%% Part 2(Proposed systems)

% ROC : z > 3 therefore this system is unstable because the unit circle
% isn't inculded in the ROC
B2=[0.8,-1.8,1];
A2=[1,-5,6];
[X2,Y2]=freqz(B1,A1);

% ROC: z > 0.5 therefore this system is stable because the unit circle is
% inculded in the ROC
B3=[1,-0.4,0.6];
A3=[1,-0.3,-0.1];
[X3,Y3]=freqz(B1,A1);

% ROC: z > 0.5 therefore this system is stable because the unit circle is
% inculded in the ROC
B4=[1,1,0];
A4=[1,-0.2,-0.15];
[X4,Y4]=freqz(B1,A1);

%pole-zero plot
figure();
zplane(B2,A2);
title('pole-zero 3');

% Frequency response 
figure();
plot((Y2/pi),abs(X2));
title('Frequency response3');
xlabel('w');
ylabel('H(e^j^w)');

%pole-zero plot
figure();
zplane(B3,A3);
title('pole-zero 4');

% Frequency response
figure();
plot((Y3/pi),abs(X3));
title('Frequency response4');
xlabel('w');
ylabel('H(e^j^w)');

% pole-zero plot
figure();
zplane(B4,A4);
title('pole-zero 5');

% Frequency response
figure();
plot((Y4/pi),abs(X4));
title('Frequency response5');
xlabel('w');
ylabel('H(e^j^w)');