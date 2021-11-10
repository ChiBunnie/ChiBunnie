/*
* Program file name: lab<lab6>p<problem1>.ino
* <Abed-Amazu Chioma>
* <Team 9>
*<02/26/2019>
* Purpose: This program usings a photo-sensor as a switch.
*/

# define PIN 2
# define LED_PIN1 11
# define LED_PIN2 9
# define LED_PIN3 6
#define LOW_ 0.000000
#define HIGH_ 0.04000
/* Function proto-types*/
float read_analogn(int pin, int n);

void setup() {

  Serial.begin(115200);
  pinMode(LED_PIN1, OUTPUT);
  pinMode(LED_PIN2, OUTPUT);
  pinMode(LED_PIN3, OUTPUT);

}
void loop() {

 float volt; // output- average value of readings
 volt = read_analogn(PIN,100);
 Serial.println(volt,5);
 delay(1000);
  if (volt < HIGH_){ // switch pressed
  digitalWrite(LED_PIN1, HIGH);
  digitalWrite(LED_PIN2, HIGH);
  digitalWrite(LED_PIN3, HIGH);
  }else {
  digitalWrite(LED_PIN1, LOW);
  digitalWrite(LED_PIN2, LOW);
  digitalWrite(LED_PIN3, LOW);
  }
}
/* Function: read_voltage()
 *  Purpose:Computes and displays the average
 */
float read_analogn(int pin,int n){
  float read_in, Voltage, avg_V, sum; //outputs
  sum=0;
  int i;
  //Compute sum

  for(i= 0; i< n; i++) {

    /*anlogRead() converts 0V-5V to 0-1023*/

    read_in= analogRead(pin);// reads from Analog pin
    Voltage= (read_in * 5.0)/1024.0;
    sum= sum + Voltage; //add voltage to the sum
  }
    avg_V= sum/n; //compute average
    return avg_V; //display the average value
}


