// CS271
// Program Name: TwoDayPackage.cpp
// Author: Chioma Abed-Amazu
// Date: 11/18/2020
// Purpose: implementation of the function prototypes in TwoDayPackage.h

//Libraries
#include <iostream>
#include <iomanip>
#include "TwoDayPackage.h"
#include <string>
using namespace std;

	// constructor to initialize the fields to specified values
	TwoDayPackage::TwoDayPackage(string senderN, string senderAdd, string senderC, string senderS, string senderZ, string recipientN, string recipientAdd,
				     string recipientC,string recipientS, string recipientZ, double w, double cost, double f) //derived class declaration

		: Package(senderN, senderAdd, senderC, senderS, senderZ, recipientN, recipientAdd, recipientC, recipientS, recipientZ, w, cost) //base class declaration
	{
	
		setFlatFee(f);
	
	} //end of TwoDayPackage

	// set the flat fee
	void TwoDayPackage::setFlatFee(double f){
     
		// ensures the flat fee is always positive
		FlatFee = f;
		if(f < 0){
			
			FlatFee = -1 * FlatFee;
		
		} //end of if
	
	} //end of setFlatFee

	// return the flat fee
	double TwoDayPackage::getFlatFee(){
	
		return FlatFee;
	
	} //end of getFlatFee 

	// cost of TwoDayPackage is the total cost of the package + flat fee
	double TwoDayPackage::calculateCost(){

		return(Package::calculateCost() + FlatFee);
	
	} //end of calculateCost

	//end of TwoDayPackage.cpp
