// CS271
// Program Name: RationalNumber.cpp
// Author: Chioma Abed-Amazu
// Date: 11/11/2020
// Purpose: implements the function headers

//Libraries
#include <iostream>
#include <iomanip>
#include "RationalNumber.h"
using namespace std;


RationalNumber::RationalNumber(int num, int den){      //checks if the number enetered are negative

               numerator = num;
               if(den == 0){
			
		       invalid_argument d("Denominator cannot be zero");
			throw d;
               
	       } //end of if
	       else{

                              denominator = den;
			      if(den < 0){

                                             numerator = -1*numerator;
					     denominator = -1*denominator;
			      } //end of if
		
	       } //end of else
		
	       reduction();

}  //RationalNumber

void RationalNumber:: reduction(){

	      int i;
	      if(numerator > denominator){
	      
	      		i = numerator;
	      
	      } //end of if

	      else{
		      i = denominator;
              
	      } //end of else

	      int gcd = 1;
	      
	      for(int j = 2; j <= i; j++){
	      
	      		if(numerator % j == 0 && denominator % j == 0){
			
				gcd = j;
			
			}// end of if

	      } //end of for

	      		numerator = numerator/gcd;
			denominator = denominator/gcd;
	   
} //end of reduction

RationalNumber RationalNumber::operator+(const RationalNumber &other){
	       
	       int num = numerator * other.denominator + other.numerator * denominator; 
	       int denom = denominator * other.denominator;

               return RationalNumber(num, denom);

} //end of add operator

RationalNumber RationalNumber:: operator-(const RationalNumber &other){

               int num = numerator * other.denominator - other.numerator * denominator;
               int denom = denominator * other.denominator;

               return RationalNumber(num, denom);

} //end of subtract operator

RationalNumber RationalNumber:: operator*(const RationalNumber &other){

               RationalNumber temp((numerator * other.numerator), (denominator * other.denominator));
	       temp.reduction();

               return temp;

}// end of multiple operator

RationalNumber RationalNumber::operator/(const RationalNumber &other){

               RationalNumber temp((numerator * other.denominator), (denominator * other.numerator));
	       temp.reduction();

               return temp;

}// end of divide operator

bool RationalNumber:: operator<(const RationalNumber &other) const{

               int num1 = numerator*other.denominator;
	       int num2 = denominator*other.numerator;

               return(num1 < num2);

} //end of less-than operator

bool RationalNumber::operator>(const RationalNumber &other) const{

               int num1 = numerator*other.denominator;
	       int num2 = denominator*other.numerator;

               return(num1 > num2);

}// end of greater-than operator

bool RationalNumber::operator<=(const RationalNumber &other) const{

               int num1 = numerator*other.denominator;
	       int num2 = denominator*other.numerator;

               return(num1 <= num2);

}// end of less-than or equal to

bool RationalNumber::operator>=(const RationalNumber &other) const{

               int num1 = numerator*other.denominator;
	       int num2 = denominator*other.numerator;

               return(num1 >= num2);

}// end of greater-than or equal to

bool RationalNumber::operator==(const RationalNumber &other) const{

               return((numerator == other.numerator) && (denominator == other.denominator));

} //end of equality operator

bool RationalNumber::operator!=(const RationalNumber &other) const{

               return((numerator != other.numerator) || (denominator != other.denominator));

} //end of not equal to

void RationalNumber:: display(){

               cout<<numerator<<"/"<<denominator;

} //end of display

