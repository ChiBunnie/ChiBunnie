// CS271
// Program Name: part1.c
// Author: Chioma Abed-Amazu
// Date: 10/07/2020
// Purpose: To shift the first element of an array to the left

/*Libraries*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*function prototypes*/
void shiftLeft(int *firstPtr, int *lastPtr);

/*Function main begins*/
int main(void){
	
	int N;      //the size of the array
	int Max;    //the maximum element in the array
	srand(time(NULL)); //seeds the random numbers

	printf("\nEhter the number of elements in array: ");      //prompts the user the size of the array
	scanf("%d", &N);     //scans the size of the array entered by the user
	
	int array[N];       //the array of the elements to be shifted

	printf("\nEnter the maximum value for the array: ");    //prompts the user to enter the maximum value the array elements should have
	scanf("%d", &Max);                //scans maximum value entered

	for(int i=0; i<N; i++){
	
		array[i] = (rand() % (Max + 1 - 1)) + 1;      //fills the array of size N with random values from 1 to the entered max number
	
	}  //end of for
	
	printf("\nArray before shiftLeft function: ");       //prints prompt
	for(int i=0; i<N; i++){

                 printf("%d", array[i]);                 //prints the elements in the array
		 printf(" ");        //prints a space between each element
        }  //end of for

	printf("\n\nArray after the shiftLeft function: ");   //prints prompt
	shiftLeft(&array[0], &array[N-1]);             // calls shiftLeft function

	for(int i=0; i<N; i++){
	
                 printf("%d", array[i]);           //prints array after shiftleft function has been called
		 printf(" ");        //prints space between the array elements
        }  //end of for
	printf("\n\n");   //prints two new linea

}   //function main ends


/*Function implementation*/
void shiftLeft(int *firstPtr, int *lastPtr){      //shift the first element of the array to the left and stops when it gets to the end of the array
	int temp;         //stores the array value temporarily
	int i;            //counter
	int N = (lastPtr - firstPtr) + 1;   //computes the array size
	temp = *firstPtr;         //stores the value or address of firstPtr in temp

	for(i = 0; i < N-1; i++){
		
		*firstPtr = *(firstPtr + 1);      //shifts the first element to the left 
		firstPtr = firstPtr + 1;
	
	}    //end of for
	
	*lastPtr = temp;    //puts the first element in the address of the last element in the array

} // end of shiftLeft

