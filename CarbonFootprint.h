// CS271
// Program Name: CarbonFootprint.h
// Author: Chioma Abed-Amazu
// Date: 12/02/2020
// Purpose: Hold prototypes for the CarbonFootprint class

//Libraries
#include <iostream>
using namespace std;

//preprocessor wrapper
#ifndef CARBONFOOTPRINT_H
#define CARBONFOOTPRINT_H
using namespace std;


class CarbonFootprint{
	
	public:
		virtual int getCarbonFootprint() = 0;

};

#endif  //end of preprocessor


