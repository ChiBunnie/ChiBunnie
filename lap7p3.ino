/*
* Program file name: lab4p3.ino
* <Abed-Amazu Chioma>
* <Team 9>
* <03/06/2019>
*
* Purpose: This program computes the batting average of a baseball player.
*/

#define SNTL -99
#include<math.h>
void setup(){
  Serial.begin(115200);
  int play_num;   //player number
  float avg;     //batting average
 
while(play_num != SNTL){
     char ch='A';
     float hits=0;  //number of hits
     float abt=0;   //number of hits and outs
     
     while(Serial.available()==0); //wait
     play_num=Serial.parseInt();   //store
     Serial.print(play_num);       //echo
     Serial.print("  ");    
     
    /*read player's number and batters*/ 
    if(play_num != SNTL){ 
      while(ch != '#'){
         while(Serial.available()==0);
         ch=Serial.read();
         Serial.print(ch);
          if(ch=='H'){
            hits++;
            abt++;
          }else if(ch=='O'){
              abt++;
   }
 }
      avg=(float) hits /(float) abt; //calcuate batting average
      Serial.print("\t        ");
      Serial.print(play_num);
      Serial.print(" is batting ");  
      Serial.println(avg,3);
  }
}
Serial.print("\t\t\t\t ");    
Serial.println("Done"); //after loop print done
}

void loop(){
  
}

