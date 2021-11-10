/*
* Program file name: lab2p3.ino
* <Abed-Amazu Chioma>
* <Team 9>
* <01/29/2019>
*
* Purpose: Computing the time it would take to mow a lawn
* 
 */
#define rate 2

void setup()            // code that runs once
{
 Serial.begin(115200); // open serial monitor at 115 kbps
 int yard_w; /* Input–yard width */
 int yard_l;/* input- yard length*/
 int house_w;/*input-house width*/
 int house_l;
 float output2;
 int output; /* Output-total time in seconds */
 int output_min; /* Output-time in minutes */
 int output_sec; /*output- remaining time in seconds

 /* Display purpose */
 Serial.print("MOWING TIME CALCULATOR\n");
 /* Display inputs */
 Serial.print("Yard width: ");    // prompt
 while(Serial.available()==0);           // wait for send
 yard_w = Serial.parseFloat();          // store input
 Serial.println(yard_w);               // echo print input
 Serial.print("Yard length: ");    // prompt
 while(Serial.available()==0);           // wait for send
 yard_l = Serial.parseFloat();          // store input
 Serial.println(yard_l);               // echo print input
 Serial.print("House width: ");    // prompt
 while(Serial.available()==0);           // wait for send
 house_w = Serial.parseFloat();          // store input
 Serial.println(house_w);               // echo print input
 Serial.print("House length: ");    // prompt
 while(Serial.available()==0);           // wait for send
 house_l = Serial.parseFloat();          // store input
 Serial.println(house_l);               // echo print input
 /* Compute output values */
 output = ((yard_w*yard_l)-(house_w*house_l))/rate;
 output2=output/60.0;
 output_min= output/60;
 output_sec=(output2-output_min)*60;
 /* Display outputs */
 Serial.print("At a rate of 2 ft^2/sec it will take\n ");
 Serial.print(output_min);
 Serial.print(" min and ");
 Serial.print(output_sec);     // 2 decimal places
 Serial.print("sec");
 
}
void loop()                     // code that runs repeatedly
{
}

