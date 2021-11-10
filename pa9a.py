# pa9a.py
# CS 153 or 453
# Written by Chioma Abed-Amazu
# Date written: 11/04/2021
# Date/time last modified: 11/04/2021
# Purpose: This program replaces strings in a file with a new string and prints the outpur in a file
# Input: two .txt file and strings
# Output: string output file

import os

# This is the main function of the program where the input and output files are implemented
def main():
    # promts the user for an input file
    filename1 = input('Enter file name 1 (.txt): ')
    # prompts the user for an output file
    filename2 = input('Enter file name 2 (.txt): ')
    # prints a new line
    print()
    
    # checks if the file exist
    if (os.path.exists(filename1)):
        # reads the input file
        InFile = open(filename1, 'r')
        # prompts the user for the string to be replaced
        old_string = input('Enter the old string: ')
        # prompts the user for the string to be replaced with
        new_string = input('Enter the new string: ')
        
        # writes the output to the output file
        OutFile = open(filename2, 'w')
        # reads the input file
        
        # reads the loop line by line
        for line in InFile.readlines():
            # replaces the old string with the new string
            word = line.replace(old_string, new_string)
            # writes the new string in the output file
            OutFile.write(word)
            
        # output and input file closes after loop is compelete
        InFile.close()
        OutFile.close()
    
    # prints the error if the code doesn't exist
    else:
        print('Error: The file does not exist.')
        exit()

#                                       Main

# this checks if the main function is a standalone fuction or not        
if __name__ == '__main__':
    # calls the main function
     main()
    
   
    