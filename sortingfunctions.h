// CS 271
// Program Name: sortingfunctions.h
// Author: Chioma Abed-Amazu
// Date: 09/16/2020
// Purpose: Declares the function prototypes

//preprocessor wrappers
#include <stddef.h>
#ifndef SORTINGFUNCTIONS
#define SORTINGFUNCTIONS

// function prototypes declearation
int selectionSort(int * const data, size_t length); //sorts the arrray using selecttion sorts and the swap function. ALso counts the number of comaparison done 

int insertionSort(int * const data, size_t length); //sorts the arrray using insertion sorts and counts the number of comaparison done.


#endif // end of preprocessor wrappers
