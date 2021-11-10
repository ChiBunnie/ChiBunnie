/*/*
* Program file name: lab<lab5>p<problem1>.ino
* <Abed-Amazu Chioma>
* <Team 9>
*<02/19/2019>
*purpose: This program copmutes binary and decimal number by pressing a switch
*/
#define SW_PIN0 12 // Switch 0
#define SW_PIN3 4 // Switch 3
#define LOW_FREQ 1000
#define HIGH_FREQ 4000
#define SPEAKER 5
#define SW_PIN1 8 //Switch 1
#define SW_PIN2 7 // Switch 2
int read_switches();
void setup() {
 Serial.begin(115200);
 pinMode(SW_PIN0, INPUT_PULLUP); // Pulled up to 5V
 pinMode(SW_PIN1, INPUT_PULLUP);
 pinMode(SW_PIN2, INPUT_PULLUP);
 pinMode(SW_PIN3, INPUT_PULLUP);
 
}
void loop() {
 read_switches();
}
int SWB;
int read_switches(){
 int sW0; // integer variable
 sW0 = !digitalRead(SW_PIN0); // read switch value
 delay (200);
 int sW1;
 sW1 = !digitalRead(SW_PIN1); // read switch value
 delay (200);
 int sW2;
 sW2 = !digitalRead(SW_PIN2); // read switch value
 delay (200);
 int sW3;
 sW3 = !digitalRead(SW_PIN3); // read switch value
 delay (200);
 SWB= (sW0*pow(2,0)) + (sW1*pow(2,1)) + (sW2*pow(2,2)) + (sW3*pow(2,3));
 Serial.print(SWB, BIN);
 Serial.print("   \t");
 Serial.println(SWB,DEC);
}

