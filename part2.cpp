// CS271
// Program Name: part2.cpp
// Author: Chioma Abed-Amazu
// Date: 10/22/2020
// Purpose: compares a pass-by-value to pass-by-reference using a variable

//Libraries
#include <iostream>
#include <iomanip>
using namespace std;

int sumByValue( int number ); // function prototype (value pass)
void sumByReference( int &numberRef ); // function prototype (reference pass)

//function main begins
int main()
{	
   cout << "Please enter the value of num: ";    //prints the prompt
   int num;      //declares integer num
   cin >> num;     //stores the user ended value to num
   cout << endl;   //prints new line

   // demonstrate sumByValue
   cout << "num = " << num << " before sumByValue\n";	   //prints the promot and the user entered number
   cout << "Value returned by sumByValue: " << sumByValue( num ) << endl;   //prints the promot and the value returned when sumByValue is called
   cout << "num = " << num << " after sumByValue\n" << endl;     //prints the prompt and the num value after sumByValue

   // demonstrate sumByReference
   cout << "num = " << num << " before sumByReference" << endl;    //prints the prompt and the user entered number
   sumByReference( num );          //calls the function sumByReference
   cout << "num = " << num << " after sumByReference" << endl;   //prints the prompt and the num value after sumByReference

} //function main ends


// sumByValue increments number by itself, stores the 
// result in number and returns the new value of number

int sumByValue( int number )
{
   return number += number; // caller's argument not modified

}  //end of sumByValue 

// sumByReference increments numberRef by itself and stores the result
// in the variable to which numberRef refers in function main

void sumByReference( int &numberRef )
{
   numberRef += numberRef; // caller's argument modified

}  //end of sumByReference  

