// CS 271
// Program Name:sortingfunctions.c
// Author: Chioma Abed-Amazu
// Date: 09/16/2020
// Purpose: To implement the function prototypes in sortingfunctions.h

//Libaries
#include <stdio.h>
#include <stdlib.h>
#include "sortingfunctions.h"
#include "helperfunctions.h"
#include <ctype.h>
#include <stddef.h>

// implementation of function prototypes
int selectionSort(int data[], size_t length){  //This sorts the array in an ascending order using the selection sort method
	int count=0;    // intializes the variable count to zero
	
	for(int i=0; i < length - 1; i++) { // loops over length - 1 elements
		
		int smallest = i;          // first index of the remaining array
		
		for(int j = i + 1; j < length; j++){   // loop to find the index of the smallest element in the array 
			
			if(data[j] < data[smallest]) {
				smallest = j;
			
			}           // end of if
			
			count++;  // counts the number of comparison or if statements that occured
		
		}          // end of inner for loop

	swap(&data[i],&data[smallest]);  // swaps the smallest element

	}                //end of outer for loop 
	
	return count;   // ouputs the value of count

}  // end of selectionSort

int insertionSort(int data[], size_t length) { ///This sorts the array in an ascending order using the insertion sort method
	
	int count_1=0;   // intializes the variable count to zero
	
	for(int i = 1; i < length; i++) { // loops over length - 1 elements
		
		int moveitem = i;    // intializes the location to place elements
		int insert = data[i];  // holds element to insert
		
		// searches for a place to put current element and counts how many comparison occurred
		while(moveitem > 0 && (count_1++) && data[moveitem - 1] > insert) {
			
			data[moveitem] = data[moveitem - 1];  // shifts element to the right by one slot
			--moveitem;

		} // end of while loop
		
		data[moveitem] = insert;  //places inserted element
	
	} // end of for loop
	
	return count_1;   // returns the value of count

}  // end of insertionSort
