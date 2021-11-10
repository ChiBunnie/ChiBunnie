%% Lab 3
% Chioma Abed-Amazu
% 09/08/2021

%% Part I
B=[1,0.2,1];
A=[1,-0.3,0.5];

%plots
figure();
zplane(B,A);

%% Part II
[B,A]=butter(5,0.5,'low');
[X,Y]=freqz(B,A);

%plots
figure();
plot((Y/pi),abs(X));

title('Lowpass Butterworth Filter');
xlabel('w');
ylabel('H(e^j^w)');
figure();
zplane(B,A);


%% Part III
[B,A]=butter(9,0.6,'high');
[X,Y]=freqz(B,A);

%plots
figure();
plot((Y/pi),abs(X));
title('Highpass Butterworth Filter');
xlabel('w');
ylabel('H(e^j^w)');
figure();
zplane(B,A);

%% Part IV
[B,A]=butter(4,[0.3,0.5]);
[X,Y]=freqz(B,A);

%plots
figure();
plot((Y/pi),abs(X));
title('Butterworth Bandpass Filter');
xlabel('w');
ylabel('H(e^j^w)');
figure();
zplane(B,A);

%Part V
[N,Fo,Ao,w]=firpmord([1500,2000],[1,0],[0.001,0.01],8000);
B=firpm(N,Fo,Ao,w);
A=1;
[X,Y]=freqz(B,A);

%plots
figure();
plot((Y/pi),abs(X));
title('FIR Lowpass Filter');
xlabel('w');
ylabel('H(e^j^w)');
figure();
zplane(B,A);

