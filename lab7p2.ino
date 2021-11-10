/*
* Program file name: lab4p3.ino
* <Abed-Amazu Chioma>
* <Team 9>
* <03/06/2019>
*
* Purpose: This program generates an output pattern using nested for loops.
*/

void setup()            // code that runs once
{
 Serial.begin(115200); // open serial monitor at 115 kbps
 Serial.print("Input an integer from 2 to 9> ");
 int num;
 int i;
 int j;
 while(Serial.available()==0);
 num=Serial.parseInt();
 Serial.println(num);
for(i=0; i<num; i++){
    for(j=0; j<i; j++){
      Serial.print("-");
     }
 Serial.println("1");
 }
 for(i=0; i<num; i++){
    for(j=num-2; j>i; j--)
      Serial.print("-");
 Serial.println("1");
 }
 
}






void loop(){
  
}

