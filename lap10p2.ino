
/*
* Program file name: lab<lab10>p<problem2>.ino
* <Abed-Amazu Chioma>
* <Team 9>
*<04/02/2019>
*purpose:This program plays the game of hangman.
*/

#define SNTL '#'
#define N 10
void scan_word(char words[],int *np);
int find_lett(char words[], int *np, char lett);
char get_letter(char letter);
void setup(){
  Serial.begin(115200);
  int n;
  char words[N];
  int len=0;
  int i=0;
  char lett;
  char guess[N]={'*','*','*','*','*','*','*','*','*','*'};
  char letter;
  int lett_index;
  int miss=0;
  int win=0;

  Serial.print("The Game of Hangman\n");
  Serial.print("Guess: ");
 
  while(words[i] != SNTL){
     i++;
    while(Serial.available()==0);
    words[i]=Serial.read();
  }
  
  scan_word(words,&n);

  Serial.print("Misses: ");
  Serial.println(miss);

  Serial.print("\n");

  
 do{
      lett = get_letter(letter);
      Serial.print("Guess: ");
      lett_index = find_lett(words, &n, lett);
      if(lett_index != -1){ 
      guess[lett_index]= lett;
      }
      for(int i=0; i<n; i++){
      Serial.print(guess[i]);
        }
      Serial.print("\n"); 
      Serial.print("Misses: ");
      if(lett_index==-1){
      miss++;
      Serial.println(miss);
      }
      Serial.print("\n");
//      for(int i=0; i<n; i++){
//        if(guess[i]==words[i]){
//          break;
//        } else if(i==n-1){
//          win=1;
//          return (win); 
//        }
//      } 
      
   }while(miss<7);

 if(win==0){
      Serial.print("\n");
      Serial.print("\n");
      Serial.print("You Lost!!!\n");
      Serial.print("The word was: ");
      for(int i=0; i<n; i++){
      Serial.print(words[i]);
      }
        }else{
      Serial.print("\n");
      Serial.print("\n");
      Serial.print("You Won!!!\n");
      Serial.print("The word was: ");
      Serial.print(words[i]);
      }
 }








void loop(){
  
}

void scan_word(char words[],int *np){
  char guess[N]={'*','*','*','*','*','*','*','*','*','*'};
  int i=0;
  int len=0;
  while(words[i] != SNTL){
     i++;
  }
  *np = i-1;
  /*for(int i=0; i<*np; i++){
      Serial.print(guess[i]);
  }*/
 Serial.print("\n");
}
int find_lett(char words[], int *np, char lett){
  for(int i=0; i<*np+2; i++){
    if(words[i] == lett){
      return i-1;
    }
  }
  return -1;
}
char get_letter(char letter){
   do{
  Serial.print("Input letter> ");
  while(Serial.available()==0);
  letter=Serial.read();
  Serial.println(letter);
  } while(!(letter >= 'A' && letter <= 'Z')&&!(letter >= 'a' && letter <= 'z'));
 return letter;
}


