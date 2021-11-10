/*
* Program file name: lab2p4.ino
* <Abed-Amazu Chioma>
* <Team 9>
* <01/29/2019>
*
* Purpose: This program computes the hydroelectric power of a dam.
*/
#define DENSITY_WATER 998.98
#define GRAV_CON 9.81

void setup()            // code that runs once
{
 Serial.begin(115200); // open serial monitor at 115 kbps
 float height; /* Input–height of the dam */
 float eff; /* Input-efficiency of power conversion*/
 float water_flow; /*input-flow of water in m^3/sec */
 float output_power; /* Output power */
 float output;

 Serial.print("HYDROELECTRIC DAM CALCULATOR");
 /* Get input values */
 Serial.print("\nHeight of dam in meters:  ");    // prompt
 while(Serial.available()==0);           // wait for send
 height= Serial.parseFloat();          // store input
 Serial.print(height,1);               // echo print input
 
Serial.print("\nFlow of water in meters^3 per second:  ");    // prompt
 while(Serial.available()==0);           // wait for send
 water_flow= Serial.parseFloat();          // store input
 Serial.print(water_flow,0);               // echo print input

  Serial.print("\nEfficiency of power conversion:   ");    // prompt
 while(Serial.available()==0);           // wait for send
 eff= Serial.parseFloat();          // store input
 Serial.print(eff,3);               // echo print input
 

 /* Compute output values */
 output_power =  (DENSITY_WATER)*(water_flow) *( GRAV_CON)* (height)*(eff);
 output = (float)(output_power)/1000000.0;
 
 /* Display outputs */
 Serial.print("      \n");
 Serial.print("\nOutput power is  ");
 Serial.print(output,1);     // 2 decimal places
 Serial.print(" MegaWatts");
 
}
void loop()                     // code that runs repeatedly
{
}

