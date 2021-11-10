/*
* Program file name: lab<lab9>p<problem3>.ino
* <Abed-Amazu Chioma>
* <Team 9>
*<04/01/2019>
* Purpose: This program computes the number of coins to be returned to the user.
*/

int change( float doll, float cent, int quar, int dime, int nick, int pen);
void setup(){
  Serial.begin(115200); //set serial comm to 115 kbps
  float amount_D;
  float amount_P;
  float doll;
  int cent;
  int quar;
  int dime;
  int nick;
  int pen;

   Serial.print("*** Change Calculator ***\n");
   Serial.print("Amount due: $ ");
   while(Serial.available()==0);
   amount_D = Serial.parseFloat();
   Serial.println(amount_D,2);
   do{
      Serial.print("Amount paid: $ ");
      while(Serial.available()==0);
      amount_P = Serial.parseFloat();
      Serial.println(amount_P,2);

      if(amount_P < amount_D){
      Serial.print("Invalid. $ ");
      Serial.print(amount_P);
      Serial.print(" < $ ");
      Serial.println(amount_D);
  }
 }while(amount_P < amount_D);
  Serial.print("The change is:\n");
  doll = amount_P - amount_D;
  Serial.print((int)doll);
  Serial.print(" dollar(s)\n");
 change( doll, cent, quar, dime, nick, pen);
}

void loop(){
}

int change( float doll, float cent, int quar, int dime, int nick, int pen){
    float dice;
    float nicd;
    cent = doll - (int)doll;
    quar = cent/0.25;
    Serial.print(quar);
    Serial.print(" quarter(s)\n");
    dice = cent - (quar*0.25);
    dime = dice/0.10;
    Serial.print(dime);
    Serial.print(" dime(s)\n");
    nick = (dice-(dime*0.10))/0.05;
    Serial.print(nick);
    Serial.print(" nickel(s)\n");
    nicd = dice - (dime*0.10);
    pen = (nicd-(nick*0.05))/0.01;
    Serial.print(pen);
    Serial.print(" penny(ies)\n");
    
}

