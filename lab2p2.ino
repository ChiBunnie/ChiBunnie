/*
* Program file name: lab<lab#>p<problem#>.ino
* <Abed-Amazu Chioma>
* <Team 9>
*<01/29/2019>
* Purpose: Frequency modulation of a tone.
*/
#define LOW_FREQ 10
#define HIGH_FREQ 2500
void setup() 
{
 Serial.begin(115200); // open serial monitor at 115 kbps
 pinMode(5,OUTPUT); //make speaker pin 5 an output
 Serial.print("TONE GENERATOR\n");
}
void loop() {
 Serial.print("Integer: ");    // prompt
 int pot_val; //input - potentiometer value
 // analogRead() converts 0V-5V to 0-1023
pot_val = analogRead(1); //read from Analog pin 1
float freq;
freq = map(pot_val, 0, 1023, LOW_FREQ, HIGH_FREQ);
 tone(5,freq); // play a tone on speaker pin 5
}


