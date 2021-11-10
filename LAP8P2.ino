/*
* Program file name: lab<lab8>p<problem2>.ino
* <Abed-Amazu Chioma>
* <Team 9>
*<03/12/2019>
* Purpose: This program computes the prime numbers between a certain range of numbers.
*/
#include <math.h>
bool is_prime(int N);
void setup()            // code that runs once
{
 Serial.begin(115200); // open serial monitor at 115 kbps
 int N;                 //input-the total number of real number to be computed
 int prime;
 
 Serial.print("Prime Number Calculator\n");
 Serial.print("Input N (>1): ");
 while(Serial.available()==0);
 N=Serial.parseInt();
 Serial.println(N);

 while(N<2){
  Serial.print("Input N (>1): ");
  while(Serial.available()==0);
  N=Serial.parseInt();
  Serial.println(N);
 }

 for(int i=2; i<=N; i++){
  if(is_prime(i)==true){
    Serial.print(i);
    Serial.print("\t");
  }
 }
}

void loop(){
  
}

bool is_prime(int N){
  int i;
  for(i=2; i < N; i++){
     if(N%i==0){
       return false;
     }
   }
  return true;
}

