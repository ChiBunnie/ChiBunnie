/*
* Program file name: LAB1p3.ino
* <Abed-Amazu Chioma>
* <01/22/2019>
*
* Purpose: Given the temperature in degree fehrenheit, this program converts
* it to degree celsius.
*/

void setup()            // code that runs once
{
 Serial.begin(115200); // open serial monitor at 115 kbps
 float degreesF; /* Input–temperature in degrees F */
 float degreesC; /* Output-temperature in degrees C*/

 Serial.print("TEMPERATURE CONVERSION PROGRAM\n");
 /* Get input values */
 Serial.print("\nInput temperature in degrees F: ");    // prompt
 while(Serial.available()==0);           // wait for send
 degreesF= Serial.parseFloat();          // store input
 Serial.print(degreesF,2);               // echo print input
 
 /* Compute output values */
 degreesC= ( degreesF - 32.0)*( 5.0/9.0);
 
 /* Display outputs */
 Serial.print("\n 80.00 degrees F = ");
 Serial.print(degreesC,2);     // 2 decimal places
 Serial.print(" degrees C ");

 
}
void loop()                     // code that runs repeatedly
{
}

