// CS 271
// Program Name: helperfunctions.h
// Author: Chioma Abed-Amazu
// Date: 09/16/2020
// Purpose: Declaration of function prototypes

//pre processpr wrapper
#ifndef HELPERFUNCTIONS
#define HELPERFUNCTIONS
#include <stddef.h>

//function prototypes
void swap(int *num1Ptr, int *num2Ptr);  // exachanges the content of two memory locations using the pointers num1ptr and num2ptr

void fillArray(int data[], size_t length, int min, int max); // fills the array with random numbersin the range of min-max

void neatPrint(int data[], size_t length, int numPerLine, int fieldSize); //prints the array elements in nice, neat col using the paraments numbperline and fieldsize

#endif    // end of pre processor wrapper

