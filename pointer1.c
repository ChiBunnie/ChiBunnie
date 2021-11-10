// CS271
// Program Name: pointer1.c
// Author: Chioma Abed-Amazu
// Date: 09/30/2020
// Purpose:

/*What does the program do?
 *It outputs the number of characters enetered including the whitespace characters. The function mystery1 is where the counting is been done.*/

/*What type is the formal parameter to the mystery1 function?*/ 
//The formal argument of mystery1 is "*s" which has its parameter as char

/*What type is the actual parameter to the mystery1 function? */
// The actual argument of mystery1 is "asdx ddf gf" which has its parameter as a string or array of characters

/*What role does the *s play in the for loop? 
 * "*s" in the for loop points to the different characters in the string by incrementing s using s++
 */

#include <stdio.h>

int mystery1(const char *s){

	int i;
	for(i = 0; *s; i++, s++); /*empty body*/
	return i;

}   //end function mystery1

int main(void){

	printf("%d\n", mystery1("asdx ddf gf"));

}  //end function main
