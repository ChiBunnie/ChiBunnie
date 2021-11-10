/*
* Program file name: lab<lab11>p<problem1>.ino
* <Abed-Amazu Chioma>
* <Team 9>
*<04/09/2019>
*purpose:This program adds a playback function to a music player.
*
*/

#define RT0 -1 // rest (no note)
#define AN2 110
#define AS2 117
#define BN2 123
#define CN4 262 // middle C frequency
#define CS4 277
#define DN4 294
#define DS4 311
#define EN4 330
#define FN4 349
#define FS4 370
#define GN4 392
#define GS4 415
#define AN4 440 // concert A
#define AS4 466
#define BN4 494
#define CN5 523
#define CS5 554
#define DN5 587
#define DS5 622
#define EN5 659
#define FN5 698
#define FS5 740
#define GN5 784
#define SPEAKER 5
#define M 28
#define INT_PIN 2
volatile byte isong = 0;
void play_song(int song[], int n);
void reset_isong();
void setup(){
  
pinMode(INT_PIN, INPUT_PULLUP);
attachInterrupt(digitalPinToInterrupt(INT_PIN), reset_isong, FALLING); 
  Serial.begin(115200);
  int N=8;
  int song[N];
  int song1[N]= {CN4, DN4, EN4, FN4, GN4, AN4, BN4, CN5};
  int song2[M]= {RT0, RT0, CN4, DN4, CN4, FN4, EN4, RT0,
  CN4, DN4, CN4, GN4, FN4, RT0, CN4, CN5, AN4, FN4, EN4,
  DN4, RT0, AS4, AN4, FN4, GN4, FN4, RT0, RT0};
  
  play_song(song1,N);
  delay(1000);
  play_song(song2,M);
  pinMode(SPEAKER, OUTPUT);
 
  
}
void loop(){
  
}

void play_song(int song[], int N){
  for( isong=0; isong<N; isong++){
    tone(SPEAKER,song[isong]);
      delay(500);
  }    
   if(song[isong]= RT0){
    noTone(SPEAKER);
    delay(500);
    }
  noTone(SPEAKER);
 }

 void reset_isong(){
  isong = 0;
 }

