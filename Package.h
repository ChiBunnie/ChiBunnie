// CS271
// Program Name: Package.h
// Author: Chioma Abed-Amazu
// Date: 11/18/2020
// Purpose: Declares the data memebers and function prototypes for the base class "Package" 

//Libraries
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

//class definition begins
class Package {
	private:
		string senderName;      //stores the sender's name
		
		string senderAddress;  //stores the sender's address
		
		string senderCity;    //stores the sender's city
		
		string senderState;   //stores the sender's state
		
		string senderZip;     //stores the sender's zip code
		
		string recipientName;  //stores the recipient's name
		
		string recipientAddress;  //stores the recipient's address
		
		string recipientCity;   //stores the recipients's city
		
		string recipientState;  //stores the recipient's state
		
		string recipientZip;   //stores the recipients's zip code
		
		double weight;     //stores the weight of the package in ounces
		
		double costPerOunce;  //stores the cost per ounce of the package

	
	public:
		Package (string sname, string saddress, string scity, string sstate, string szip, string rname, string raddress, 
			 string rcity, string rstate, string rzip, double w, double c);  //constructor

		void setSenderName(string senderN);    //declares the function setSenderName
		
		void setSenderAddress(string senderAdd);  //declares the function setSenderAddress
		
		void setSenderCity(string senderC);    //declares the function setSenderCity
		
		void setSenderState(string senderS);  //declares the function setSenderState
		
		void setSenderZIP(string senderZ);   //declares the function setSenderZIP
		
		void setRecipientName(string recipientN);  //declares the function setRecipientName
		
		void setRecipientAddress(string recipientAdd);  //declares the function setRecipientAddress
		
		void setRecipientCity(string recipientC);    //declares the function setRecipientCity
		
		void setRecipientState(string recipientS);   //declares the function setRecipientState
		
		void setRecipientZIP(string recipientZ);   //declares the function setRecipientZIP
   		
		void setWeight(double w);    //declares the function setWeight
		
		void setCostPerOunce(double cost);  //declares the function setCostPerOunce
   		
		string getSenderName();    //declares the string function getSenderName which returns the sender's name
		
		string getSenderAddress();  //declares the string function getSenderAddress which returns the sender's Address
		
		string getSenderCity();   //declares the string function getSenderCity which returns the sender's city
		
		string getSenderState();  //declares the string function getSenderState which returns the sender's state
		
		string getSenderZIP();   //declares the string function getSenderZIP which returns the sender's zip code
		
		string getRecipientName();  //declares the string function getRecipientName which returns the recipient's name
		
		string getRecipientAddress();  //declares the string function getRecipientAddress which returns the recipient's address
		
		string getRecipientCity();   //declares the string function getRecipientCity which returns the recipient's city
		
		string getRecipientState();  //declares the string function getRecipientState which returns the recipient's state
		
		string getRecipientZIP();   //declares the string function getRecipinentZIP which returns the recipient's zip code
		
		double getWeight();   //declares the double function getWeight which returns the weight of the package as a positive number
		
		double getCostPerOunce();  //declares the double function getCostPerOunce which returns the cost per ounce as a positive number
		
		double calculateCost();  //declares the double function calculateCost which calculates the cost of shipping of the package

};   //end of class function

