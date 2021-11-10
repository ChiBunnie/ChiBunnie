// CS271
// Program Name: Bicycle.h
// Author: Chioma Abed-Amazu
// Date: 12/02/2020
// Purpose: Declares the function prototype for class Bicycle.

//Libraries
#include <iostream>
#include <iomanip>
#include <fstream>
#include "CarbonFootprint.h"
using namespace std;

//preprocessor wrapper
#ifndef BICYCLE
#define BICYCLE

class Bicycle:public CarbonFootprint
{
	 private:
                int bikes;   //stores the number of bikes on the road

	public:
		
	        virtual int getCarbonFootprint() override {return 0;}  //always returns the Carbon foot print as zero    
		
	       //Set the number of bikes on the road
    	       void setBikes(int b);

              //Get the number of bikes on the road
              int getBikes();

              //Constructor for the bicycle class
              Bicycle(int b) {
        	
		Bicycle::setBikes(b);
    	
           } //end of Bicycle
};

#endif    // end of preprocessor

