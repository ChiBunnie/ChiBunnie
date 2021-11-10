// CS271
// Program Name: Building.cpp
// Author: Chioma Abed-Amazu
// Date: 12/02/2020
// Purpose: Implements the function prototype of Class Building.

//Libraries
#include <iostream>
#include <iomanip>
#include <fstream>
#include "CarbonFootprint.h"
#include "Building.h"
using namespace std;

//constant definitions
#define WOOD 50
#define BASE 20
#define CONCRETE 47
#define STEEL 17

// parameterized constructor to initialize the fields to specified values
Building::Building(int foot) {
	
	Building::setFootage(foot);

} //end of Building

//sets the square footage of the building
void Building::setFootage(int footage) {
	
	Building::footage = footage;

} //end of setFootage

//returns the sqaure footage of the building
int Building::getFootage() {
	
	return Building::footage;

} //end of getFootage

//returns the calculated value of the carbon foot print of the building
int Building::getCarbonFootprint() {
	
	return Building::getFootage() * (WOOD + BASE + CONCRETE + STEEL);

} //end of getCarbonFootprint



                                //cout<<"Building with"<<footage<<"square feet:"<<getFootage()*(50+20+47+17)<<"."<<endl;


