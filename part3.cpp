// CS271
// Program Name: part3.cpp
// Author: Chioma Abed-Amazu
// Date: 10/22/2020
// Purpose: calculates the total cost of a shippment 

//Libraries
#include <iostream>
#include <iomanip>
using namespace std;

// function prototype that specifies default arguments
int totalCost( int shipCost = 0, int costOne = 4, int numBox = 1 );

//function main begins
int main()
{
   // no arguments--use default values for all dimensions
   cout << "The default total cost is: " << totalCost();   //prints the prompt and the value of totalcost

   // specify shipping cost; default cost of one box and number of boxes
   cout << "\n\nThe total cost of a shippment with shipping cost 5,\n"   //prints prompt
      << "cost of one box 4 and number of boxes 1 is: " << totalCost( 5 );   //prints the new value of totalcost

   // specify shipping cost and cost of one box; default number of boxes
   cout << "\n\nThe total cost of a shippment with shipping cost 5,\n"     //prints prompt
       << "cost of one box 10 and number of boxes 1 is: " << totalCost( 5, 10);    //prints the new value of totalcost using the new argument values

   // specify all arguments
   cout << "\n\nThe total cost of a shippment with shipping cost 5,\n"      //prints prompt
      << "cost of one box 10 and number of boxes 4 is: " << totalCost( 5, 10, 4 )    //prints the value of totalcost after the function is called
      << endl;

} //end of main function


// function totalCost calculates the total cost of a shippment
int totalCost( int shipCost, int costOne, int numBox)
{	
	int totalCost;    //declares integer totalcost
	totalCost = shipCost + (numBox) * (costOne);    //calculates the total cost of shippment
        return totalCost;    //returms the value of totalcost

}  //end of totalcost

