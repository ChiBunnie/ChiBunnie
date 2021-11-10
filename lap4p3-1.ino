/*
* Program file name: lab3p3.ino
* <Abed-Amazu Chioma>
* <Team 9>
* <02/14/2019>
*
* Purpose: This program computes the x-y coordinates and prints the quadrant it belongs to.
*/

void setup()            // code that runs once
{
 Serial.begin(115200); // open serial monitor at 115 kbps
 float x; /* Input–x coordinate */
 float y; /* Input-y coordinate*/
 
   
 /* Get input values */
 Serial.print("Input x coordinate: ");    // prompt
 while(Serial.available()==0);           // wait for send
 x= Serial.parseFloat();          // store input
 Serial.print(x,3);               // echo print input
 
Serial.print("\nInput y coordinate: ");    // prompt
 while(Serial.available()==0);           // wait for send
 y= Serial.parseFloat();          // store input
 Serial.println(y,0);               // echo print input

 if ((x < 0)&&(y > 0)){
    Serial.print("(");
    Serial.print(x,2);
    Serial.print(" ,");
    Serial.print(y,2);
    Serial.print(")");
    Serial.print(" is in quadrant II");
  }else if((x > 0)&&(y > 0)){
    Serial.print("(");
    Serial.print(x,2);
    Serial.print(" ,");
    Serial.print(y,2);
    Serial.print(")");
    Serial.print(" is in quadrant I");
  }else if ((x < 0)&&(y < 0)){
    Serial.print("(");
    Serial.print(x,2);
    Serial.print(" ,");
    Serial.print(y,2);
    Serial.print(")");
    Serial.print(" is in quadrant III");
  }else if ((x > 0)&&(y < 0)){
    Serial.print("(");
    Serial.print(x,2);
    Serial.print(" ,");
    Serial.print(y,2);
    Serial.print(")");
    Serial.print(" is in quadrant IV");
  }else if ((x == 0)&&(y > 0)){
    Serial.print("(");
    Serial.print(x,2);
    Serial.print(" ,");
    Serial.print(y,2);
    Serial.print(")");
    Serial.print( " is on the y-axis");
  }else if ((x==0)&&(y < 0)){
    Serial.print("(");
    Serial.print(x,2);
    Serial.print(" ,");
    Serial.print(y,2);
    Serial.print(")");
    Serial.print(" is on the y-axis");
  }else if ((x > 0)&&(y == 0)){
    Serial.print("(");
    Serial.print(x,2);
    Serial.print(" ,");
    Serial.print(y,2);
    Serial.print(")");
    Serial.print(" is on the x-axis");
  }else if ((x < 0)&&(y == 0)){
    Serial.print("(");
    Serial.print(x,2);
    Serial.print(" ,");
    Serial.print(y,2);
    Serial.print(")");
    Serial.print(" is on the x-axis");
  }else {
    Serial.print("(");
    Serial.print(x,2);
    Serial.print(" ,");
    Serial.print(y,2);
    Serial.print(")");
    Serial.print(" is in the origin");
  }
}

void loop()                     // code that runs repeatedly
{
  
}

