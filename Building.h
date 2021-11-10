// CS271
// Program Name: Building.h
// Author: Chioma Abed-Amazu
// Date: 12/02/2020
// Purpose: Declares the function prototypes for Class Building

//Libraries
#include <iostream>
#include <iomanip>
#include <fstream>
#include "CarbonFootprint.h"
using namespace std;

//preprocessor wrapper
#ifndef BUILDING
#define BUILDING

class Building:public CarbonFootprint
{
	private:
		int footage;   //stores how many squre foot a house is 
		
	public:
		
		int getFootage();   //declares the function getFootage
			
		void setFootage(int footage);  //declares the function setFootage
			
		Building(int foot);  //declares the function Building
			
		virtual int getCarbonFootprint();   //declares the function getCarbonFootprint
};

#endif    //preprocessor ends

