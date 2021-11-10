// CS271
// Program Name: TwoDayPackage.h
// Author: Chioma Abed-Amazu
// Date: 11/18/2020
// Purpose: Declares the data memebers and function prototypes for the base class "TwoDayPackage"

//Libraries
#include <iostream>
#include <iomanip>
#include "Package.h"
#include <string>
using namespace std;

//class function begins
class TwoDayPackage : public Package{
	private:
		double FlatFee;       //stores the cost of the flat fee
	
	public:
		TwoDayPackage (string sname, string saddress, string scity, string sstate, string szip, string rname, 
			       string raddress, string rcity, string rstate, string rzip, double w, double c, double f);   //constructor 
		
		void setFlatFee(double f);     //declares the function setFlatFee 

		double getFlatFee();    //declares the double function getFlatFee which returns a positive value for the flat fee
 		
		double calculateCost();  //declares the double function calculateCost which calculates the cost of shipping for the package

};     //end of class function
