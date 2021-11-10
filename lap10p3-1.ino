 /*
* Program file name: lab<lab10>p<problem3>.ino
* <Abed-Amazu Chioma>
* <Team 9>
*<04/02/2019>
* Purpose: This program sort a set of integers in ascending order  .
*/


#define SNTL  -32768

void bubble_sort(int x[], int N);

void setup(){
  Serial.begin(115200); //set serial comm to 115 kbps
  int N=12;
  int x[N];
  int len=0;
  int i= -1;
  Serial.print("Enter integrs: ");
  
  do{
      len++;  i++; 
      while(Serial.available()==0);
      x[i]=Serial.parseFloat();
      Serial.print(x[i]);
      Serial.print("\t");
     
   }while(x[i] != SNTL);
  Serial.print("\n");

 Serial.print("Printing Sorted array: ");
 bubble_sort(x, (len-1));

 for(i=0; i<(len-1); i++){
  
 Serial.print(x[i]);
 Serial.print("\t");
 
 }
 
 
}
void loop(){
  
}
void bubble_sort(int x[], int N){
  int i;
  int j;
  int len=0;
  int temp=0;
  int jmax;
 for(i=0; i< N; i++){
  for(j = 0; j< (N-i-1); j++){
    if (x[j] > x[j+1]){
      temp = x[j];
      x[j] = x[j+1];
      x[j+1] = temp; 
    }
  }
 }
}

