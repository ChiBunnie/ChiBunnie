// CS271
// Program Name: Car.cpp
// Author: Chioma Abed-Amazu
// Date: 12/02/2020
// Purpose: Implements the prototypes for Class Car

//Libraries
#include <iostream>
#include <iomanip>
#include <fstream>
#include "CarbonFootprint.h"
#include "Car.h"
using namespace std;

// parameterized constructor to initialize the fields to specified values
Car::Car(int gallon) {

        Car::setGallon(gallon);

} //end of Car

//sets the gallon size
void Car::setGallon(int gallon) {
	
	Car::gallon = gallon;

} //end of setGallon

//gets the value entered for gallon
int Car::getGallon() {
	
	return Car::gallon;

} //end of getGallon

//calculates the carbon foot print of the car
int Car::getCarbonFootprint() {
	
	return Car::getGallon() * 20;

} //end of getCarbonFootprint
        
