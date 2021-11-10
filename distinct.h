// CS271
// Program Name: distinct.h
// Author: Chioma Abed-Amazu
// Date: 10/22/2020
// Purpose: counts the number of distinct values entered by the user

//Libraries
#include <iostream>
#include <iomanip>
using namespace std;

template <class T>   // declares the class template T

int distinctValues( T value1, T value2, T value3 )
{

	// initializing  count = 0
	int count = 0;

	// If all three values are equal return 1
        if(value1 == value2 && value1 == value3){
         	return 1;
	}
	// if value1 not equal to value2 increase count by 1
        if(value1 != value2) count++;

	// if value1 not equal to value3 increase count by 1
        if(value1 != value3) count++;

	// if value2 not equal to value3 increase count by 1
        if(value2 != value3) count++;

	// reutrn the count
        return count;

} // end of function distinctValues
	
