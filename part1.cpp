// CS271
// Program Name: part1.cpp
// Author: Chioma Abed-Amazu
// Date: 10/22/2020
// Purpose: calulates the area of a circle using inline function  

//Libraries
#include <iostream>
#include <iomanip>
using namespace std;
#define PI 3.14159

/*function prototype*/
inline double circleArea(const double rad){
	double Area;                       // declares the variable area a type double
	Area = PI * (rad * rad);          //calculates the area of a circle
	return Area;			 // returns the value of area

}  //end of function circleArea

/*function begins*/
int main(){
	
	double radius;    //decalres the variable radius as a double

	do {

		cout << "Enter the radius of your circle (-1 to end): ";         //prints the prompt
		cin >> radius;					// stores the user enetered value of radius
		
		if (radius != -1)       //performs function until -1 is entered
			
		    cout << "Area of circle with radius " << radius << " is " << circleArea( radius ) << endl; //prints the prompt and the value of the area and radius
		
	
	} while(radius != -1);      //do while loop ends
	
	cout << "Good bye!" << endl;    //prints the prompt when the user inputs -1



}  	// main function ends

