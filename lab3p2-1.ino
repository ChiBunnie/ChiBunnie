/*
* Program file name: lab<lab3>p<problem2>.ino
* <Abed-Amazu Chioma>
* <Team 9>
*<02/05/2019>
* Purpose: Takes average of 10 readings to 
* improve the accuracy of a sensor
*/

# define PIN 1
/* Function proto-types*/
float read_voltage(int pin);

void setup() {
Serial.begin(115200); //set serial comm to 115 kbps
Serial.print("Voltage\n");

}
void loop() {
 float avg_V; // output- average value of readings
 avg_V= read_voltage(PIN); // takes the average of the readings
 Serial.println(avg_V,4);
}
 
/* Function: read_voltage()
 *  Purpose:Computes and displays the average
 */
float read_voltage(int pin){
  float pot_val, Voltage, avg_V, sum; //outputs
  sum=0;

  //Compute sum

  for(int x= 0; x< 10; x++) {
    delay(100); //wait for a second

    /*anlogRead() converts 0V-5V to 0-1023*/

    pot_val= analogRead(pin);// reads from Analog pin
    Voltage= (pot_val * 5.0)/1024.0;
    sum= sum + Voltage; //add voltage to the sum
  }
    avg_V= sum/10.0; //compute average
    return avg_V; //display the average value
}

