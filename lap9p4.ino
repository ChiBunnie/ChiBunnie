/*
* Program file name: lab<lab9>p<problem4>.ino
* <Abed-Amazu Chioma>
* <Team 9>
*<04/01/2019>
* Purpose: This program computes the number of coins to be returned to the user.
*/
#define SNTL -32768
#define N 20
void setup(){
  Serial.begin(115200); //set serial comm to 115 kbps
  float x[N];
  float y[N];
  int i = -1;
  int len=0;
  int j;
  float sum=0;
  float area;

  Serial.print(" x        y\n");
  Serial.print("----    ----\n");

  do{
      len++;  i++;
      while(Serial.available()==0);
      x[i]=Serial.parseFloat();
      y[i]=Serial.parseFloat();
      Serial.print(x[i]);
      Serial.print("    ");
      Serial.println(y[i]);
     
      
  }while((x[i] != SNTL) && (y[i] != SNTL));
  
 for(j=0; j<(len-2); j++){
  sum+=((x[j+1]+x[j])*(y[j+1]-y[j]));
 }
 area = (abs(sum))*0.5;
 Serial.println("");
 Serial.print("Area = ");
 Serial.println(area);
}
void loop(){
  
}

