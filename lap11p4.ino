/*
* Program file name: lab<lab11>p<problem4>.ino
* <Abed-Amazu Chioma>
* <Team 9>
*<04/15/2019>
* Purpose: This program arranges strings in an oderly mannar i.e first name last name and age .
*/

void setup(){
  Serial.begin(115200);
  
}

void loop(){
  String str1;
  String lname;
  String fname;
  String age;
  int index1;
  int index2;


  while(Serial.available()==0);
   str1 = Serial.readString();

  index1 = str1.indexOf(' ');
  index2 = str1.indexOf(' ',(index1 +1));

  lname = str1.substring(0, index1);
  lname.remove(lname.indexOf(','));

  fname = str1.substring(index1, index2);

  age = str1.substring(index2);

 Serial.println(fname + String("  ")+ lname + age);
}

