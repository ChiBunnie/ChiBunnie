/*
* Program file name: lab<lab7>p<problem1>.ino
* <Abed-Amazu Chioma>
* <Team 9>
*<03/05/2019>
* Purpose: This program usings a rotary to determine the direction and speed at which its turning.
*/

#define  PIN_A  18
#define  PIN_B  17
#define  LED_R  11
#define  LED_G  9
#define  LED_B  6
int read_rotary();

void setup() {

 Serial.begin(115200);
 pinMode(PIN_A, INPUT_PULLUP);
 pinMode(PIN_B, INPUT_PULLUP);
 pinMode(LED_B, OUTPUT);
 int curr_state;
 int rot_value=128;
 int prev_state;
 Serial.print("Rotary Value          Previous Value\n");
 analogWrite(LED_B,rot_value);
 while(1){
  curr_state=read_rotary();
  if(prev_state==curr_state){
    //Serial.print("NC\n");
  }else if(prev_state<curr_state){
    rot_value+=1; 
    analogWrite(LED_B,rot_value);
    delay(200);
  }else if (prev_state> curr_state); {
    rot_value-=1;
    analogWrite(LED_B,rot_value);
    delay(200);
  }
  if(rot_value<=0){
    rot_value=0;
  }else if(rot_value>=255){
    rot_value=255;
  }
 prev_state=curr_state;
 Serial.print(rot_value);
 Serial.print("                          ");
 Serial.println(prev_state,BIN);
 }

}
void loop(){}
 
 int read_rotary(){
  int rot;
  int rot_A;
  rot_A=!digitalRead(PIN_A);
  Serial.print(rot_A,BIN);
  int rot_B;
  rot_B=!digitalRead(PIN_B);
  Serial.print(rot_B,BIN);
  rot=(rot_A*pow(2,0))+(rot_B*pow(2,1));
  return(rot);
  
  
 }

