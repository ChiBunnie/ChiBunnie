/*
* Program file name: lab3p3.ino
* <Abed-Amazu Chioma>
* <Team 9>
* <02/05/2019>
*
* Purpose: This program computes monthly car payments.
*/
#include <math.h>

/*Function proto-types*/
void instruction();
float comp_Principal(float Pp,float Dp);
float comp_payment( float i, float P, int n);
void disp_results (float P, float Mp );

void setup()            // code that runs once
{
 Serial.begin(115200); // open serial monitor at 115 kbps
 float Pp; /* Input– purchase price */
 float Dp; /* Input-down payment*/
 float Ann_rate; /*input-annual interest rate */
 int n;        /*input- total number of years or payments*/
 int yrs=5;   /*total year of monthly payment*/
 float Payment;
 float Principal;
 float P; /*Output- money borrowed*/
 float i;/*intermidiate- monthly interest rate*/
/*Display Instructions */
    instruction();
 /* Get input values */
 Serial.print("\nPurchase price ($):  ");    // prompt
 while(Serial.available()==0);           // wait for send
 Pp= Serial.parseFloat();          // store input
 Serial.print(Pp,0);               // echo print input
 
Serial.print("\nDown payment ($):  ");    // prompt
 while(Serial.available()==0);           // wait for send
 Dp= Serial.parseFloat();          // store input
 Serial.print(Dp,0);               // echo print input

  Serial.print("\nInterest rate (%):   ");    // prompt
 while(Serial.available()==0);           // wait for send
 Ann_rate= Serial.parseFloat();          // store input
 Serial.println(Ann_rate,1);               // echo print input
 

 /* Compute Monthly payment */
  n=yrs*12; 
  i=(Ann_rate/100.0)*(1.0/12.0);
  Principal=comp_Principal( Pp,Dp);
  Payment= comp_payment(Principal,i,n);
 
 
 /* Display outputs */
 
 disp_results (Principal, Payment);
}
void loop()                     // code that runs repeatedly
{
}

void instruction(){
   Serial.print("MONTHLY CAR CALCULATOR");
}
float comp_payment( float P, float i, int n){
  float Mp;
   Mp= (i*P)/(1- pow((1+i),-1*n));
  return (Mp);  
}
float comp_Principal(float Pp,float Dp){
float P; /* Output- Principle i.e money borrowed */
   P= Pp-Dp;
return (P);
}
void disp_results (float P, float Mp ){
 Serial.print("You borrowed $ ");
 Serial.print(P,2);
 Serial.print("\nOver 5 years, monthly payment is $ ");
 Serial.print(Mp,2);     // 2 decimal places
}
