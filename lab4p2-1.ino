/*/*
* Program file name: lab<lab4>p<problem2>.ino
* <Abed-Amazu Chioma>
* <Team 9>
*<02/12/2019>
*purpose: Switch - program turns ON LED when switch is pressed
*/
#define LED_PIN 11 // RED LED
#define SW_PIN 4 // Switch 3
#define LOW_FREQ 1000
#define HIGH_FREQ 4000
#define SPEAKER 5
#define PIN 0
float read_voltage(int pin);
void setup() {
 Serial.begin(115200);
 pinMode(SW_PIN, INPUT_PULLUP); // Pulled up to 5V
 pinMode (SPEAKER, OUTPUT);
}
void loop() {
 int swB; // integer variable
 float freq;
 swB = digitalRead(SW_PIN); // read switch value
 if (swB == LOW){ // switch pressed
  delay(200);
  if (swB == LOW){
    delay(200);
   if (swB == LOW){
      delay(200);
     if (swB == LOW){
       delay(200);
      if (swB == LOW){
       delay(200);
       if (swB == LOW){
        tone(SPEAKER,HIGH_FREQ); //play tone on speaker pin 5
        delay(1000);
        noTone(SPEAKER);
       }
     }
    }
   }
  } 
 }
 float avg_V; // output- average value of readings
 float degF;  // output-degrees in fahrenheit
 float degC; //output- degrees in celsius
 avg_V= read_voltage(PIN); // takes the average of the readings
 degF= avg_V*100.0;        //converts  voltage to fahrenheit
 Serial.println(degF); 
 if (degF > 79.0){
  tone(SPEAKER,HIGH_FREQ); //play tone on speaker pin 5 
 }
 else 
  noTone(SPEAKER);
}
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

