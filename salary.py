# salary.py
# CS 153 or CS 453 (depending on the class in which you are enrolled)
# Written by Chioma Abed-Amazu
# Date written 08/22/2021
# Date/time last modified 08/22/2021
# Purpose: This program does salary calculations.
# Input: the person's hourly wage
# Output: the person's annual salary and monthly salary

hourly_wage = float(input ( "Enter hourly wage: " ))

print('Annual salary is: ')
print(hourly_wage * 40 * 50) # work-hours-per-week = 40, work-weeks-per-year = 50
print()

print('Monthly salary is: ')  # monthly salary = annual_salary/12
print(((hourly_wage * 40 * 50) / 12)) 
print()