/*
* Program file name: lab<lab6>p<problem4>.ino
* <Abed-Amazu Chioma>
* <Team 9>
*<02/27/2019>
* Purpose: This program computes the estimates pie to within a desired accuracy using an even number of terms.
*/
#include <math.h>
#define PI 3.14159
void instruction();
float absdiff( float actual , float estimate);
float pi_estimate(int n);

void setup()            // code that runs once
{
 Serial.begin(115200); // open serial monitor at 115 kbps
 float estimate;    //input- estimated value of pie
 float precision;   //output-how close of far is the estimated value of pie to the actual value
 /*Display instructions*/
  instruction();
  
int n=0;
float estimate_1= pi_estimate(n);
float diff= absdiff( PI,estimate_1);

 while(diff>0.0005){
    n+=2;
    estimate_1=pi_estimate(n);
    diff= absdiff(PI, estimate_1);
   Serial.print(n);
   Serial.print("    ");
   Serial.print(estimate_1,5);
   Serial.print("     ");
   Serial.println(PI,5);
  }
}
void loop(){

}

void instruction(){
  Serial.print("n   pi (estimate)   pi (actual)\n");
}

float absdiff( float actual, float estimate){
   float precise;
    precise= sqrt(pow((actual-estimate),2));
    return(precise);
}
float pi_estimate(int n){
  float sum=0;
  for(int i=0; i<n; i++){
    sum=sum+(pow(-1,i)*(1.0/(1+2*i)));
  }
return(4*sum);
}

