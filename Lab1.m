%% Lab 1
% Chioma Abed-Amazu
% 08/25/2021

%% Problem 1
% conv(): pefroms the convultion sum of vectors.
x = [10,4,7];
y = [2, 8, 4];
z = conv(x,y);

% filter(): computes the output of a causal, LTI system for a given input
% when the system is specified by a linear constant-coefficient difference
% equation. 

% lsim(): This function can be used to simulate the output of CT, causal LTI
% system. e.g, z = lsim(sys,x,y)

% impulse(): This calculates the unit impulse response of a dynamic system.
% model.For CT dynamic systems is the response to a Dirac input while for a
% DT systems the impulse response is the response to a unit area pulse of
% length Ts and height 1/Ts, where Ts = sample time.
d = [-0.4532 -0.7201;0.8732 0];
e = [-2 2;1 3];
f = [2.901 7.7382];
% sys = ss(d,e,f,0)
% impulse(sys);
% step(): This plots the response of the dynamic system.
% freqs: Evaluates frequency response for an analog filter defined by two
% input coefficient vectors, b and a.
% freqz: Determines the transfer function from the(real or
% complex)numerator and denominator polynomials specified and returns the
% complex frequency response of a digital filter. e.g: t =
% freqz(e,d,250,1000)
%fft: This uses a fast fourier transform algorithm to compute the fourier
%transform of data



%% Problem 2
[x, fs1] = audioread('Happy.wav');
[x_echo, fs2] = audioread('Happy_echo.wav');

%LCCDE coef
a=zeros(5500,1);
a(1)=1;
a(5500)=0.75;

b=zeros(5500,1);
b(1) = 1;
y=filter(b, a, x_echo);

%sound output
%sound(x, fs1);
%sound(x_echo, fs2);
%sound(y, fs1);


%% Problem 3
x = linspace(0,(4*pi));
y = sin(x);
x1 = linspace(0,(4*pi),9);
y1 = sin(x1);

figure()
hold on
stairs(x1, y1)
plot(x,y)
hold off

%% Problem 4
x = linspace(0,(4*pi));
y = sin(x);
x1 = linspace(0,(4*pi),9);
y1 = sin(x1);

figure()
plot(x,y)
% I think a piecewise function command can be used to plot a FOH output. 
