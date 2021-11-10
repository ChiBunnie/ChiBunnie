/*
* Program file name: lab<lab#>p<problem#>.ino
* <Abed-Amazu Chioma>
* <Team 9>
*<01/29/2019>
* Purpose: Read a 0V-5V value from analog pin A1
* and convert it to a 10-bit (0-1023) number.
*/

void setup() {
Serial.begin(115200); //set serial comm to 115 kbps
Serial.print("Voltage\t  Integer\t Binary\t  Hex\n");

}
void loop() {
 float Voltage;
 int pot_val; //input - potentiometer value
 // analogRead() converts 0V-5V to 0-1023
pot_val = analogRead(1); //read from Analog pin 1
delay(1000);             //wait for a second


/*Compute output value*/
Voltage= (pot_val * 5.0)/1024.0;
Serial.print(Voltage);
Serial.print("   \t");
Serial.print(pot_val); //print to serial monitor
Serial.print("  \t");
Serial.print(pot_val,BIN); //print integer in binary
Serial.print("    \t");
Serial.println(pot_val,HEX);//print inteder in hex



}

