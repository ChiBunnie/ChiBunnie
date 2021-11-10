/*
* Program file name: lab<lab11>p<problem3>.ino
* <Abed-Amazu Chioma>
* <Team 9>
*<04/09/2019>
* Purpose: This program combines and sorts two arrays in ascending order and also removes all dublicate .
*/



void combine_arr(int x[], int nx, int y[], int ny, int z[]);
int  remove_dup(int z[], int nz, int w[]);

void setup(){
  Serial.begin(115200); //set serial comm to 115 kbps
  int x[10]=/*{-1,6,14,19,32};*/{-1,0,14,19,32,44,59};
  int y[10]=/*{-1,16,18,32,55,99};*/{0,14,14,16,59};
  int nx=7;
  int ny=5;
  int nz=12;
  int ix=0;
  int iy= 0;
  int num=0;
  int i=0;
  int z[20];
  int w[20];
  int count=0;
  int arr_w;
  
 


combine_arr(x, nx, y, ny, z);
arr_w=remove_dup(z, nz,  w);

 Serial.print("w[] = ");
  for(i=0; i<(arr_w); i++){
  Serial.print(w[i]);
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
int  remove_dup(int z[], int nz, int w[]){
  int count=0;
  int iw=0,iz;
  for(iz=0; iz<nz; iz++){
    if(z[iz] != z[iz+1]){
      w[iw] = z[iz];
      iw++;
    } 
  }
 
  return iw++;
}
