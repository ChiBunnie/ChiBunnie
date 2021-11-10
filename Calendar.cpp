// CS271
// Program Name: Calendar.cpp
// Author: Chioma Abed-Amazu
// Date: 10/28/2020
// Purpose: writes the date in a US, short and international formats using Date.h and Date.cpp

//Libraries
#include <iostream>
#include <iomanip>
#include "Date.h"
#include <ctime>
#include <cstdlib>
using namespace std;

//constants
#define SIZE 5
static   const unsigned int MIN_MONTH = 1;
static  const unsigned int MAX_MONTH = 12;
static  const unsigned int MIN_DAY = 1;
static  const unsigned int MAX_DAY = 31;
static  const unsigned int MIN_YEAR = 1950;
static const unsigned int MAX_YEAR = 2049;

//main function begins
int main() {
   Date *dates = new Date[SIZE];     //intializes the array Date to the const SIZE
   for (int i = 0; i < SIZE; i++) {
       
       unsigned int year;   //declares variable year
       unsigned int month;  //declares variable month
       unsigned int day;   //declares variable day

       srand(time(NULL));  //seeds the rand numbers

       year = rand() % (MAX_YEAR - MIN_YEAR) + MIN_YEAR;    //generates random values btw the min and the max inclusive

       // user input for day and month
       cout << "Enter the month of the year " << year << " : ";    // prints prompt
       cin >> month;    // scans user enetered month
       cout << "Enter the day of the year " << year << " : ";   //prints prompt
       cin >> day;    //scans the user entered day

       // exceptions checking
       try {
           dates[i].setYear(year);
       }  //end of try
       catch (const char *e) {    //prints an erroe message when an invalid year is entered
           cout << "Error : ";
           cout << e;
       }  // end of catch

       try {
           dates[i].setMonth(month);
       } //end of try
       catch (const char *e) {   //prints an error message when an invalid month is entered
           cout << "Error : ";
           cout << e;
       }  //end of catch

       try {
           dates[i].setDay(day);
       }  //end of try
       catch (const char *e) {  //prints an error message when an invalid day is enetered
           cout << "Error : ";
           cout << e;
       
       }  //end of catch

       // display date format
       cout << "\nUS date : ";   //prints prompt
       dates[i].printUS();    //calls the function printUS
       cout << endl;      //prints new line
       cout << "Short date : ";   //prints prompt
       dates[i].printShort();    //calls the function printShort
       cout << endl;       //prints new line
       cout << "International date : ";     //prints prompt
       dates[i].printInternational();    //calls the function printInternational
       cout << "\n";        //prints a new line


   }  //end of for

   cout << "\nEnd Program.\n";    //prints prompt
   return 0;

} //end of main


