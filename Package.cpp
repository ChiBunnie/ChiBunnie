// CS271
// Program Name: Package.cpp
// Author: Chioma Abed-Amazu
// Date: 11/18/2020
// Purpose: implementation of all the function prototypes in Package.h

//Libraries
#include <iostream>
#include <iomanip>
#include "Package.h"
#include <ctime>
#include <cstdlib>
#include <string>
using namespace std;

	// parameterized constructor to initialize the fields to specified values
	Package::Package(string senderN, string senderAdd, string senderC, string senderS, string senderZ, string recipientN, string recipientAdd,
			 string recipientC,string recipientS, string recipientZ, double w, double cost)
			{
				setSenderName(senderN);
				
				setSenderAddress(senderAdd);
 				
				setSenderCity(senderC);
				
				setSenderState(senderS);
				
				setSenderZIP(senderZ);
				
				setRecipientName(recipientN);
				
				setRecipientAddress(recipientAdd);
				
				setRecipientCity(recipientC);
				
				setRecipientState(recipientS);
				
				setRecipientZIP(recipientZ);
   				
				setWeight(w);
				
				setCostPerOunce(cost);
			
			} //end of package
	
	// set the sender name
	void Package::setSenderName(string senderN){
		
		senderName = senderN;
	
	}// end of setSenderName

	// return the sender name
	string Package::getSenderName(){
	
		return senderName;
	
	}// end of getSenderName

	// set the sender address
	void Package::setSenderAddress(string senderAdd){
	
		senderAddress = senderAdd;
	
	}// end of setSenderAddress

	// return the sender address
	string Package::getSenderAddress(){
	
		return senderAddress;
	
	} //end of getSenderAddress

	// set the sender city
	void Package::setSenderCity(string senderC){
	
		senderCity = senderC;
	
	}// end of setSenderCity

	// return the sender city
	string Package::getSenderCity(){
	
		return senderCity;
	
	}// end of getSenderCity

	// set the sender state
	void Package::setSenderState(string senderS){
	
		senderState = senderS;
	
	}// end of setSenderState

	// return the sender state
	string Package::getSenderState(){
	
		return senderState;
	
	}// end of getSenderState

	// set the sender zip
	void Package::setSenderZIP(string senderZ){
	
		senderZip = senderZ;
	
	}// end of setSenderZIP

	// return the sender zip
	string Package::getSenderZIP(){
	
		return senderZip;
	
	}// end of getSenderZIP

	// set the recipient name
	void Package::setRecipientName(string recipientN){
	
		recipientName = recipientN;
	
	}// end of setRecipientName

	// return the recipient name
	string Package::getRecipientName(){
	
		return recipientName;
	
	}// end of getRecipientName

	// set the recipient address
	void Package::setRecipientAddress(string recipientAdd){
	
		recipientAddress = recipientAdd;
	
	}// end of setRecipientAddress

	// return the recipient address
	string Package::getRecipientAddress(){
	
		return recipientAddress;
	
	} //end of getRecipientAddress

	// set the recipient city
	void Package::setRecipientCity(string recipientC){
	
		recipientCity = recipientC;
	
	} //end of setRecipientCity

	// return the recipient city
	string Package::getRecipientCity(){
	
		return recipientCity;
	
	} //end of getRecipientCity

	// set the recipient state
	void Package::setRecipientState(string recipientS){
	
		recipientState = recipientS;
	
	}//end of setRecipientState

	// return the recipient state
	string Package::getRecipientState(){
	
		return recipientState;
	
	} //end of getRecipientState

	// set the recipient zip
	void Package::setRecipientZIP(string recipientZ){
	
		recipientZip = recipientZ;
	
	} //end of setRecipientZIP

	// return the recipient zip
	string Package::getRecipientZIP(){
	
		return recipientZip;
	
	} //end of getRecipientZIP

	// set the package weight
	void Package::setWeight(double w){
   
		// makes sure the weight is always positive
		weight = w;
		if(w < 0){
			
			weight = -1 * weight;
		
		}// end of if
	
	} //end of setWeight

	// return the package weight
	double Package::getWeight(){

		return weight;
	
	} //end of getWeight

	// set the package cost per ounce
	void Package::setCostPerOunce(double cost){
   
		// makes sure the costPerOunce is always positive
		costPerOunce = cost;
		if(cost < 0){
			
			costPerOunce = -1 * costPerOunce;
		
		}  //end of if
	
	}  //end of CostPerOunce

	// return the package cost per ounce
	double Package::getCostPerOunce(){

		return costPerOunce;
	
	}  //end of CostPerOunce

	// calculate and return the cost of the package
	double Package::calculateCost(){
	
		double result;

		result = weight * costPerOunce;

		return result;
	
	}  //end of calculateCost 
