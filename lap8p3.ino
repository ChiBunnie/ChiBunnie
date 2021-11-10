/*
* Program file name: lab<lab8>p<problem3>.ino
* <Abed-Amazu Chioma>
* <Team 9>
*<03/12/2019>
* Purpose: This program is a complex number calculator(+,-,*,/).
*/

/*Function prototype*/
void scan_frac(float *realp, float *imagp);      /* scans complex number from user in format a+jb or a-jb*/ 
 
char get_op();   /* asks the user for a valid operator (+, -, *, /) */ 
 
void add_comp(float r1, float i1, float r2, float i2, char op, float *realp, float *imagp);  /* adds two complex numbers */ 
 
void mult_comp(float r1, float i1, float r2, float i2,   float *realp, float *imagp);  /* multiplies comp. numbers */ 
 
void div_comp(float r1, float i1, float r2, float i2,   float *realp, float *imagp);  /* divides comp. numbers.  If r2 and i2 are both 0, display warning and change r2 to 1 */ 
 
void conv2pol(float r1, float i1, float *magp, float *angp);   /* converts rectangular to polar coordinates.  Determine ,quadrant before calling atan() function, e.g., 3 – j4 is in ,4th quadrant, whereas -3 + j4 is in 2nd quadrant */ 
 
void display_eq(float r1, float i1, char op, float r2, float i2, float *realp, float *imagp);  /* displays equation  and calls function conv2pol */ 
#define PI 3.142
#include <math.h>
void setup()            // code that runs once
{
 Serial.begin(115200); // open serial monitor at 115 kbps
 float r1,i1,r2,i2;                 //input-the complex numbers
 char op;                         // input operator
 float real,imag,mag,ang;                  // output complex numbers
 char flag;
 float rans, ians;
 char sign;
 Serial.print("COMPLEX CALCULATOR\n");
do{
 scan_frac(&r1,&i1);      //scan first complex number

 op = get_op();                // get operator

 scan_frac(&r2,&i2);    //scan second complex number
 Serial.print("      \n");

 switch(op){
  case '+':
      add_comp(r1, i1,r2, i2, op, &real, &imag);
  break;
  case '-':
     add_comp(r1, i1,r2, i2, op, &real, &imag);
  break;
  case '*':
    mult_comp( r1,i1, r2, i2, &real, &imag);
  break;
  case'/':
    div_comp(r1,i1, r2, i2, &real ,&imag);
  break;
 }
 
 display_eq( r1,  i1, op, r2, i2, &real, &imag);
 conv2pol(real, imag,&mag, &ang);
  
Serial.print("Do another calculation (y/n)?");
while(Serial.available()==0);
flag = Serial.read();
Serial.println(flag);
Serial.print("      \n");

//display_eq(r1, i1, op, r2, rans, ians);

}while(flag == 'y' || flag == 'Y');
}
void loop(){
  
}

void add_comp(float r1, float i1, float r2, float i2, char op, float *realp, float *imagp){
  
    if(op=='-'){
           *realp = r1 - r2;
           *imagp = i1 - i2;
    }else if(op=='+') {
        *realp = r1 + r2;
        *imagp = i1 + i2;
    }
}

void scan_frac(float *realp, float *imagp){
  char sign;
  Serial.print("Input complex number as a+jb or a-jb: ");
  while(Serial.available()==0);    //send
  *realp = Serial.parseFloat();    //store
   sign  = Serial.read();          //store
  *imagp = Serial.parseFloat();    //store
  Serial.print(*realp);
  Serial.print(sign);
  Serial.print("j");
  Serial.println(*imagp);
  if(sign=='-'){
    *imagp *= -1;
  }
}
char get_op(){
 char op;
 Serial.print("Input operator(+,-,*,/): ");
 while(Serial.available()==0);
 op=Serial.read();
 Serial.println(op);
 while(op!='*' && op!='-' && op!='+' && op!='/'){
  Serial.print("Try again. ");
  Serial.print("Input operator(+,-,*,/): ");
  while(Serial.available()==0);
  op=Serial.read();
  Serial.println(op);
 }
 return(op);
}

void mult_comp(float r1, float i1, float r2, float i2,   float *realp, float *imagp){
  *realp = (r1*r2)-(i1*i2);
  *imagp = (r1*i2)+(r2*i1);
  
}
void conv2pol(float r1, float i1, float *magp, float *angp){
      *magp = sqrt(pow(r1,2)+pow(i1,2));
      *angp = atan(i1/r1);
   
    if(r1<0 && i1<0){
      *angp = (abs(*angp))-PI;
    }else if(r1>0 && i1<0) {
      *angp = atan(i1/r1);
    }
    Serial.print(" = ");
    Serial.print(*magp);
    Serial.print("<");
    Serial.println(*angp * (180.0/PI));
}

void div_comp(float r1, float i1, float r2, float i2,   float *realp, float *imagp){
  if(r2 == 0 && i2 == 0){
    Serial.print("Denominator changed to 1.00+j0.00\n");
    r2=1.00;
  }
  *realp = ((r1*r2)+(i1*i2))/(pow(r2,2)+pow(i2,2)); 
  *imagp = ((i1*r2)-(r1*i2))/(pow(r2,2)+pow(i2,2));
}
void display_eq(float r1, float i1, char op,  float r2, float i2, float *realp, float *imagp){

 char sign;
  if(i1 < 0){
    sign='-';
  }else {
    sign='+';
  }
 Serial.print("("); 
 Serial.print(r1);
 Serial.print(sign);
 Serial.print("j");
 Serial.print(abs(i1));
 Serial.print(")");
 Serial.print(op);
  if(i2 < 0){
    sign='-';
  }else {
    sign='+';
  }
 Serial.print("(");
 Serial.print(r2);
 Serial.print(sign);
 Serial.print("j");
 Serial.print(abs(i2));
 Serial.print(")");
 Serial.print(" = " );
 
 if(*imagp<0){
 Serial.print(*realp);
 Serial.print(sign='-');
 Serial.print("j");
 Serial.print(abs(*imagp));
 //conv2pol(r1, i1,&mag, &ang);
}else {
 Serial.print(*realp);
 Serial.print(sign='+');
 Serial.print("j");
 Serial.print(*imagp);
//conv2pol(r1, i1,&mag, &ang);
 }
}

