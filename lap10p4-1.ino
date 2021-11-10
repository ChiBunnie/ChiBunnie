/*
* Program file name: lab<lab10>p<problem4>.ino
* <Abed-Amazu Chioma>
* <Team 9>
*<04/02/2019>
* Purpose: This program combines and sorts two arrays in ascending order .
*/


void combine_arr(int x[], int nx, int y[], int ny, int z[]);

void setup(){
  Serial.begin(115200); //set serial comm to 115 kbps
  int x[10]=/*{-1,6,14,19,32};*/{-1,0,14,19,32,44,59};
  int y[10]=/*{-1,16,18,32,55,99};*/{0,14,14,16,59};
  int nx=7;
  int ny=5;
  int ix=0;
  int iy= 0;
  int num=0;
  int i=0;
  int z[20];
 


combine_arr(x, nx, y, ny, z);

 Serial.print("z[] = ");
  for(i=0; i<(nx+ny); i++){
  Serial.print(z[i]);
  Serial.print("\t");
 }

}
 
void loop(){
  
}

void combine_arr(int x[], int nx, int y[], int ny, int z[]){
  int nz = ny + nx;
  int i=0,j=0,k=0;

  for(i=0; i<nz; i++){
    if(j<nx && k<ny){
      if(x[j] <  y[k]){
        z[i] = x[j];
        j++;
      }
     else{
      z[i]=y[k];
      k++;
     }
     
    }
   else if(j==nx){
    for(i=i; i<nz; i++){
      z[i] = y[k];
      k++;
    }
   }
   else{
    for(i=i; i<nz; i++){
      z[i] = x[j];
      j++;
    }
   }
  }
}

