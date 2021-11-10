/*
* Program file name: lab5p4.ino
* <Abed-Amazu Chioma>
* <Team 9>
* <02/23/2019>
*
* Purpose: This program computes the value of the a resistor using the colour band width.
*/

/*Function proto-types*/
void instruction();
int convert_color(char color);

void setup()            // code that runs once
{
 Serial.begin(115200); // open serial monitor at 115 kbps
char v1;  /* Input–diameter of cylinder */
 char v2;
 char v3;
 int R1;
 int R2;
 int R3;
 float value;

 
/*Display Instructions */
    instruction();
 /* Get input values */
Serial.print("\nInput three characters):  ");    // prompt
 while(Serial.available()==0);           // wait for send
 v1= Serial.read();          // store input
 Serial.print(v1);            // echo print input
 
Serial.print("\nInput three characters):  ");    // prompt
 while(Serial.available()==0);           // wait for send
 v2= Serial.read();
 Serial.print(v2);                         // echo print input
 
Serial.print("\nInput three characters):  ");    // prompt
 while(Serial.available()==0);           // wait for send
 v3= Serial.read();
 Serial.println(v3);                        // echo print input
 
 R1= convert_color(v1);
 R2= convert_color(v2);
 R3= convert_color(v3);
 value= pow(10,R3);
 Serial.print(R1);
 Serial.print(R2);
 Serial.print("*");
 Serial.print(value);
 Serial.print(" ohms");
            
 /* Compute surface area and production cost */

 /* Display outputs */
 
}
void loop()                     // code that runs repeatedly
{
// char v1;  /* Input–diameter of cylinder */
 //char v2;
 //char v3;
 //int R1;
 //int R2;
 //int R3;
 //float value;

// Serial.print("\nInput three characters):  ");    // prompt
// while(Serial.available()==0);           // wait for send
 //v1= Serial.read();          // store input
 //while(Serial.available()==1);           // wait for send
 //v2= Serial.read(); 
 //while(Serial.available()==1);           // wait for send
 //v3= Serial.read();
// R1= convert_color(v1);
 //R2= convert_color(v2);
 //R3= convert_color(v3);
 //Serial.print(R1);            // echo print input
 //Serial.print(v2);   
 //Serial.print(v3);   
}

void instruction(){
   Serial.print("RESISTOR COLOR-CODE PROGRAM\n");
   Serial.print(" Input three characters corresponding to the three colour\n");
   Serial.print(" bands on a resistor:\n");
   Serial.print(" k for black - 0\n");
   Serial.print(" n for black - 1\n");
   Serial.print(" r for red - 2\n");
   Serial.print(" o for orange - 3\n");
   Serial.print(" y for yellow - 4\n");
   Serial.print(" g for green - 5\n");
   Serial.print(" u for blue - 6\n");
   Serial.print(" v for violet - 7\n");
   Serial.print(" e for grey - 8\n");
   Serial.print(" w for white - 9\n");
}
int convert_color(char color) {
int output;
switch (color) {
  case 'K':
  case 'k':
    output=0;
    break;

  case 'N':
  case 'n':
    output=1;
    break;

  case 'R':
  case 'r':
   output=2;
    break;

  case 'O':
  case 'o':
    output=3;
    break;

  case 'Y':
  case 'y':
   output=4;
    break;

  case 'G':
  case 'g':
    output=5;
    break;

  case 'U':
  case 'u':
    output=6;
    break;

  case 'V':
  case 'v':
    output=7;
    break;

  case 'E':
  case 'e':
   output=8;
    break;

  case 'W':
  case 'w':
    output=9;
    break;

  default:
    Serial.print("Not in the table above\n");
    break;
}
return(output);
}


