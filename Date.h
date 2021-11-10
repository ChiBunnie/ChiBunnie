// CS271
// Program Name: Date.h
// Author: Chioma Abed-Amazu
// Date: 10/28/2020
// Purpose: writes all the function header

//Libraries
#include <iostream>
#include <iomanip>
using namespace std;

// date class
class Date {
	private:
   		unsigned int month;
   		unsigned int day;
   		unsigned int year;
	public:
	static   const unsigned int MIN_MONTH = 1;
	static	const unsigned int MAX_MONTH = 12;
	static	const unsigned int MIN_DAY = 1;
	static	const unsigned int MAX_DAY = 31;
	static	const unsigned int MIN_YEAR = 1950;
	static const unsigned int MAX_YEAR = 2049;
   
	// default constructor
   	Date();
   	// constructor with arguments
   	Date(int , int , int );
   	
	// setter function
   	void setDay(int );
   	void setYear(int );
   	void setMonth(int );
   	
	// getter function
   	int getDay();
   	int getMonth();
   	int getYear();
   	
	// print us date format
   	void printUS();
   	// print short date format
   	void printShort();
   	// print intenational date format
   	void printInternational();
};
