/*
* Program File Name: Abed-AmazuChioma_DavidsonElena_EE112_LabProject.ino
* Names: Chioma Abed-Amazu & Elena Davidson
* Last Editted: April 30, 2019
* Purpose: Encode and decode messages using different
* encryption techniques:
*   - Morse Code
*   - Caesar Cipher
*   - Vigenere Cipher
*/

/*--------------------------------- LIBRARIES ------------------------------------------*/
#include <Wire.h>
#include <Adafruit_RGBLCDShield.h>
#include <utility/Adafruit_MCP23017.h>

/*----------------------------------- MACROS -------------------------------------------*/
#define MAX     32    // max length for messages 
#define SNTL    '#'   // sentinal value for text input
#define RED     0x1   // hex value for the red screen
#define YELLOW  0x3   // hex value for the yellow screen
#define GREEN   0x2   // hex value for the green screen
#define TEAL    0x6   // hex value for the teal screen
#define BLUE    0x4   // hex value for the blue screen
#define VIOLET  0x5   // hex value for the violet screen
#define WHITE   0x7   // hex value for the white screen

/*----------------------------------- GLOBALS -------------------------------------------*/
Adafruit_RGBLCDShield lcd = Adafruit_RGBLCDShield();

/*--------------------------------- PROTOTYPES ------------------------------------------*/
/* General Function Prototypes */
void read_orig_message();
void print_messages(char orig[], char code[], int len, int task);
/* Morse Code Function Protoypes */ 
String key_to_morse(char letter);
char key_to_engl(String morse);
void encode_morse(char orig[], String code[], int len);
void decode_morse(String orig[], char code[], int len);
void print_morse_messages(char engl[], String morse[], int len, char task);
/* Caesar Cipher Function Prototypes */
int  set_key_caesar();
void encode_caeser(char orig[], char code[], int len, int key);
void decode_caeser(char orig[], char code[], int len, int key);
/* Vigenere Cipher Function Prototypes */
int  set_key_vigenere(char key[]);
void encode_vigenere(char orig[], char code[], int len, char key[], int key_len);
void decode_vigenere(char orig[], char code[], int len, char key[], int key_len);

/*----------------------------------- SETUP -------------------------------------------*/
void setup() {
  
  /* Set up the serial monitor */
  Serial.begin(115200); // set serial comm to 115 kbps

  /* Set up the LCD screen */
  lcd.begin(16, 2); // set the screen to 2 rows of 16 characters

  /* Define variables */
  char    code_type; // input - Morse, Caesar, or Vigenere
  char    code_task; // input - encode or decode
  int     key_caesar; // input - the key to the Caesar Cipher
  char    key_vigenere[MAX];
  int     key_length; 
 
  int     message_length; 
  char    another; // input - allows the user to encode/decode another message
  char    orig_message[MAX]; 
  char    code_message[MAX];
  String morse_message[MAX]; 

  /* Do-while loop to encode/decode and print messages */
  do {

    /* Clear the LCD screen */
    lcd.clear();
    lcd.setBacklight(WHITE);
    
    /* Prompt the user for the type of code */
    Serial.println("Which code would you like to use?");
    Serial.println("(M = Morse Code, C = Caesar Cipher, V = Vigenere Cipher)");

    /* Read input until a valid character is given */ 
    do {
      /* Read in the input */
      while(Serial.available() == 0); // wait
      code_type = Serial.read(); // store
      Serial.print("> "); // echo
      Serial.println(code_type); //echo
      Serial.print("\n");
      
      /* If the input is invalid print an error */
      if (code_type != 'M' && code_type != 'm' 
              && code_type != 'C' && code_type != 'c' 
              && code_type != 'V' && code_type != 'v') {
        Serial.println("Warning: Invalid input. Please try again.");
        lcd.setBacklight(RED);
        lcd.clear();
        lcd.setCursor(0,0);
        lcd.print("WARNING!");          
      }
    } while (code_type != 'M' && code_type != 'm' 
              && code_type != 'C' && code_type != 'c' 
              && code_type != 'V' && code_type != 'v');
    
    /* Display the code type on the LCD screen */
    /* Morse Code */
    lcd.clear();
    lcd.setCursor(0,0);
    lcd.setBacklight(WHITE);
    if (code_type == 'M' || code_type == 'm') {
       lcd.print("Morse Code");
    }
    /* Caesar Cipher */
    else if (code_type == 'C' || code_type == 'c') {
       lcd.print("Caesar Cipher");
    }
    /* Vigenere Cipher */
    else if (code_type == 'V' || code_type == 'v') {
       lcd.print("Vigenere Cipher");
    }
    lcd.setCursor(0, 1);
    
    /* Prompt the user for the message task (encode or decode) */
    Serial.println("Are you encoding or decoding a message?");
    Serial.println("(E = encode, D = decode)");

    /* Read input until a valid character is given */ 
    do {
      /* Read in the input */
      while(Serial.available() == 0); // wait
      code_task = Serial.read(); // store
      Serial.print("> "); // echo
      Serial.println(code_task); //echo
      Serial.print("\n"); // echo
      
      /* If the input is invalid print an error */
      if (code_task != 'E' && code_task != 'e' 
              && code_task != 'D' && code_task != 'd') {
        Serial.println("Warning: Invalid input. Please try again.");
        lcd.setBacklight(RED);
        lcd.setCursor(0,1);
        lcd.print("WARNING!");          
      }
    } while (code_task != 'E' && code_task != 'e' 
              && code_task != 'D' && code_task != 'd');

    /* Display the code type on the LCD screen */
    /* Encode Message */
    lcd.setBacklight(WHITE);
    lcd.print("                "); // clear second row
    if (code_task == 'E' || code_task == 'e') {
       lcd.print("Encode Message");
    }
    /* Decode Message */
    else if (code_task == 'D' || code_task == 'd') {
       lcd.print("Decode Message");
    }
    lcd.setCursor(0, 1);

    /* Encoding a Morse Code message */
    if ((code_type == 'M' || code_type == 'm') && (code_task == 'E' || code_task == 'e')) {

      /* Read in the message */
      message_length = read_orig_message(&orig_message[0]);

      /* Encode the message */
      encode_morse(&orig_message[0], &morse_message[0], message_length);

      /* Print the messages */
      print_morse_messages(&orig_message[0], &morse_message[0], message_length, code_task);
       
    }

    /* Decoding a Morse Code message */
    else if ((code_type == 'M' || code_type == 'm') && (code_task == 'D' || code_task == 'd')) {
     
      /* Read in the message */
      message_length = read_morse_message(&morse_message[0]);

      /* Decode the message */
      decode_morse(&morse_message[0], &orig_message[0], message_length);

      /* Print the messages */
      print_morse_messages(&orig_message[0], &morse_message[0], message_length, code_task);
      
    }
    
    /* Encoding a Caesar Cipher message */
    else if ((code_type == 'C' || code_type == 'c') && (code_task == 'E' || code_task == 'e')) {

      /* Set the key */
      key_caesar = set_key_caesar();
      
      /* Read in the message */
      message_length = read_orig_message(&orig_message[0]);

      /* Encode the message */
      encode_caeser(&orig_message[0], &code_message[0], message_length, key_caesar);

      /* Print the messages */
      print_messages(&orig_message[0], &code_message[0], message_length, code_task);
       
    }
    
    /* Decoding a Caesar Cipher message */
    else if ((code_type == 'C' || code_type == 'c') && (code_task == 'D' || code_task == 'd')) {

      /* Set the key */
      key_caesar = set_key_caesar();
      
      /* Read in the message */
      message_length = read_orig_message(&orig_message[0]);

      /* Decode the message */
      decode_caeser(&orig_message[0], &code_message[0], message_length, key_caesar);

      /* Print the messages */
      print_messages(&orig_message[0], &code_message[0], message_length, code_task);
       
    }

    /* Encoding a Vigenere Cipher message */
    else if ((code_type == 'V' || code_type == 'v') && (code_task == 'E' || code_task == 'e')) {

      /* Set the key */
      key_length = set_key_vigenere(&key_vigenere[0]);
      
      /* Read in the message */
      message_length = read_orig_message(orig_message);
      
      /* Encode the message */
      encode_vigenere(&orig_message[0], &code_message[0], message_length, &key_vigenere[0], key_length);

      /* Print the messages */
      print_messages(&orig_message[0], &code_message[0], message_length, code_task);
       
    }
    
    /* Decoding a Vigenere Cipher message */
    else if ((code_type == 'V' || code_type == 'v') && (code_task == 'D' || code_task == 'd')) {

      /* Set the key */
      key_length = set_key_vigenere(&key_vigenere[0]);

      /* Read in the message */
      message_length = read_orig_message(orig_message);

      /* Decode the message */
      decode_vigenere(&orig_message[0], &code_message[0], message_length, &key_vigenere[0], key_length);

      /* Print the messages */
      print_messages(&orig_message[0], &code_message[0], message_length, code_task);
       
    }

    /* Ask the user if they want to encode/decode another message */
    Serial.println("Do you want to encode/decode another message? Y/N"); // prompt 
    while(Serial.available() == 0); // wait
    another = Serial.read(); //store
    Serial.print("> "); //echo
    Serial.println(another); // echo
    Serial.print("\n"); // echo
    
  } while (another == 'Y' || another == 'y');
}

/*----------------------------------- LOOP --------------------------------------------*/
void loop() {
  
  /* Intentionally left empty */ 
  
}


/*------------------------------- READ_ORIG_MESSAGE -------------------------------------*/
/*
 * Function: read_orig_message() 
 * Purpose: Reads in the original message (encoded or decoded) and
 * stores it in an array of characters.
 */
int read_orig_message(char orig[]) {

  /* Define variables */
  int len = 0;
  char ch = '*';

  /* Prompt the user for the message */
  Serial.println("Please enter the message followed by a #.");
  Serial.println("Messages must be 32 characters or less, including spaces.");
  Serial.println("NOTE: Vigenere messages must be uppercase only.");
  Serial.print("> Message: ");

  /* Read in the message and store it in an array */
  while (ch != SNTL) {
    /* Read in the next letter */
    while (Serial.available() == 0); // wait
    ch = Serial.read(); // store

    /* Print each of the characters */
    if (ch != SNTL) {
      Serial.print(ch);
    }

    /* Add the letter to the array */
    if (ch != SNTL && len < 31) {
      orig[len] = ch;
      len++;
    }
    else if (ch == ' ') {
      orig[len] = '\32';
      len++;
    }
  }
  Serial.print("\n\n");
  
  /* Print a warning if the message is too long (>32) */
  if (len > 32) {
    Serial.println("Warning: Message was >32 characters.");
    Serial.println("         Only the first 32 characters will be stored.");
    lcd.setBacklight(RED);
    lcd.setCursor(0,1);
    lcd.print("                ");
    lcd.print("WARNING!");
  }
  
  /* Return the length of the message */
  if (len < 32) {
    return len;
  }
  else {
    return 32;
  }
  
}

/*--------------------------------- PRINT_MESSAGE ---------------------------------------*/
/*
 * Function: print_message()
 * Purpose: Print the original and the encoded or decoded 
 * message. Also display the encode or decoded message
 * on the LCD screen. 
 */
void print_messages(char orig[], char code[], int len, char task) {

  /* Print the original message by iterating */
  /* through the array */
  Serial.print("Original Message: ");
  for (int i = 0; i < len; i++) {
        Serial.print(orig[i]);
  }
  Serial.print("\n");

  /* Print the encoded/decoded message by iterating */
  /* through the array */
  if (task == 'E' || task == 'e') {
    Serial.print("Encoded Message:  ");
  }
  else if (task == 'D' || task == 'd'){
    Serial.print("Decoded Message:  ");
  }
  for (int i = 0; i < len; i++) {
        Serial.print(code[i]);
  }
  Serial.print("\n\n");
  

  /* Clear the LCD screen */
  lcd.clear();
    
  /* Display the message on the LCD screen */
  lcd.setBacklight(GREEN);
  for (int i = 0; i < len; i++) {
        lcd.print(code[i]);

        if (i == 15) {
          lcd.setCursor(0,1);
        }
  }
}

/*------------------------------- READ_MORSE_MESSAGE ------------------------------------*/
/*
 * Function: read_morse_message() 
 * Purpose: Reads in the original message (encoded or decoded) and
 * stores it in an array of characters.
 */
int read_morse_message(String orig[]) {

  /* Define variables */
  String message;
  int len, prev_i;
  String str;

  /* Prompt the user for the message */
  Serial.println("Please enter the Morse message one character at a time.");
  Serial.println("Enter # to quit");
  Serial.println("Messages must be 32 characters or less, including spaces.");
  Serial.print("> Message: ");
  Serial.print(message);

  prev_i = 0;
  len = 0;
  
  while (Serial.available() == 0);
  message = Serial.readString();

  for (int i = 0; i < MAX; i++) {
    if (message.charAt(i) == ' ' || message.charAt(i) == '#') {
      orig[i] = message.substring(prev_i, i);;
      prev_i++;
      len++;
    }
  }

  for (int i = 0; i < len; i++) {
    Serial.print(orig[i]);
    Serial.print(" "); 
  }
  Serial.println();
  
  /* Return the length of the message */
  if (len < 32) {
    return len;
  }
  else {
    return 32;
  }
  
}

/*-------------------------------- KEY_TO_MORSE -------------------------------------*/
/*
 * Function: key_to_morse() 
 * Purpose: Given an English message encode to Morse code, 
 * where * = dots and - = dashes. 
 */
String key_to_morse(char letter){

  /* Define variables */
  String code; // output - the Morse encoded string

  /* Swtich-case statement to encode the letter */
  switch(letter){
    case 'A':
    case 'a':
      code = "*-";
      break;

    case'B':
    case'b':
      code = "-***";
      break;

    case'C':
    case'c':
      code = "-*-*";
      break;

    case 'D':
    case 'd':
      code = "-**";
      break;

    case 'E':
    case 'e':
      code = "*";
      break;

    case 'F':
    case 'f':
      code = "**-*";
      break;

    case 'G':
    case 'g':
      code = "--*";
      break;

    case 'H':
    case 'h':
       code = "****";
       break;

   case 'I':
   case 'i':
      code = "**";
      break;

   case 'J':
   case 'j':
      code = "*---";
      break;

   case 'K':
   case 'k':
      code = "-*-";
      break;

   case 'L':
   case 'l':
      code = "*-**";
      break;

   case 'M':
   case 'm':
      code = "--";
      break;

  case 'N':
  case 'n':
      code = "-*";
      break;

  case 'O':
  case 'o':
      code = "---";
      break;

  case 'P':
  case 'p':
      code = "*--*";
      break;

  case 'Q':
  case 'q':
      code = "--*-";
      break;

  case 'R':
  case 'r':
      code = "*-*";
      break;
     
  case 'S':
  case 's':
      code = "***";
      break;

  case 'T':
  case 't':
      code = "-";
      break;

  case 'U':
  case 'u':
      code = "**-";
      break;

  case 'V':
  case 'v':
      code = "***-";
      break;

  case 'W':
  case 'w':
      code = "*--";
      break;

  case 'X':
  case 'x':
      code = "-**-";
      break;

  case 'Y':
  case 'y':
     code = "-*--";
     break;

  case 'Z':
  case 'z':
    code = "--**";
    break;

  default:
    break;
  }

  /* Return the Morse code character */
  return code;
}

/*-------------------------------- KEY_TO_ENGL -------------------------------------*/
/*
 * Function: key_to_engl() 
 * Purpose: Given a Morse code message decode to English. 
 */
char key_to_engl(String morse){

  /* Define variables */
  char letter; // output - the English character

  /* If-else statement to convert a */
  /* Morse code symbol to a letter */
  if(morse == "*-"){
    letter = 'A';
  }
  else if(morse == "-***"){
    letter = 'B';
  }
  else if(morse == "-*-*"){
      letter = 'C';
  }
  else if(morse == "-**"){
      letter = 'D';
  }
  else if(morse == "*"){
      letter = 'E';
  }
  else if(morse == "**-*"){
      letter = 'F';
  }
  else if(morse == "--*"){
      letter = 'G';
  }
  else if(morse == "****"){
       letter = 'H';
  }
  else if(morse == "**"){
      letter = 'I';
  }
  else if(morse == "*---"){
      letter = 'J';
  }
  else if(morse == "-*-"){
      letter = 'K';
  }
  else if(morse == "*-**"){
      letter = 'L';
  }
  else if(morse == "--"){
      letter = 'M';
  }
  else if(morse == "-*"){
      letter = 'N';
  }
  else if(morse == "---"){
      letter = 'O';
  }
  else if(morse == "*--*"){
      letter = 'P';
   }
   else if(morse == "--*-"){ 
      letter = 'Q';
   }
   else if(morse == "*-*"){
      letter = 'R';
   }
   else if(morse == "***"){
      letter = 'S';
   }
   else if(morse == "-"){
      letter = 'T';
   }
   else if(morse == "**-"){
      letter = 'U';
   }
   else if(morse == "***-"){
      letter = 'V';
   }
   else if(morse == "*--"){
      letter = 'W';
   }
   else if(morse == "-**-"){
      letter = 'X';
   }
   else if(morse == "-*--"){
     letter = 'Y';
   }
   else if(morse == "--**"){
    letter = 'Z';
   }

   /* Return the decoded letter */
   return letter;
}

/*-------------------------------- ENCODE_MORSE -------------------------------------*/
/*
 * Function: encode_caesar() 
 * Purpose: Given a message encode it using Morse Code
 * encryption method. 
 */
void encode_morse(char orig[], String code[], int len) {

  /* Display progress on LCD screen */
  lcd.setBacklight(TEAL);
  lcd.setCursor(0,1);
  lcd.print("Encoding...");
  delay(3000); // 3000 ms = 3 seconds

  /* Iterate through the message, character by character  */
  for (int i = 0; i < len; i++) {
    String str = key_to_morse(orig[i]);
    code[i] = str;
  }
}


/*-------------------------------- DECODE_MORSE -------------------------------------*/
/*
 * Function: decode_caesar() 
 * Purpose: Given a message decode it using Morse Code
 * encryption method. 
 */
void decode_morse(String orig[], char code[], int len) {

  /* Display progress on LCD screen */
  lcd.setBacklight(TEAL);
  lcd.setCursor(0,1);
  lcd.print("Decoding...");
  delay(3000); // 3000 ms = 3 seconds

  /* Iterate through the message, character by character  */
  for (int i = 0; i < len; i++) {
    String str = orig[i];
    char ch = key_to_engl(orig[i]);
    code[i] = ch;
    
  }

}

/*---------------------------- PRINT_MORSE_MESSAGE ---------------------------------------*/
/*
 * Function: print_morse_message()
 * Purpose: Print the original and the encoded or decoded 
 * morse message. Also display the encode or decoded message
 * on the LCD screen. 
 */
void print_morse_messages(char engl[], String morse[], int len, char task) {

  /* Print the encoded message by iterating */
  /* through the array */
  /* English to Morse messages */
  if (task == 'E' || task == 'e') {
    
    /* English message */
    Serial.print("Original Message: ");
    for (int i = 0; i < len; i++) {
      Serial.print(engl[i]);
    }
    Serial.print("\n");
    
    /* Morse message */
    Serial.print("Encoded Message:  ");
    for (int i = 0; i < len; i++) {
      Serial.print(morse[i]);
      Serial.print(" ");
    }
    Serial.print("\n");
    
  }

  /* Morse to English messages */
  else if (task == 'D' || task == 'd'){
    
    /* Morse message */
    Serial.print("Original Message:  ");
    for (int i = 0; i < len; i++) {
      Serial.print(morse[i]);
      Serial.print(" ");
    }
    Serial.print("\n");

    /* English message */
    Serial.print("Decoded Message: ");
    for (int i = 0; i < len; i++) {
      Serial.print(engl[i]);
    }
    Serial.print("\n");
  
  }

  Serial.print("\n");
  

  /* Clear the LCD screen */
  lcd.clear();
    
  /* Display the message on the LCD screen */
  lcd.setBacklight(GREEN);
  /* Encoded Morse message */
  int lcd_index = morse[0].length();
  if (task == 'E' || task == 'e') {
    for (int i = 0; i < len; i++) {
      lcd.print(morse[i]);
      lcd.print(' ');
      lcd_index += morse[i+1].length();
      
      if (lcd_index >= 15) {
        lcd.setCursor(0,1);
        lcd_index = 0;
      }
    }
  }
  
  /* Decoded English message */
  else if (task == 'D' || task == 'd'){
    
    for (int i = 0; i < len; i++) {
        lcd.print(engl[i]);

        if (i == 15) {
          lcd.setCursor(0,1);
        }
    } 
  }
}

/*-------------------------------- SET_KEY_CAESAR ---------------------------------------*/
/*
 * Function: set_key_caesar() 
 * Purpose: Given two characters (of the same case) determine
 * and print out the key (or shift) for a Caesar Cipher. 
 */
int set_key_caesar() {

  /* Define variables */
  char char1; // input - the first character
  char char2; // input - the second character 
  int key; // output - the key (or shift) of the cipher

  /* Prompt the user for the key to the Caesar Cipher */
  Serial.println("Please enter the Caesar Cipher key.");
  Serial.println("(e.g. - A = K)");

  /* Read in the first character */ 
  Serial.print("Character 1: ");
  while(Serial.available() == 0); // wait
  char1 = Serial.read(); // store
  Serial.println(char1); //echo 

  /* Read in the second character */ 
  Serial.print("Character 2: ");
  while(Serial.available() == 0); // wait
  char2 = Serial.read(); // store
  Serial.println(char2); //echo 

  /* Calculate the key based on ASCII codes */
  key = abs(char2 - char1); 

  /* Echo the key for the Caesar Cipher */
  Serial.print("> Key: "); // echo
  Serial.print(char1); // echo 
  Serial.print(" = "); // echo 
  Serial.println(char2); // echo
  Serial.print("\n"); // echo

  /* Display the key for the Caesar Cipher on the LCD screen */
  lcd.setBacklight(WHITE);
  lcd.setCursor(0,1); // set cursor to second row
  lcd.print("                "); // clear row
  lcd.setCursor(0,1); // set cursor to second row
  lcd.print("Key: "); // display
  lcd.print(char1); // display
  lcd.print(" = "); // display
  lcd.print(char2); // display

  /* Return the Caesar Cipher */
  return key;
  
}

/*-------------------------------- ENCODE_CAESAR -------------------------------------*/
/*
 * Function: encode_caesar() 
 * Purpose: Given a message encode it using the Caesar Cipher
 * encryption method (shift each letter based on a key). 
 */
void encode_caeser(char orig[], char code[], int len, int key) {

  /* Display progress on LCD screen */
  lcd.setBacklight(TEAL);
  lcd.setCursor(0,1);
  lcd.print("Encoding...");
  delay(3000); // 3000 ms = 3 seconds

  /* Define variables */
  char ch;

  /* Iterate through the message, character by character  */
  for (int i = 0; i < len; i++) {

    /* Look at the current character */
    ch = orig[i];

    /* Space */
    if (ch == ' ') {
      code[i] = ' ';
    }

    /* Lowercase letters */
    else if(ch >= 'a' && ch <= 'z'){

      /* If add the key to the character will cause */
      /* the character to be invalid (out of range) */
      if ((ch + key) < 'a' || (ch + key) > 127) {

        /* Add the key to the character and add 230 */
        /* to offset the out of range ASCII value */
        ch = ch + key + 230;

        /* If the character is not a lowercase letter */
        /* adjust the ASCII code by subtracting z, adding a, */
        /* and subtracting 1 */ 
        if(ch < 'a'){
          ch = ch - 'z' + 'a' - 1;
        }
        
        /* Save the encoded character in the code array */
        code[i] = ch;
      }
      else { 

        /* Add the key to the character*/
        ch = ch + key;

        /* If the character is not a lowercase letter */
        /* adjust the ASCII code by subtracting z, adding a, */
        /* and subtracting 1 */ 
        if(ch > 'z'){
          ch = ch - 'z' + 'a' - 1;
        }

        /* Save the encoded character in the code array */
        code[i] = ch;
      }
      
    }

    /* Uppercase letters */
    else if(ch >= 'A' && ch <= 'Z'){
      
      /* Add the key to the character*/
      ch = ch + key;

      /* If the character is not a uppercase letter */
      /* adjust the ASCII code by subtracting Z, adding A, */
      /* and subtracting 1 */
      if(ch > 'Z'){
        ch = ch - 'Z' + 'A' - 1;
      }

      /* Save the encoded character in the code array */
      code[i] = ch;
    }

    /* Other symbols */
    else {
      code[i] = ch;
    }
  }
  
}

/*-------------------------------- DECODE_CAESAR -------------------------------------*/
/*
 * Function: 
 * Purpose: 
 */
void decode_caeser(char orig[], char code[], int len, int key) {

  /* Display progress on LCD screen */
  lcd.setBacklight(TEAL);
  lcd.setCursor(0,1);
  lcd.print("Decoding...");
  delay(3000); // 3000 ms = 3 seconds

  /* Define variables */
  char ch;

  for (int i = 0; i < len; i++) {
    
    ch = orig[i];

    /* Space */
    if (ch == ' ') {
      code[i] = ' ';
    }

    /* Lowercase letters */
    else if(ch >= 'a' && ch <= 'z'){

      if ((ch - key) < 'a' || (ch - key) > 127) {
        ch = ch - key - 230;


        if(ch < 'a'){
          ch = ch + 'z' - 'a' + 1;
        }
        
        
        code[i] = ch;
      }
      else { 
        ch = ch - key;

        if(ch > 'z'){
          ch = ch + 'z' - 'a' + 1;
        }
        
        code[i] = ch;
      }
      
    }

    /* Uppercase letters */
    else if(ch >= 'A' && ch <= 'Z'){
      if ((ch - key) < 'A' || (ch - key) > 127) {
        ch = ch - key - 230;


        if(ch < 'A'){
          ch = ch + 'Z' - 'A' + 1;
        }
        
        
        code[i] = ch;
      }
      else { 
        ch = ch - key;

        if(ch > 'Z'){
          ch = ch + 'Z' - 'A' + 1;
        }
        
        code[i] = ch;
      }
    }

    /* Other symbols */
    else {
      code[i] = ch;
    }
  }
  
}

/*-------------------------------- SET_KEY_VIGENERE ------------------------------------*/
/*
 * Function: set_key_vigenere()
 * Purpose: Read in a keyword or phrase (no spaces)
 * used to encode/decode a message using a Vigenere Cipher.
 */
int set_key_vigenere(char key[]) {

  /* Define variables */
  int len = 0;
  char ch = '*';

  /* Prompt the user for the message */
  Serial.println("Please enter the key followed by a #.");
  Serial.println("Keys must be uppcase only.");

  /* Read in the message and store it in an array */
  while (ch != SNTL) {
    /* Read in the next letter */
    while (Serial.available() == 0); // wait
    ch = Serial.read(); // store

    /* Add the letter to the array */
    if (ch != SNTL) {
      key[len] = ch;
      len++;
    }
  }

  /* Print out the key*/
  Serial.print("> Key: ");
  for (int i = 0; i < len; i++) {
    Serial.print(key[i]);
  }
  Serial.print("\n\n");

  /* Display the key for the Caesar Cipher on the LCD screen */
  lcd.setBacklight(TEAL);
  lcd.setCursor(0,1); // set cursor to second row
  lcd.print("                "); // clear row
  lcd.setCursor(0,1); // set cursor to second row
  lcd.print("Key: ");
  for (int i = 0; i < len; i++) {
    lcd.print(key[i]);
  }
  

  return len;
}

/*-------------------------------- ENCODE_VIGENERE ----------------------------------*/
/*
 * Function: encode_vigenere()
 * Purpose: Given a message and a keyword, encode the message
 * using the Vigenere Cipher encryption method.
 * Notes: Based off of code from "The Crazy Programmer."
 * Link: https://www.thecrazyprogrammer.com/2017/08/vigenere-cipher-c-c.html
 */
void encode_vigenere(char orig[], char code[], int len, char key[], int key_len) {

  /* Display progress on LCD screen */
  lcd.setBacklight(TEAL);
  lcd.setCursor(0,1);
  lcd.print("Encoding...");
  delay(3000); // 3000 ms = 3 seconds
  
  /* Define variables */
  char new_key[len]; // the key word repeated to the length of the message

  /* Create a new key with the same length as the message */
  for(int i = 0, j = 0; i < len; ++i) {

    /* If j = the length of the key, reset j */
    if(j == key_len) {
      j = 0;
    }

    /* If the message has a space at index i, */
    /* create a space in the ney key */
    if (orig[i] == ' ') {
      new_key[i] = '\32';
    }

    /* Otherwise add the characters of the key */
    /* to the new longer key */
    else {
      new_key[i] = key[j];
      ++j;
    }
  }

  /* Encode the message */
  for(int i = 0; i < len; ++i) {

    /* If there is a space in the original message */
    /* include a space in the encoded message*/
    if (orig[i] == ' ') {
      code[i] = '\32';
    }

    /* If there are numbers or symbols add them */
    /* to the new message as is*/
    else if (orig[i] < 'A' || orig[i] > 'Z' ) {
      code[i] = orig[i];
    }

    /* Encode each character of the message using */
    /* the formula: P = (E - K + 26) mod 26 */
    else {
      code[i] = ((orig[i] + new_key[i]) % 26) + 'A';
    }
 }
  
}

/*-------------------------------- DECODE_VIGENERE ----------------------------------*/
/* 
 * Function: decode_vigenere()
 * Purpose: Given a message and a keyword, decode the message
 * using the Vigenere Cipher encryption method.
 * Notes: Based off of code from "The Crazy Programmer."
 * Link: https://www.thecrazyprogrammer.com/2017/08/vigenere-cipher-c-c.html
 */
void decode_vigenere(char orig[], char code[], int len,char key[], int key_len) {

  /* Display progress on LCD screen */
  lcd.setBacklight(TEAL);
  lcd.setCursor(0,1);
  lcd.print("Decoding...");
  delay(3000); // 3000 ms = 3 seconds

  /* Define variables */
  char new_key[len]; // the key word repeated to the length of the message

  /* Create a new key with the same length as the message */
  for(int i = 0, j = 0; i < len; ++i) {

    /* If j = the length of the key, reset j */
    if(j == key_len) {
      j = 0;
    }

    /* If the message has a space at index i, */
    /* create a space in the new key */
    if (orig[i] == ' ') {
      new_key[i] = '\32';
    }

    /* Otherwise add the characters of the key */
    /* to the new longer key */
    else {
      new_key[i] = key[j];
      ++j;
    }
  }

  /* Decode the message */
  for(int i = 0; i < len; ++i) {

    /* If there is a space in the original message */
    /* include a space in the encoded message */
    if (orig[i] == ' ') {
      code[i] = '\32';
    }

    /* If there are numbers or symbols add them */
    /* to the new message as is*/
    else if (orig[i] < 'A' || orig[i] > 'Z' ) {
      code[i] = orig[i];
    }

    /* Decode each character of the message using */
    /* the formula: P = (E - K + 26) mod 26 */
    else {
      code[i] = (((orig[i] - new_key[i]) + 26) % 26) + 'A';
    }
  }  
}
