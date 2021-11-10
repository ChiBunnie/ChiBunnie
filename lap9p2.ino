/*
* Program file name: lab<lab9>p<problem2>.ino
* <Abed-Amazu Chioma>
* <Team 9>
*<03/19/2019>
* Purpose: This program converts analog to digital and times how long it takes for the conversion.
*/

#define N 501
#define LED 9
void setup(){
  Serial.begin(115200); //set serial comm to 115 kbps 
  int x[N]; 
  pinMode(LED, OUTPUT);
}




void loop(){
 int i;
 int x[N];
 int temp;
 unsigned long time1;
  time1 = micros();
 

 
 for(i=0; i<N; i++){
  temp = i%2;
  if(temp==0){
    x[i]=0;
  }else{
    x[i]=1;
  }
 }
unsigned long time2;
time2 = micros();
unsigned long time3;
time3 = (time2-time1)*pow(10,6);
Serial.print("Time (us): ");
Serial.println((1.0/time3),6); //time since program started

delay(1000);
digitalWrite(LED, HIGH);

}

