/*
* Program file name: LAB1p1.ino
* <Abed-Amazu Chioma>
* <01/22/2019>
*
* Purpose: This program adds (a+b), subtracts (a-b),
* multiplies (a*b) and divides (a/b) two integers.
*/
void setup()             // run once, when the sketch starts
{
 Serial.begin(115200); // set up Serial monitor at 115 kbps

 int a=11; /* Input variable */
 int b=4; /* Input variable */
 int sum; /* Output sum */
 int diff; /* Output difference */
  int prod; /* Output product */
 int quot; /* Output quotient */
 /* Display purpose */
 Serial.print("This program does math with 2 integers\n\n");
 /* Display inputs */
 Serial.print("a = ");
 Serial.print(a);
 Serial.print(", b = ");
 Serial.println(b); // adds '\n'
 /* Compute ALL output values */
 sum = a + b;
 diff = a-b;
 prod =a*b;
 quot= a/b;
 /* Display ALL outputs */
 Serial.print("sum = ");
 Serial.println(sum); // adds '\n'
 Serial.print("diff=");
 Serial.println(diff);// subs '\n'
 Serial.print("prod=");
 Serial.println(prod);// multiple '\n'
 Serial.print("quot=");
 Serial.println(quot);// div '\n'

}
void loop()             // run over and over again
{                      // do nothing!
}

