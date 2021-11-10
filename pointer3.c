// CS271
// Program Name: pointer2.c
// Author: Chioma Abed-Amazu
// Date: 09/30/2020
// Purpose: sorts and prints out user inputed values using pointers.

/*Library*/
#include <string.h>
#include <stdio.h>

/*Function Prototypes*/
int input(int *a, int *b, int *c);
int sumsort(int *a, int *b, int *c);

/*Fynction main begins*/
int main(void){
	int a;           // stores the first value entered by the user
	int b;  	// stores the second value entered by the user
	int c;	       // srores the third value entered by the user
	int values;   // counts the number of values entered by the user
	int sum;     // stores the sum of the values enetered
	
	printf("\nTo end program for Linux/Mac/UNIX use \"Ctrl+d\" and \"Ctrl+z\" for windows\n");  //tells the user how to end the program
	
	/*While loop which runs until the eof is entered*/
	while(!feof(stdin)){            
		
		printf("%s", "\nPlease enter integers: ");      //displays the prompt
        	values = input(&a, &b, &c);                    //calls function input and store the returned value in values
		
		if(values == 3){    

			printf("\nThe %d values are: %d, %d, and %d\n", values, a, b, c);    //prints the user entered values and also the number of values entered
			sum = sumsort(&a, &b, &c);                                          //calls function sumsort and stores the returned value in sum
			printf("Integers in ascending order: %d %d %d.", a, b, c);         //prints the sorted values 
			printf(" Their sum is %d\n", sum);                                //prints the sum of the sorted values
		
		}  //end of if

		else{
			printf("\n\nEnd of input reached\n");       //lets the user know that the program has ended
		
		}   //end of else 

	}  //end of while loop

}     //end of main function

/*Function prototype implementation*/
int input(int *a, int *b, int *c){

	return scanf("%d %d %d", a, b, c);  // scans the user entered values and returns the number of values entered
	
}  // end of input function

void swap(int *num1Ptr, int*num2Ptr) { //implementation of the function swap whichexcahnges the content of two memory locations
	int temp = *num1Ptr;     // assigns the variable temp the address of num1ptr
	*num1Ptr = *num2Ptr;     // assigns the address and value of num1ptr to num2ptr
	*num2Ptr = temp;         // assigns the adress and value of num2ptr to temp

}  //end of swap

int sumsort(int *a, int *b, int *c){         // sorts the user entered values in ascending order
	int sum;
	/*while loop to sort functions*/
	while(*a > *b || *b > *c){         

		if(*a >= *b){                
			
			swap(&(*a), &(*b));     //swaps *a and *b if a is greater than b
		
		}  //end of if
	
		if(*b >= *c){               
                	 
			swap(&(*b), &(*c));     //swaps *b and *c if a is greater than b
         	
		} //end of if

		if(*a >= *c){
 			 
			swap(&(*a), &(*c));      //swaps *a and *c if a is greater than b
        	
		}  //end of if

	}   //end of while loop
	
	sum = (*a) + (*b) + (*c);
	return sum;

} //end of sumsort
