/*
* Program file name: lab<lab7>p<problem4>.ino
* <Abed-Amazu Chioma>
* <Team 9>
*<02/27/2019>
* Purpose: This program computes the approximate square root of a real number.
*/
#include <math.h>
#define ACCU 0.00001
float mysqrt( float num);

void setup()            // code that runs once
{
Serial.begin(115200); // open serial monitor at 115 kbps
float num;
float A_root;
float root;
float last_G=1.00000;
float new_G;
int count;
Serial.print("This program computes the square root of a number\n");
Serial.print("Enter number > 0: ");
while(Serial.available()==0);
num= Serial.parseFloat();
Serial.println(num,1);
Serial.println("   ");

Serial.print("Count   Last Guess    Next Guess\n");

root = mysqrt(num);
A_root=sqrt(num);

Serial.print("sqrt(");
Serial.print(num,5);
Serial.print(") ~ ");
Serial.println(root,5);
Serial.print("sqrt(");
Serial.print(num,5);
Serial.print(") = ");
Serial.println(A_root,5);

}
void loop(){
  
}

float mysqrt(float num){
  int count=1;
  float A_root;
  float new_G;
  float diff;
  float final_G;
  float last_G=1.00000;
  A_root=sqrt(num);
  diff = A_root-new_G;
  do{
      new_G=0.5*(last_G + (num/last_G));
      diff = new_G - A_root;
      Serial.print(count);
      count++;
      Serial.print("      ");
      Serial.print(last_G,5);
      Serial.print("      ");
      Serial.println(new_G,5);
      last_G = new_G;
    }
  while(diff>ACCU);
  return (new_G);
}



