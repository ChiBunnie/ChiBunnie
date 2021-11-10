/*/*
* Program file name: lab<lab5>p<problem2>.ino
* <Abed-Amazu Chioma>
* <Team 9>
*<02/19/2019>
*purpose:This program uses switches as a keyboard for playing music
*/
#define NOTE_C4 262 // middle C frequency
#define NOTE_CS4 277 // sharp C frequency
#define NOTE_D4 294 // middle D frequency
#define NOTE_DS4 311 // sharp D  frequency
#define NOTE_E4 330 // middle E frequency
#define NOTE_F4 349 // middle F frequency
#define NOTE_FS4 370 // sharp F frequency
#define NOTE_G4 392 //middle G frequency
#define NOTE_GS4 415 // sharp G frequency
#define NOTE_A4 440 // middle A frequency
#define NOTE_AS4 466 // sharp A frequency
#define NOTE_B4 494 // middle B frequency
#define NOTE_C5 523 //middle C5 frequency
#define NOTE_CS5 554// sharp C5 frequency
#define NOTE_D5 587 // middle D5 frequency
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
 pinMode(SPEAKER, OUTPUT);
 
}
void loop() {
 int decimal;
 decimal= read_switches();
 switch(decimal){
  case 1:
   tone(SPEAKER,NOTE_C4);
   break;
  case 2:
   tone(SPEAKER,NOTE_CS4);
   break;
  case 3:
   tone(SPEAKER, NOTE_D4); 
   break;
  case 4:
   tone(SPEAKER, NOTE_DS4); 
   break;
  case 5:
   tone(SPEAKER, NOTE_E4); 
   break;
  case 6:
   tone(SPEAKER, NOTE_F4); 
   break;
  case 7:
   tone(SPEAKER,NOTE_FS4); 
   break;
  case 8:
   tone(SPEAKER, NOTE_G4); 
   break;
  case 9:
   tone(SPEAKER, NOTE_GS4); 
   break;
  case 10:
   tone(SPEAKER, NOTE_A4); 
   break;
  case 11:
    tone(SPEAKER, NOTE_AS4); 
    break;
  case 12:
    tone(SPEAKER, NOTE_B4); 
    break;
  case 13:
    tone(SPEAKER, NOTE_C5); 
    break;
  case 14:
   tone(SPEAKER, NOTE_CS5); 
   break;
  case 15:
   tone(SPEAKER, NOTE_D5); 
   break;
  default:
   noTone(SPEAKER);
 }
}
int SWB;
int read_switches(){
 int sW0; // integer variable
 sW0 = !digitalRead(SW_PIN0); // read switch value
 int sW1;
 sW1 = !digitalRead(SW_PIN1); // read switch value
 int sW2;
 sW2 = !digitalRead(SW_PIN2); // read switch value
 int sW3;
 sW3 = !digitalRead(SW_PIN3); // read switch value
 SWB= (sW0*pow(2,0)) + (sW1*pow(2,1)) + (sW2*pow(2,2)) + (sW3*pow(2,3));
 Serial.print(SWB, BIN);
 Serial.print("   \t");
 Serial.println(SWB,DEC);
 return(SWB);
}

