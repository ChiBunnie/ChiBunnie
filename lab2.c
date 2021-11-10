// CS 271
// Program Name:Arrays and Functions
// Author: Chioma Abed-Amazu
// Date: 09/11/2020
// Purpose: Calls all the function prototypes and header

//Libaries
#include "lab2functions.h"
#include <ctype.h>
#include <stdio.h>
#include <string.h>
#define SIZE 25
#define SIZE_1 6

//Functions main starts
int main (void)  { 
        //inputs
        char input[SIZE] = "AbcdefghijkM04532NLOPqrst";  // intializes the array input of size 20
        char input1[SIZE_1] = "A82B7E";     // intializes the array input1 of size 6
	char input2[SIZE_1] = "a62b7e";    // intializes the array input2 of size 6
	int count;   // stores and counts the number of characters that are in the array called input
	int count_1; // stores and counts the number of characters that are the same  in the same array index

        //CharArray
        printf("The Characters entered in the array input are: " );    // prints the prompt 
        printCharArray(input, SIZE);             // calls the function printCharArray which prints the characters in array input
        printf("\n");    // prints new line

        //countLetters
        printf("\nThe number of characters in the array input is: "); //displays the prompt
	count = countLetters(input, SIZE);     // calls the function countLetters and intializes it to count
        printf("%d\n", count);  // prints the value of count

        //numMatches
        printf("\nmatching characters between input1 and input2 is : "); // displays the prompt
        count_1 = numMatches(input1, input2, SIZE_1);  // calls the function numMatches and intialies it to count 
        printf("%d\n", count_1);  // prints the value of count_1

        //capitalize
        printf("\nConversion of lowercase characters to uppercase: "); //displays the prompt
        capitalize(input, SIZE);  // calls the function capitalize which changes all the lowercase characters in array input to uppercase
        printf("\n"); // prints a new line

}//end main

