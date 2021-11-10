%% Homework 5
%Chioma Abed-Amazu
% 10/13/2021

clear
clc
%% Problem 1
x = readtable('results.xlsx');
real_power = x{:,1};
L_voltage = x{:,2};

figure()
plot(real_power, L_voltage)

xlabel('Real Power (MW)')
ylabel('Bus Voltage (kV)')

% b) 10 MW - 2260 MW is the range of real power that can be delivered while keeping the load bus
% voltage within +/-5% nominal which is 2308.95 MW

%% Problem 2

reactive_power = x{:,3};
L_voltage = x{:,4};

figure()
plot(reactive_power, L_voltage)

xlabel('Reactive Power (MW)')
ylabel('Bus Voltage (kV)')


%% Problem 3

% pf = 0.95 leading
x = readtable('hwk5-3P.xlsx');
y = readtable('hwk5-3Q.xlsx');
real_power = x{:,1};
L_voltage1 = x{:,2};
figure()
plot(real_power, L_voltage1)
hold on
reactive_power1 = y{:,1};
L_voltage2 = y{:,2};
plot(reactive_power1, L_voltage2)
hold off

% Lagging pf=0.95
z = readtable('P3.xlsx');
real_power2 = z{:,1};
L_voltage3 = z{:,2};
reactive_power2 = z{:,3};
L_voltage4 = z{:,4};
figure()
plot(real_power2, L_voltage3)
hold on
plot(reactive_power2, L_voltage4)
hold off


