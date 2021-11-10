
/*/*
* Program file name: lab<lab11>p<problem2>.ino
* <Abed-Amazu Chioma>
* <Team 9>
*<04/09/2019>
*purpose:This program calculates the center mass of an object.
*
 */
 
void write_point_mass(float T_mass, float center_M);
float get_point_mass(float x[],int nx, float y[], int ny, float z[], int nz, float m[], int nm);
float center_of_mass(float x[],int nx, float y[], int ny, float z[], int nz, float m[], int nm, float *cxp, float *cyp, float *czp);

void setup() {
  Serial.begin(115200);
  float x[10];
  float y[10];
  float z[10];
  float m[10];
  int num;
  int N;
  int nx=0;
  int ny=0;
  int nz=0;
  int nm=0;
  float cx, cy, cz;
  float center_mass;
  float T_mass;
  
  
  Serial.print("Input number of points in the data set: ");
  while(Serial.available()==0);
  N = Serial.parseInt();
  Serial.println(N); 

 Serial.print(" x           y           z           m\n");
 
num = get_point_mass(x, N, y, N, z, N, m,N);
Serial.print(num);

center_mass = center_of_mass( x, N, y, N, z, N, m, N, &cx, &cy, &cz);

write_point_mass(center_mass, &cx, &cy, &cz );
}

void loop() {
  

}

float get_point_mass(float x[],int nx, float y[], int ny, float z[], int nz, float m[], int nm){
  int i=0;

  for(i=0; i<nx; i++){
    while(Serial.available()==0);
    x[i]=Serial.parseFloat();
    Serial.print(x[i],3);  
    Serial.print("       ");
  
    y[i]=Serial.parseFloat();
    Serial.print(y[i],3);  
    Serial.print("        ");
  
    z[i]=Serial.parseFloat();
    Serial.print(z[i],3);  
    Serial.print("      ");
    
    m[i]=Serial.parseFloat();
    Serial.println(m[i],3);  
  }
}
float center_of_mass(float x[],int nx, float y[], int ny, float z[], int nz, float m[], int nm, float *cxp, float *cyp, float *czp){
  float sumx=0, sumy=0, sumz;
  float T_mass=0;
  int ix,iy,iz,im;

  for(im=0; im<nm; im++){
    T_mass+=m[im];
  }
  for(ix=0; ix<nx; ix++){
    sumx+=(x[ix]*m[ix]);
  }
  *cxp=sumx/T_mass;
  for(iy=0; iy<ny; iy++){
    sumy+=(y[iy]*m[iy]);
  }
  *cyp=sumy/T_mass;
  for(iz=0; iz<nz; iz++){
    sumz+=(z[iz]*m[iz]);
  }
  *czp=sumz/T_mass;
  return T_mass;
}
void write_point_mass(float T_mass, float *cxp, float *cyp, float *czp ){
  
  Serial.print("Total mass: ");
  Serial.println(T_mass,3);
  Serial.print("Center of mass: (");
  Serial.print(*cxp,3);
  Serial.print(", ");
  Serial.print(*cyp,3);
  Serial.print(", ");
  Serial.print(*czp,3);
  Serial.print(")\n");
}

