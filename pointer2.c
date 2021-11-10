// CS271
// Program Name: pointer2.c
// Author: Chioma Abed-Amazu
// Date: 09/30/2020

/*What does the program do?*/
//This program first prints out the chracters or values in the array s then it prints out the same string or array without the spaces in it this time.
//It does this using the function mystery2. 

/*After the line char s[6] = "ab x"; what values are in the 6 elements of the s array?*/
// The first four values are 'a', 'b', ' ', and 'x' while the first value is the null character '\0', and the sixth value is zero '0'

/*What causes the for loop to terminate?*/
//The null character at the end of the array or string is what terminates the loop.
//

/*What is the output of the program? */
// The outputs of this program are:
//  ab x
//  abx



#include <string.h>
#include <stdio.h>

void mystery2(char *s){
        char *t;
        for(t = s; *t = *s; s++){
        	if(*t != ' '){
		       	t++;
		} //end of if
	
	} //end of for

}   //end function mystery2

int main(void){
	char s[6] = "ab x";
	printf("%s\n", s);
	mystery2(s);
        printf("%s\n", s);

}   //end function main

