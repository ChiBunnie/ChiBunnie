/*/*
* Program file name: lab<lab8>p<problem1>.ino
* <Abed-Amazu Chioma>
* <Team 9>
*<03/12/2019>
*purpose:This program uses the rotary to control the direction of the LEDs
*/

#define NOTE_E4 330 // middle E frequency
#define NOTE_G4 392 //middle G frequency
#define NOTE_A4 440 // middle A frequency
#define NOTE_B4 494 // middle B frequency
#define  PIN_A  18
#define  PIN_B  17
#define  LED_0  11
#define  LED_1  9
#define  LED_2  6
#define  LED_3  3
#define SPEAKER 5
int read_rotary();

void setup(){

 Serial.begin(115200);
 pinMode(PIN_A, INPUT_PULLUP);
 pinMode(PIN_B, INPUT_PULLUP);
 pinMode(LED_0, OUTPUT);
 pinMode(LED_1, OUTPUT);
 pinMode(LED_2, OUTPUT);
 pinMode(LED_3, OUTPUT);
 pinMode(SPEAKER, OUTPUT);
 int curr_state;
 int rot_value=0;
 int prev_state;
 
 while(1){
  curr_state=read_rotary();
  if(prev_state==curr_state){
   //nothing
  }else if((prev_state==0 && curr_state==1) || (prev_state==1 && curr_state==3) || (prev_state==3 && curr_state==2) || (prev_state==2 && curr_state==0)){
    rot_value+=1;
    rot_value+=4; 
    rot_value%=4;
    
  }else if ((prev_state==0 && curr_state==2) || (prev_state==1 && curr_state==0) || (prev_state==3 && curr_state==1) || (prev_state==2 && curr_state==3)) {
    rot_value-=1;
    rot_value+=4;
    rot_value%=4;
   
  }
  if(rot_value==0){
    digitalWrite(LED_0, HIGH);
    digitalWrite(LED_1, LOW);
    digitalWrite(LED_2, LOW);
    digitalWrite(LED_3, LOW);
    tone(SPEAKER, NOTE_E4);
    delay(200);
 }
else if(rot_value==1){
   digitalWrite(LED_1, HIGH);
   digitalWrite(LED_0, LOW);
   digitalWrite(LED_2, LOW);
   digitalWrite(LED_3, LOW);
   tone(SPEAKER, NOTE_G4);
   delay(200);
}
 else if(rot_value==2){
   digitalWrite(LED_2, HIGH);
   digitalWrite(LED_0, LOW);
   digitalWrite(LED_1, LOW);
   digitalWrite(LED_3, LOW);
   tone(SPEAKER, NOTE_A4);
   delay(200);
 }
   else if(rot_value==3){
   digitalWrite(LED_3, HIGH);
   digitalWrite(LED_0, LOW);
   digitalWrite(LED_1, LOW);
   digitalWrite(LED_2, LOW);
   tone(SPEAKER, NOTE_B4);
   delay(200);
 }
}
 
}



void loop(){}

int read_rotary(){
  int rot;
  int rot_A;
  rot_A=!digitalRead(PIN_A);
  Serial.print(rot_A);
  int rot_B;
  rot_B=!digitalRead(PIN_B);
  Serial.print(rot_B);
  rot=(rot_A*pow(2,0))+(rot_B*pow(2,1));
  Serial.println(rot);
  return(rot);
  
  
 }

