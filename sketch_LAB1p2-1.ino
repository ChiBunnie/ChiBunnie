/*
* Program file name: LAB1p2.ino
* <Abed-Amazu Chioma>
* <01/22/2019>
*
* Purpose: Given the radius, this program computes
* the surface area and volume of a sphere.
*/

void setup()            // code that runs once
{
 Serial.begin(115200); // open serial monitor at 115 kbps
 float base; /* Input–base of a square-based pyramid */
 float height;/* input-height of a square-based pyramid*/
 float surface_area; /* Output–Surface area of a square-based pyramid */
 float volume; /* Output-Volume of a square-based pyramid */

 Serial.print("Program computes surface area and volume of a square-based pyramid\n");
 /* Get input values */
 Serial.print("\nEnter the base: ");    // prompt
 while(Serial.available()==0);           // wait for send
 base = Serial.parseFloat();          // store input
 Serial.print(base,2);               // echo print input
 Serial.print("\nEnter the height: ");    // prompt
 while(Serial.available()==0);           // wait for send
 height = Serial.parseFloat();          // store input
 Serial.print(height,2);               // echo print input
 /* Compute output values */
 surface_area = base* base + 2.0*base*sqrt ((base * base)/4.0 +(height * height));
 volume = base * base * height/3.0;
 /* Display outputs */
 Serial.print("\nSurface area: ");
 Serial.print(surface_area,2);     // 2 decimal places
 Serial.print("\nVolume: ");
 Serial.print(volume,2);          // 2 decimal places
}
void loop()                     // code that runs repeatedly
{
}

