// CS271
// Program Name: Date.cpp
// Author: Chioma Abed-Amazu
// Date: 10/28/2020
// Purpose: implements the function headers i.e scans user entered dates and prints them in different formats

//Libraries
#include <iostream>
#include <iomanip>
#include "Date.h"
using namespace std;


	Date:: Date()
	{
   		// initialize variables to the default values
   		month = MIN_MONTH;  
   		day = MIN_DAY;
   		year = MIN_YEAR;
	
	} //end of default constructor

	Date:: Date(int m, int d, int y)
	{
   		// set date to the user entered value
   		setDay(d);
   		setMonth(m);
   		setYear(y);
	
	} //end of constructor

	void Date::setDay(int d)
	{
   		// if valid set day
   		if (d >= MIN_DAY && d <= MAX_DAY) {
       			
			day = d;
   		
		} //end if

   		// for invalid , throw an exception
   		else {
       			throw "Not valid day\n";
   		
		} // end of else 
	
	} // end of setDay

	void Date::setYear(int y)
	{
   		// if valid set year
   		if (y >= MIN_YEAR && y <= MAX_YEAR) {
       			
			year = y;
   		
		} //end of if

   		// for invalid , throw an exception
   		else
   		{
       			throw "Not valid year\n";
   		
		} //end of else
	
	} //end of setYear

	void Date::setMonth(int m)
	{
   		// if valid set month
   		if (m >= MIN_MONTH && m <= MAX_MONTH) {
       			
			month = m;
   		
		} //end if

   		// for invalid , throw an exception
   		else	
   		{
       			throw "Not valid month\n";
   		
		} //end else
	
	} // wnd of setMonth

	// getter mothods
	int Date::getDay()
	{
   		return day;   //returns the value of variable day
	
	} //end of getDay

	int Date::getMonth()
	{
   		return month;  //returns the value of variable Month
	
	} //end of getMonth

	int Date::getYear()
	{
   		return year;   //returns the calue of the variable year
	
	} //end of getYear

	// prints date in us format
	void Date::printUS()
	{
   		cout << setfill('0') << setw(2) << month << "/" << setfill('0') << setw(2) << day << "/" << year; 
	
	} //end of printUS

	// prints date in short format
	void Date::printShort()
	{
   		cout << month << "/" << day << "/" << setfill('0') << setw(2) << (year % 100);
	
	} //end of printShort

	// prints date in international format
	void Date::printInternational()
	{
   		cout << year << "/" <<  setfill('0') << setw(2) << month << "/" << setfill('0') << setw(2) << day;

	} //end of printInternational




