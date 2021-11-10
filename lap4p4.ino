.
0/*
* Program file name: lab3p4.ino
* <Abed-Amazu Chioma>
* <Team 9>
* <02/17/2019>
*
* Purpose: This program computes the day number.
*/

/*Function proto-types*/
void instruction();
int leap(int year);
void disp_results (int day_num );

void setup()            // code that runs once
{
 Serial.begin(115200); // open serial monitor at 115 kbps
 int month; /* Input–month of the year*/
 int day; /* Input-day of the year*/
 int year; /*input-the year */
 int num; /*output- number of day in the year*/
 int L_year;/* intermediate-leap year*/
 int L_yrs;
 int L_y;
 
/*Display Instructions */
    instruction();
 /* Get input values */
 Serial.print("\nInterger month:  ");    // prompt
 while(Serial.available()==0);           // wait for send
 month= Serial.parseInt();          // store input
 Serial.print(month);               // echo print input
 
 Serial.print("\nInteger day:  ");    // prompt
 while(Serial.available()==0);           // wait for send
 day= Serial.parseInt();          // store input
 Serial.print(day);               // echo print input

 Serial.print("\nInteger year:   ");    // prompt
 while(Serial.available()==0);           // wait for send
 year= Serial.parseInt();          // store input
 Serial.print(year);               // echo print input

 /* Compute surface area and production cost */
  num= leap(year);
  L_year= year%4;
  L_yrs= year%400;
  L_y=year%100;
 
 
 /* Display outputs */
 
 disp_results (num);
}
void loop()                     // code that runs repeatedly
{
}

void instruction(){
   Serial.print("PROGRAM CALCULATES DAY NUMBER");
}
int leap(int year){
  int leap_year;
   if ( year%100=0 ){
  return (1);  
}
else {
  return (0);
  
}
void disp_results (int day_num ){
 Serial.print("Day number is ");
 Serial.print(day_num);
}

