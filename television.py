# television.py
# CS 153 or 453
# Written by Chioma Abed-Amazu
# Date written: 08/31/2021
# Date/time last modified: 08/31/2021
# Purpose: This program calculates the width and height of a televison given the diagonal measurement.
# Input: diagonal measurement
# Output: width and height of the tv screen

import math

# reads in diagonal measurement
diagonal_measure = float(input('Enter the diagonal measurement: '))

# intializes the constant width and height
w = 16
h = 9

# The ratio of w:h
ratio = w/h

# calculates the width and the height
height = math.sqrt(((diagonal_measure**2))/(((ratio**2)) + 1))
width = ((w/h)*height)

# makes the weight and height floating variables
f_width = float(width)
f_height = float(height)

# prints the values of height and weight
print('The width is',f_width,'.')
print('The height is',f_height,'.')
