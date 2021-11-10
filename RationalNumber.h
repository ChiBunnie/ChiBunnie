// CS271
// Program Name: RationalNumber.h
// Author: Chioma Abed-Amazu
// Date: 11/11/2020
// Purpose: writes all the function header

//Libraries
#include <iostream>
#include <iomanip>
using namespace std;

// RationalNumber class
class RationalNumber{
	private:
		int numerator;      //intializes the variable numerator where the numerator value is stored
		int denominator;    //intializes the variable denominator where the denominator value is stored
		void reduction();   //intializes the function reduction where the values are reduces to their lowest terms
	public:
	       RationalNumber(int numerator, int denominator);    //intializes the function rational number where the fraction is stored

               RationalNumber operator+(const RationalNumber&);   //intializes the function for the addition operator

               RationalNumber operator-(const RationalNumber&);  //intializes the function for the substraction operator

               RationalNumber operator*(const RationalNumber&);  //intializes the function for the multiplication operator

               RationalNumber operator/(const RationalNumber&);  //intializes the function for the divison operator

               bool operator<(const RationalNumber&) const;      //intializes the function for the less-than operator

               bool operator>(const RationalNumber&) const;     //intializes the function for the greater-than operator

               bool operator<=(const RationalNumber&) const;   //intializes the function for the less-than operator

               bool operator>=(const RationalNumber&) const;   //intializes the function for the greater-than operator

               bool operator==(const RationalNumber&) const;  //intializes the function for the equality operator

               bool operator!=(const RationalNumber&) const;  //intializes the function for the not equal to operator

               void display();   //displays the fractions in the form num/denom

};

