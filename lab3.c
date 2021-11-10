// CS 271
// Program Name: lab3
// Author: Chioma Abed-Amazu
// Date: 09/16/2020
// Purpose: Calls all the functions declared in the h files

//Libaries
#include <stdio.h>
#include <stdlib.h>
#include "helperfunctions.h"
#include "sortingfunctions.h"
#include <stddef.h>
#define ARRAYSIZE 60

//function main begins

int main (void) {

       int array[ARRAYSIZE];        // declare an array of size ARRAYSIZE
       int MAX = 999;              // assigns the maxiumum value to be 999
       int MIN = 1;               // assigns the minimuim value to 1
       int MAX_1 = 500;          //assigns the maximum value to be 500
       int MIN_1 = 10;          // assigns the minimum value to be 10
       int fieldspace = 5;     // assigns the fieldspace between array elements to be 5
       int fieldsize = 4;     //  assigns the fieldspace between array elements to be 4
       int numperline = 10;      // assigns the number of elements printed per line to be 10
       int numberperline = 12;  //  assigns the number of elements printed per line to be 12
       int count = 0;      // intializes the variable count to zero
       int count_1 = 0;        // intializas the variable count_1 to 0
	
       // Function calls
       printf("The elements in the array are:\n");   // displays the prompt
       fillArray(array, ARRAYSIZE, MIN, MAX);       // calls the function fillArray to print random numbers with a range
       neatPrint(array, ARRAYSIZE, numperline, fieldspace); // calls the function neatPrint to arrange the elements in the array in neat columns
       printf("\n");    // prints new line

       selectionSort(array, ARRAYSIZE);    // call the function selectionSort to sort out the array elements in an ascending order 
       count = selectionSort(array, ARRAYSIZE);  // counts the number of comparison done my the sort function and stores it in varaible count
       printf("Number of Comparisons carried out is: %d\n", count);  // display the prompt and prints the value of count 

       printf("\nThe Sorted array using selection sort is:\n"); // displays the prompt
       neatPrint(array, ARRAYSIZE, numperline, fieldspace);   //calls the function neatPrint to print the sorted array in neat columns
       printf("\n");   // prints new line
       
       printf("The elements in the array are:\n");  // displays the prompt
       fillArray(array, ARRAYSIZE, MIN_1, MAX_1);   //  calls the function fillArray to print random numbers with a range
       neatPrint(array, ARRAYSIZE, numberperline, fieldsize); //calls the function neatPrint to arrange the elements in the array in neat columns
       printf("\n");   // prints new line

       insertionSort(array, ARRAYSIZE);   //call the function insertionSort to sort out the array elements in an ascending order
       count_1 = insertionSort(array, ARRAYSIZE);  //counts the number of comparison done my the sort function and stores it in varaible count
       printf("Number of Comparisons carried out is: %d\n", count_1); //display the prompt and prints the value of count

       printf("\nThe Sorted array using insertion sort is:\n"); // displays the prompt
       neatPrint(array, ARRAYSIZE, numberperline, fieldsize);  //calls the function neatPrint to print the sorted array in neat columns
       printf("\n");  //prints new line

} // end of main functions


