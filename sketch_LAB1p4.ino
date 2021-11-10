/*
* Program file name: LAB1p3.ino
* <Abed-Amazu Chioma>
* <01/22/2019>
*
* Purpose: Calculating the mileage reimbursement rate for 2019
*/

void setup()            // code that runs once
{
 Serial.begin(115200); // open serial monitor at 115 kbps
 float input1; /* Input–beginning reading */
 float input2; /* Input-ending reading*/
 float output; /* Output value */

 Serial.print("MILEAGE REIMBURSEMENT CALCULATOR\n");
 /* Get input values */
 Serial.print("\n Enter beginning odometer reading=> ");    // prompt
 while(Serial.available()==0);           // wait for send
 input1= Serial.parseFloat();          // store input
 Serial.print(input1,1);               // echo print input
 
Serial.print("\n Enter ending odometer reading=> ");    // prompt
 while(Serial.available()==0);           // wait for send
 input2= Serial.parseFloat();          // store input
 Serial.print(input2,1);               // echo print input
 

 /* Compute output values */
 output =  (input2 * 0.58)-(input1 * 0.58);
 
 /* Display outputs */
 Serial.print("\n You traveled 305.4 miles. At $0.58 per mile, ");
 Serial.print("\n your reimbursement is $");
 Serial.print(output ,2);     // 2 decimal places
 
}
void loop()                     // code that runs repeatedly
{
}

