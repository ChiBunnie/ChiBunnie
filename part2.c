// CS271
// Program Name: part2.c
// Author: Chioma Abed-Amazu
// Date: 10/07/2020
// Purpose: calculates the circumference of a circle, the area of a circle and the volume of a sphere

/*Libraries*/
#include <stdio.h>
#include <math.h>
#define PI 3.14159

// prototypes
void funcCircum(double rad);
void funcArea(double rad);
void funcVol(double rad);



int main(void){
	// initialize array of 3 pointers to functions that each take an
   	// int argument and return void                              
   	void (*f[3])(double) = {funcCircum, funcArea, funcVol};    

   	printf("%s", "\nEnter 0 for circumference, 1 for area, 2 for volume, 3 to end: ");  //prints prompt
   	size_t choice = 0; 	// variable to hold user's choice
	double radius = 0; 	//radius of the circle 
	scanf("%u", &choice);   //scans users choice for calculation

   	// process user's choice
   	while (choice >= 0 && choice < 3) {

	printf("Please enter radius: ");  //prints prompt
   	scanf("%lf", &radius);    //scans the radius entered by the user
      	
	// invoke function at location choice in array f and pass
      	// choice as an argument                              
      	
	(*f[choice])(radius);     //calls functions
	

	printf("%s", "\nEnter 0 for circumference, 1 for area, 2 for volume, 3 to end: ");    //prints prompt
      	scanf("%u", &choice);   		//scans users choice for calculation
	} 

   	puts("Program execution completed.");  //prints the prompt

}   //end of main function

void funcCircum(double rad)
{
  
   printf("\nThe circumference of a circle is computed.n\n");  //prints prompt
   double cir = 2.0*PI*rad;		  //calculates the circumference of a circle
   printf("\t\t Radius: %lf", rad);       //prints the value of the radius
   printf("  Circumference: %lf", cir);   //prints the value of the circumference

}   //end of funcCircum

void funcArea(double rad)
{
   printf("The area of a circle is computed.\n");   //prints the prompt
   double area = PI*(rad*rad);        // calculates the area of a circle
   printf("\t\tRadius: %lf", rad);    //prints the value of the radius
   printf("  Area: %lf", area);      //prints the value of the area

}   //end of funcArea

void funcVol(double rad)
{  
   printf("The volume of a sphere is computed.\n");   //prints the prompt
   double vol = (4.0/3.0)*PI*(rad*rad*rad);          //calculates the volume of a sphere
   printf("\t\t Radius: %lf", rad);                 //prints the value of the radius entered
   printf(" Volume: %lf", vol);                    //prints the value of the volume

}   //end of funcVol	

	
