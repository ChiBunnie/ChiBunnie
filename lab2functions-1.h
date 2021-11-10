//CS 271
//Program Name: Function Header
//Author: Chioma Abed-Amazu
//Date: 09/10/2020
//Purpose: To intialize the function prototypes 



#ifndef LAB2FUNCTIONS
#define LAB2FUNCTIONS
#include <stddef.h>

 //Function prototypes
   //Print a character array
   void printCharArray(char letter[], size_t size);  // intializes printCharArray with parameters of array of characters and the size of the array

   // counts the number of characters entered in the array 
   int countLetters(char letter_1[], size_t size);   // intializes countLetters with an array of characters and the size of the array and it returns an integer

   //counts the number of charcaters that are the same in the same array index
   int numMatches(char array1[],char array2[], size_t size);// intializes numMatches with an array of characters and the size of the array and it returns an integer

   //converts all lowercase characters in the array to uppercase
   void capitalize(char uppercase[], size_t size); // intializes capitalize with parameters of array of characters and the size of the array

#endif
