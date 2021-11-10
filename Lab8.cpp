// CS271
// Program Name: Lab8.cpp
// Author: Chioma Abed-Amazu
// Date: 11/11/2020
// Purpose: Executes the function and headers files for RationalNumber

//Libraries
#include <iostream>
#include <iomanip>
#include "RationalNumber.h"
#include <ctime>
#include <cstdlib>
using namespace std;


//main function begins
int main() {
	       
	       int n,m;    

               cout<<"\nEnter numerator for first rational no : ";     //prints prompt
	       cin>>n;			                              //scan number for the numerator
               
	       cout<<"\nEnter denominator for first rational no : ";  //prints prompt
      	       cin>>m;                                               //scan number for the denominator
	       
	       cout<<"\nReduced Form[R1]: ";                   //prints prompt
    	       RationalNumber r1(n,m);                    //calls reduction
	       r1.display();                             //displays the reduced fraction

    	       cout<<"\nEnter numerator for second rational no : ";     //prints prompt
	       cin>>n;              				       //scan number for the numerator

    	       cout<<"\nEnter denominator for second rational no : ";  //prints prompt
	       cin>>m;                                                //scan number for the denominator
	       
	       cout<<"\nReduced Form[R2]: ";                             //prints prompt
    	       RationalNumber r2(n,m);                              //calls reduction
	       r2.display();					   //displays the reduced fraction
	       
	       cout<<"\nEnter numerator for third rational no : ";     //prints prompt
               cin>>n;                                                //scan number for the numerator

               cout<<"\nEnter denominator for third rational no : ";  //prints prompt
               cin>>m;                                               //scan number for the denominator

               cout<<"\nReduced Form[R3]: ";                   //prints prompt
               RationalNumber r3(n,m);                    //calls reduction
               r3.display();                             //displays the reduced fraction

               cout<<"\nEnter numerator for fourth rational no : ";     //prints prompt
               cin>>n;                                                 //scan number for the numerator

               cout<<"\nEnter denominator for fourth rational no : ";  //prints prompt
               cin>>m;                                                //scan number for the denominator

               cout<<"\nReduced Form[R4]: ";                             //prints prompt
               RationalNumber r4(n,m);                              //calls reduction
               r4.display();
	        
   	       /*Arithmetric Functions*/	       
               RationalNumber r_add = r1 + r2;   //does the addition function

               RationalNumber r_sub = r1 - r2;   //does the subtraction function

               RationalNumber r_mul = r1 * r2;   //does the multiple function

               RationalNumber r_div = r1 / r2;   //does the divison function
	       
	       cout <<"\nArithmetic Functions";   //prints prompt
               
	       cout<<"\nR1 + R2 : ";       //prints prompt
	       r_add.display();           //prints result

               cout<<"\nR1 - R2 : ";     //prints prompt
	       r_sub.display();          //prints result

               cout<<"\nR1 * R2 : ";    //prints prompt
	       r_mul.display();        //prints result

               cout<<"\nR1 / R2 : ";   //prints prompt
	       r_div.display();       //prints result

               cout<<endl;     //prints new line

	       cout <<"\nRelational and Equality Functions\n";   //prints prompt
               
	       //Checking the inequalities and equalities signs
	       if(r1 == r2)         

                              cout<<"Result(R1 = R2): "<< "True" <<endl;

               else

                              cout<<"Result(R1 = R2): "<< "False" <<endl;
		
	       if(r3 != r4)

                              cout<<"Result(R3 != R4): "<< "True" <<endl;

               else

                              cout<<"Result(R3 != R4): "<< "False" <<endl;
	       
	       if(r1 > r2)

                              cout<<"Result(R1 > R2): "<< "True" <<endl;

               else

                              cout<<"Result(R1 > R2): "<< "False" <<endl;
		
	       if(r3 < r4)

                              cout<<"Result(R3 < R4): "<< "True" <<endl;

               else

                              cout<<"Result(R3 < R4): "<< "False" <<endl;
		
	       if(r1 <= r2)

                              cout<<"Result(R1 <= R2): "<< "True" <<endl;

               else

                              cout<<"Result(R1 <= R2): "<< "False" <<endl;
		
	       if(r3 >= r4)

                              cout<<"Result(R3 >= R4): "<< "True" <<endl;

               else

                              cout<<"Result(R3 >= R4): "<< "False" <<endl;



               return 0;

} // end of main
