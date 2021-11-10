// CS 271
// Program Name: helperfunctions.c
// Author: Chioma Abed-Amazu
// Date: 09/16/2020
// Purpose: To implement all the function prototypes

//Libaries
#include <stdio.h>
#include <stdlib.h>
#include "helperfunctions.h"
#include <ctype.h>
#include <stddef.h>
#include <time.h>

//implementation of function prototypes
void neatPrint(int data[], size_t length, int numPerLine, int fieldSize) { // implementation of function neatPrint that prints the elemets in an array in neat columns 
	for(size_t j=0; j < length; j++){    // for loop condition to scan the elements inputed in the array 
		printf("%*d",fieldSize,data[j]);  //prints the elements in the arrau with a fieldsize value
		if(j%numPerLine == (numPerLine - 1)) {  // prints a programmer assgined number of elements per line
		    printf("\n");    //prints new line
		}  //end of if
	}  // end of for
	printf("\n");  // prints new line
}   // end of neatPrint

void fillArray(int data[], size_t length, int min, int max) { // implemetation of the function fillArray which fills the array with rand numbers with the range min-max
	srand(time(NULL)); // seeds random function
	for(int i=0; i < length; i++) {
            data[i] = (rand() % (max + 1 - min))+min; // gives elements in the array a random number
	}   // end of for
}   //end of fillArray

void swap(int *num1Ptr, int*num2Ptr) { //implementation of the function swap whichexcahnges the content of two memory locations
	int temp = *num1Ptr;     // assigns the variable temp the address of num1ptr
	*num1Ptr = *num2Ptr;     // assigns the address and value of num1ptr to num2ptr
	*num2Ptr = temp;         // assigns the adress and value of num2ptr to temp

}  //end of swap

