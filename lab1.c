// CS 271
// Program Name: lab1.c
// Author: Chioma Abed-Amazu
// Date: 08/26/2020
// Purpose: To calculate the average of the four exams taken by each student and displaying their corresponding letter grade.

#include <stdio.h>
#include <math.h>

//function main begins program execution
int main (void) {
	int N;              //The number of grades the user wants to enter
	int grade[4];      //array that stores the grade values entered
	int total;        // sums up the grades enetered
	float average;   // stores the average of the grades entered as a floating point
	char letter;    // stores letter grade for the average
	//intialization phase

	total=0;     // sets total to zero
        N=4;        // N is 4 because 4 grades are being entered

	//average calculation

	while ( 1 ) {      //while the loop is true do the operations inside it
		printf("%s", "Enter the four scores: ");           //prompt the user to input grades
                scanf("%d %d %d %d", &grade[0], &grade[1], &grade[2], &grade[3]);    //reads each grades entered

		if(grade[0] == -1 && grade[1] == 0 && grade[2] == 0 && grade[3] == 0){  //intializes the sentinel value i.e if -1 0 0 0 is not entered break out of the loop
			break;
	        }
	        printf("\nExam scores:  %d %d %d %d\n" ,grade[0], grade[1], grade[2], grade[3]);   // echo prints entered grades

                total = grade[0] + grade[1] + grade[2] + grade[3]; // calculates the sum of the grades entered          
                average = (float) total/N ;                       // calculates the average as a floating point

	        printf("Average:      %.2f\n", average);     //prints avarage value to two decimal places

	        //Computing letter grades

	        if(average >= 90){            // prints A if the conditionis true
			 letter = 'A';
	        }                            // end if
		else if(average >= 80){     //prints B if this condition is true
                          letter = 'B';
                }                          // end else if
		else if(average >= 70){   // prints C if this condition is true
                          letter = 'C';
                }                         // end else if
		else if(average >= 60){   //prints D if the condition is true
                          letter = 'D';
                }                       // end else if
       		else {
		    	   letter = 'F';  //if all the other conditions are false then print F
                }                      // end else

		printf("Letter grade: %c\n ", letter);  // displays letter grade corresponding to the average
		printf("\n");                // prints new line
      }// end of while loop

} // end of main function
