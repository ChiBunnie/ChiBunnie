// CS271
// Program Name: distinct.cpp
// Author: Chioma Abed-Amazu
// Date: 10/22/2020
// Purpose: counts the number of distinct values and characters entered by the user using the function header distinct.h

//Libraries
#include <iostream>
#include <iomanip>
using namespace std;
#include "distinct.h"

/*function main begins*/
int main(){

	// demonstrate distinct values with int values
	int int1, int2, int3;    //declares the three integers

	cout << "Input three integer values: ";       //prints the prompt
	cin >> int1 >> int2 >> int3;            //stores usered entered integers

	// invoke int version of the distinct values
	cout << "The number of distinct values is: " << distinctValues( int1, int2, int3 );

	// demonstrate distinct values with char values
	char char1, char2, char3; 		//declares the three characters

	cout << "\n\nInput three character values: ";       //prints the prompt
	cin >> char1 >> char2 >> char3;         //stores usered entered characters

	// invoke char version of the distinct value
	cout << "The number of distinct values is: " << distinctValues( char1, char2, char3 );

	// demonstrate maximum with double values
	double double1, double2, double3;     //declares the three floating numbers

	cout << "\n\nInput three floating-point values: ";   //prints the prompt
	cin >> double1 >> double2 >> double3;      //stores usered entered floating point numbers

	// invoke double version of the distinct value
	cout << "The number of distinct values is: "  << distinctValues( double1, double2, double3 ) << endl;

}     //end of main function
