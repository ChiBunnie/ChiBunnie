/*
* Program file name: lab<lab6>p<problem2>.ino
* <Abed-Amazu Chioma>
* <Team 9>
*<02/26/2019>
* Purpose: This program usings a photo-sensor as a switch.
*/

# define PIN 2
# define LED_PIN0 11
# define LED_PIN1 9
# define LED_PIN2 6
# define LED_PIN3 3
#define LOW_ 0.000000
#define HIGH_ 0.04000
#define SW_PIN0 12 // Switch 0
#define SW_PIN1 8 //Switch 1
#define SW_PIN2 7 // Switch 2
#define SW_PIN3 4 // Switch 3
int read_switches();
/* Function proto-types*/
float read_analogn(int pin, int n);

void setup() {

 Serial.begin(115200);
 pinMode(SW_PIN0, INPUT_PULLUP); // Pulled up to 5V
 pinMode(SW_PIN1, INPUT_PULLUP);
 pinMode(SW_PIN2, INPUT_PULLUP);
 pinMode(SW_PIN3, INPUT_PULLUP);
 
  pinMode(LED_PIN0, OUTPUT);
  pinMode(LED_PIN1, OUTPUT);
  pinMode(LED_PIN2, OUTPUT);
  pinMode(LED_PIN3, OUTPUT);

randomSeed( analogRead(0) + analogRead(1)  + analogRead(2) + analogRead(3) + analogRead(4) + analogRead(5) ); // seed random n generator - DO ONC

}
void loop() {
read_switches();
int led_N;
int flag=0;

led_N=random(0,4);

switch(led_N){
  case 0:
    digitalWrite(LED_PIN0, HIGH);
    digitalWrite(LED_PIN1, LOW);
     digitalWrite(LED_PIN2, LOW);
    digitalWrite(LED_PIN3, LOW);
    while(flag==0){
      if(read_switches()==1){
      flag=1;
    }
   }
 break;
 case 1:
   digitalWrite(LED_PIN1, HIGH);
   digitalWrite(LED_PIN0, LOW);
   digitalWrite(LED_PIN2, LOW);
   digitalWrite(LED_PIN3, LOW);
    while(flag==0){
      if(read_switches()==2){
      flag=1;
    }
   }
 break;
 case 2:
   digitalWrite(LED_PIN2, HIGH);
   digitalWrite(LED_PIN0, LOW);
   digitalWrite(LED_PIN1, LOW);
   digitalWrite(LED_PIN3, LOW);
    while(flag==0){
      if(read_switches()==4){
      flag=1;
    }
   }
 break;
 case 3:
   digitalWrite(LED_PIN3, HIGH);
   digitalWrite(LED_PIN0, LOW);
   digitalWrite(LED_PIN1, LOW);
   digitalWrite(LED_PIN2, LOW);
    while(flag==0){
      if(read_switches()==8){
      flag=1;
    }
   }
 break;
 default:
 break;
}
}
int read_switches(){
 int sW0; // integer variable
 sW0 = !digitalRead(SW_PIN0); // read switch value
 
 int sW1;
 sW1 = !digitalRead(SW_PIN1); // read switch value
 
 int sW2;
 sW2 = !digitalRead(SW_PIN2); // read switch value
 
 int sW3;
 sW3 = !digitalRead(SW_PIN3); // read switch value
 
return((sW0*pow(2,0)) + (sW1*pow(2,1)) + (sW2*pow(2,2)) + (sW3*pow(2,3)));
}


