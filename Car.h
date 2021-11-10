// CS271
// Program Name: Car.h
// Author: Chioma Abed-Amazu
// Date: 12/02/2020
// Purpose: Declares the function prototype for Class Car

//Libraries
#include <iostream>
#include <iomanip>
#include <fstream>
#include "CarbonFootprint.h"
using namespace std;

//preprocessor wrapper
#ifndef CAR
#define CAR
class Car:public CarbonFootprint
{
	private:
		int gallon;   //stores the amount of gas used in gallon
	
	public:
   		void setGallon(int gallon);   //declares the function setGallon
    		
		int getGallon();        //decalres the function getGallon

		Car(int gallon);      //decalres the function Car
		
		virtual int getCarbonFootprint();   //declares the function getCarbonFootprint
};

#endif   //end of preprocessor

