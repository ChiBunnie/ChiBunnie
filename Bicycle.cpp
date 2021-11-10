// CS271
// Program Name: Bicycle.cpp
// Author: Chioma Abed-Amazu
// Date: 12/02/2020
// Purpose: implements the class function Bicycle

//Libraries
#include <iostream>
#include <iomanip>
#include <fstream>
#include "Bicycle.h"
using namespace std;

//sets the number of bikes on the road
void Bicycle::setBikes(int b) {
	
	Bicycle::bikes = b;

} //end of function setBike

//returns the number of bikes
int Bicycle::getBikes() {
	
	return Bicycle::bikes;

} //end function of getBike

