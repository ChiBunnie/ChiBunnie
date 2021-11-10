/*
* Program file name: lab3p4.ino
* <Abed-Amazu Chioma>
* <Team 9>
* <02/05/2019>
*
* Purpose: Program computes the cost of manufacturing closed cylinders.
*/
#include <math.h>
#define PI 3.14159

/*Function proto-types*/
void instruction();
float comp_Sa(float diameter,float height);
float comp_cost( float surf_area ,float M_cost, int quantity);
void disp_results (float surf_area, float cost );

void setup()            // code that runs once
{
 Serial.begin(115200); // open serial monitor at 115 kbps
 float diameter; /* Input–diameter of cylinder */
 float height; /* Input-height of cylinder*/
 int quantity; /*input-annual interest rate */
 float M_cost; /*input- marterial cost*/
 float area; /*Output- surface area*/
 float P_cost; /*Output- production cost*/
/*Display Instructions */
    instruction();
 /* Get input values */
 Serial.print("\nBase diameter (cm):  ");    // prompt
 while(Serial.available()==0);           // wait for send
 diameter= Serial.parseFloat();          // store input
 Serial.print(diameter,0);               // echo print input
 
 Serial.print("\nContainer height (cm):  ");    // prompt
 while(Serial.available()==0);           // wait for send
 height= Serial.parseFloat();          // store input
 Serial.print(height,0);               // echo print input

 Serial.print("\nMaterial cost ($/cm^2):   ");    // prompt
 while(Serial.available()==0);           // wait for send
 M_cost= Serial.parseFloat();          // store input
 Serial.print(M_cost,3);               // echo print input

 Serial.print("\nQuantity:  ");    // prompt
 while(Serial.available()==0);           // wait for send
 quantity= Serial.parseInt();          // store input
 Serial.println(quantity);               // echo print input
 

 /* Compute surface area and production cost */
  area=comp_Sa(diameter,height);
  P_cost= comp_cost(area,M_cost, quantity);
 
 
 /* Display outputs */
 
 disp_results (area, P_cost);
}
void loop()                     // code that runs repeatedly
{
}

void instruction(){
   Serial.print("COST OF MANUFACTURING CLOSED-TOP CYLINDERS");
}
float comp_Sa( float diameter, float height){
  float surf_area;
   surf_area= (2*PI*pow((diameter/2.0),2)) + (2*PI*(diameter/2)*height);
  return (surf_area);  
}
float comp_cost(float surf_area,float M_cost, int quantity){
  float cost; /* Output- Principle i.e money borrowed */
   cost= surf_area * M_cost* quantity;
return (cost);
}
void disp_results (float surf_area, float cost ){
 Serial.print("Surface area in cm^2 ");
 Serial.print(surf_area,2);
 Serial.print("\nProduction cost $ ");
 Serial.print(cost,2);     // 2 decimal places
}
