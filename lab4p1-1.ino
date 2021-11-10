/*
* Program file name: lab<lab4>p<problem1>.ino
* <Abed-Amazu Chioma>
* <Team 9>
*<02/12/2019>
* Purpose: This program covert voltage to temperature
*/

# define PIN 0
/* Function proto-types*/
float read_voltage(int pin);
float degF_to_degC (float degF);

void setup() {
Serial.begin(115200); //set serial comm to 115 kbps
Serial.print("Voltage \t Degree F \t Degree C \n");


}
void loop() {
 float avg_V; // output- average value of readings
 float degF;  // output-degrees in fahrenheit
 float degC; //output- degrees in celsius
 avg_V= read_voltage(PIN); // takes the average of the readings
 degF= avg_V*100.0;        //converts  voltage to fahrenheit 
 degC=(degF -32.0)*(5.0/9.0);// coverts fahrenheit to celsius
Serial.print(avg_V,4); //print the voltage value
Serial.print("\t\t");
Serial.print(degF,1);// print the temperature value
Serial.print(" \t\t");
Serial.println(degC,1); //print the temperature value
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
float degF_to_degC(float degF){
  float degC;
  degC= (degF -32.0)*(5.0/9.0);
  return (degC); 
}

