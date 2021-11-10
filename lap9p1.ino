/*
* Program file name: lab<lab9>p<problem1>.ino
* <Abed-Amazu Chioma>
* <Team 9>
*<03/19/2019>
* Purpose: This program computes the standard deviation and computes how long it takes to complete the results.
*/
//unsigned int micros();
#define N 500
#include <math.h>
void setup(){
 float measure[N];
 int pot_val;
 Serial.begin(115200); //set serial comm to 115 kbps 


 Serial.print("Numbers           Mean           Range           Standard dev\n");
}

void loop(){
  unsigned long time1;
  time1 = micros();
  int measure[N];
  
  int i;
  float xmax,mean,range,std;
  float xmin;
  float sum=0,sum2=0;
  for(i = 0; i<N; i++){
    measure[i] = analogRead(0);
  }
  for(i = 0; i<N; i++){
    if(i == 0 ){
      xmax = measure[i];
      xmin = measure[i];
    } 
    if (measure[i] > xmax){
      xmax = measure[i];
    }else if (measure[i] < xmin){
      xmin = measure[i];
    }
   sum += measure[i];
  }
  for(i = 0; i<N; i++){
    sum2 += pow((measure[i]-mean),2);
  }
 unsigned long time2;
 time2 = micros();
 Serial.print("Time (us): ");
 Serial.println((1.0/(time2-time1))*pow(10,6)); //time since program started

 delay(1000);
 mean = sum/N;
 range = xmax - xmin;
 std = sqrt(sum2/N);
 Serial.print("             ");
 Serial.print(mean);
 Serial.print("           ");
 Serial.print(range);
 Serial.print("             ");
 Serial.println(std);
 
 
}













