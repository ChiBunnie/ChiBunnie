/*
* Program file name: lab<lab6>p<problem3>.ino
* <Abed-Amazu Chioma>
* <Team 9>
*<02/27/2019>
* Purpose: This program computes the standard deviation, sum, average and range.
*/
#include <math.h>

void setup()            // code that runs once
{
 Serial.begin(115200); // open serial monitor at 115 kbps
 int N;                 //input-the total number of real number to be computed
 float num;             //input- value of the real number
 float sum=0;             //output-sum of number
 float avg;             //output- average
 float std_d;          //output-standard deviation
 float range;          //output-range=max-min
 float sum_squ;       //intermidate-sauare of the sum value
 float max;
 float min;
 Serial.print("STATISTICS CALCULATOR\n");
 Serial.print("Input N (>1): ");
 while(Serial.available()==0);
 N=Serial.parseInt();
 Serial.println(N);

 while(N<1){
  Serial.print("Input N (>1): ");
  while(Serial.available()==0);
  N=Serial.parseInt();
  Serial.println(N);
 }

 /*Get input values*/
int i;
for(i=1; i<=N; i++) {
  Serial.print("Input num: ");
  while(Serial.available()==0);
  num=Serial.parseFloat();
  Serial.println(num);
  sum+=num;
  if (i==1){
   max = num;
   min = num; 
 } else if (num > max)
  max = num;
  else if (num < min)
   min = num;
}
Serial.print("Sum     =  ");
Serial.println(sum,2);
 
avg= sum/N;
Serial.print("Average =  ");
Serial.println(avg,2);

sum_squ= pow(sum,2);
std_d=sqrtf((sum_squ/N)-pow(avg,2));
Serial.print("StdDev  =  ");
Serial.println(std_d,2); 

range = max - min;
Serial.print("Range   =  ");
Serial.println(range,2);


}



void loop(){
  
}

