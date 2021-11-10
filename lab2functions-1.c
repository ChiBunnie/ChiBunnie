//CS 271
//Program Name: Passing Arrays to Functions
//Author: Chioma Abed-Amazu
//Date: 09/10/2020
//Purpose: To implement the function prototypes

// Libraries
#include "lab2functions.h"
#include <stdio.h>
#include <ctype.h>
#include <stddef.h>

// implementation of printCharArray
void printCharArray(char letter[], size_t size) {
        for (int j=0; j < size; j++) {     // intialization of the for loop
                printf("%c", letter[j]);   // prints each enetered character in the array
		printf(" ");              // prints a space after each character
	        if (j%10 == 9) {          // prints only 10 characters in a new
           	   printf("\n");        // prints remaining character in a new line
	       }

	} // end of for loop

        printf("\n");  // prints next command in a new line

} // end of printCharArray

//implementation of countLetters
int countLetters(char letter[],size_t size){  
        int  count = 0; 	// intializes count to zero and it stores the number of characters enetered in the array
       
       	for(int i=0; i < size; i++){ 

       	     if( letter[i] != ' '){  // counts the number of characters entered excluding the space character
                    count++;      // stores and count the number characters entered
 	     }  // end if
        }  // end of for loop
        return count;  // returns the count value
}//end countLetters

//implementation of numMatches
int numMatches(char array1[],char array2[],size_t size){
     	int count_1=0;   // intializes count_1 to zero and it stores the number of characters that are the same in both arrays
       
       	for(int k=0; k < size; k++){  // intialization of the for loop
         
	      	if(array1[k] == array2[k]){  // checks if the character in the same array index are the same
                	count_1++;   // stores and count the number characters entered
		}  // end if
	}  // end of for loop
        return count_1;  // returns the value of count
}//end numMatches

//implementation of capitalize
void capitalize(char uppercase[],size_t size){

          for(int z=0; z < size; z++){   // intialization of the for loop

		if(islower(uppercase[z])) {  // checks if the characters in the array is lowercase

        	uppercase[z] = toupper(uppercase[z]);	// changes all the characters in the array that are lowercase to uppercase
 		
		}  // end if
	
	   } // end of for loop

	printf("%s",uppercase);

}//end capitalize 


