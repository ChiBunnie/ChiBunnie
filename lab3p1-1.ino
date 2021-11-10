/*
* Program file name: lab<lab3>p<problem1>.ino
* <Abed-Amazu Chioma>
* <Team 9>
*<02/5/2019>
* Purpose: This program dims the LEDs.
*/

void setup() 
{
 Serial.begin(115200); // open serial monitor at 115 kbps
 pinMode(6,OUTPUT);   // make LED R pin 6 an ouput
 pinMode(9,OUTPUT);   // make LED G pin 9 an ouput
 pinMode(11,OUTPUT); //make LED B pin 11 an output
 Serial.print("TONE GENERATOR\n");
}
void loop() {
 int pot_val; //input - potentiometer value
 // analogRead() converts 0V-5V to 0-1023
pot_val = analogRead(1); //read from Analog pin 1
// 
int led_blue; //output-LED B
int led_green; // output- LED G
//adjusts the LEDs 
led_green= pot_val/4;// converts 0V-5V to 0-255
led_blue= abs(255-led_green);// Make the blue LED be the opposite of the green
/*Function: display_result()
 * Purpose: displays computed results
 */
analogWrite(6,led_blue);
analogWrite(9,led_green);



}


