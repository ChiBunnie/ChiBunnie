# listPractice.py
# CS 153 or 453
# Written by Chioma Abed-Amazu
# Date written 09/08/2021
# Date/time last modified 09/08/2021
# Purpose:  
# Input: Floating number
# Output: Sum, min, max, avg, last element of a list and also the list

# creates an empty list
myList = []
n = 0
# Makes sure that only five floating numbers are entered
while n < 5:
    myList.append (float(input('Enter floating number: ')))
    n+=1
print()   # prints newline

#calculates the sum and average of the list
total = sum(myList)
avg_element = total/(len(myList))

# print statments
print('The list before removal:',myList)
print('c) The sum of my List is',str(total))
print('d) The mininum element of the list is',min(myList))
print('e) The maximum element of the is',max(myList))
print('f) The average of the list elements is',avg_element)
myList.remove(myList[-1])  #removes the last element of the list
print('h) The list after removal:',myList)