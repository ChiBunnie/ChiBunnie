# pa8.py
# CS 153 or 453
# Written by Chioma Abed-Amazu
# Date written: 10/26/2021
# Date/time last modified: 10/28/2021
# Purpose: This program test gets input from an input file and output them in an ouput file 
# Input: string input file
# Output: string output file


#                                Function Definition
# This function removes the non-alphabetical characters from the given string
def remove_non_alpha(s):
    # create an empty string
    word = ''
    # iterates around the string s
    for ch in s:
        # checks if the characters are alphabets
        if ch.isalpha():
            # adds the alphabets to the string
            word += ch
    # returns the variable word      
    return word

# This is the main function of the program where the input and output files are implemented
def main():
    # promts the user for an input file
    input_file = input('Enter input file name: ')
    # reads the input file
    InFile = open(input_file, 'r')
    # prompts the user for an output file
    output_file = input('Enter output file name: ')
    # writes the output to the output file
    OutFile = open(output_file, 'w')
    
    # iterates over the input file
    for line in InFile:
        # removes the new line from string
        s_line = line[:-1]
        # splits the words and converts each element in words to lowercase 
        list3A = [i.lower() for i in s_line.split()]
        # calls the function remove_non_alphafor each element in list3A
        list3B = [remove_non_alpha(i) for i in list3A if remove_non_alpha(i)]
        # creates a list that contains the length of list3B
        list3C = [len(i) for i in list3B]
        # calculates the average
        average = sum(list3C)/len(list3C)
        
        
        # Write to output file/ output file display
        # writes the output of s_line i.e line without \n to the outputfile
        OutFile.write('Original line: {:s}\n'.format(s_line))
        # writes the output the lowercase version of the string and adds spaces
        OutFile.write('Words: {:s}\n'.format(' '.join(list3A)))
        # adds spaces to the list after calling the function
        OutFile.write('Only Letters: {:s}\n'.format(' '.join(list3B)))
        # outputs the average
        OutFile.write('Average word length: {:.1f}\n'.format(average))
        # prints a new line
        OutFile.write('\n')
    
    # output and input file closes after loop is compelete
    InFile.close()
    OutFile.close()


#                                       Main
# this checks if the main function is a standalone fuction or not
if __name__ == '__main__':
    # calls the main function
    main()
 