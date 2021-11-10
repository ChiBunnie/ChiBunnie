# pa9b.py
# CS 153 or 453
# Written by Chioma Abed-Amazu
# Date written: 11/04/2021
# Date/time last modified: 11/04/2021
# Purpose: This program compares lines from two files and displays them with the differences 
# Input: string input file
# Output: string output string

import os

# This is the main function of the program where the input files and output are implemented
def main():
    # promts the user for an input file
    filename1 = input('Enter file name 1 (.txt): ')
     # prompts the user for an output file
    filename2 = input('Enter file name 2 (.txt): ')
    print()
    # checks to see if file 1 exist
    if (os.path.exists(filename1)):
        # reads the input file
        File1 = open(filename1, 'r')
        
        # checks to see if file 2 exist
        if (os.path.exists(filename2)):
            # reads the input file
            File2 = open(filename2, 'r')
            
        # gets the each line from both files and compares them   
            for line1 in File1:
                # stores each line in file 2 into line 2
                line2 = File2.readline()
                # compares each line
                if line1 != line2:
                    # print prompt if true
                    print('File 1: ', line1, end='')
                    print('File 2: ', line2,end='')
                    print('Diff:    ', end='')
                    for i in range(len(line1)):
                        #print an x for different characters'''
                        if line1[i] != line2[i]:
                            print('x', end='')
                            #print a space for same characters.'''
                        else:
                            print(' ', end='')
                print()
                    
            
                
            # closes both files after loop is compelete
            File1.close()
            File2.close()
        
        # displays error if file 2 doesn't exist     
        else:
           print('Error: The file 2 does not exist.')
           
    # displays error if file 1 doesn't exist    
    else:
      print('Error: The file 1 does not exist.')
      
#                                       Main

# this checks if the main function is a standalone fuction or not        
if __name__ == '__main__':
    # calls the main function
     main()