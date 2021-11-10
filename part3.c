// CS271
// Program Name: part3.c
// Author: Chioma Abed-Amazu
// Date: 10/07/2020
// Purpose: This program generates a string of characters from a seven digit phone number

#include <stdio.h>
#include <string.h>


int main(void){

        char *phoneLetters[10] = {"  ", "  ", "ABC", "DEF", "GHI", "JKL","MNO", "PRS", "TUV", "WXY"};   //the table for the number to letter conversion


        FILE *wfPtr;    //defines the words text file
        char Letters[7]; //stores letters 
        int phoneDigits[7]; 
        int phoneNumber;  //stores the digits enetered by the user
        
	//creates text file
	if((wfPtr = fopen("words.txt", "w")) == NULL){
		puts("File could not be opened");
	} //end of if

	printf("Ehter the seven-digit phone number using the digits 2 through 9: ");  //prints prompt
	scanf("%d", &phoneNumber);   //scans the phone number


	int i = 6;
  	while ( i < sizeof(phoneDigits)){
    		// checking the given number is in given format and contains valid digits only
    		int temp = phoneNumber % 10;
    		phoneNumber /= 10;
		phoneDigits[i] = temp;
		//end if
      		i--;
  	}//end while
		
		/*converts the numbers entered to letters*/
                for(int Num1 = 0; Num1 < 3; Num1++){
                         for(int Num2 = 0; Num2 < 3; Num2++){
                                 for(int Num3 = 0; Num3 < 3; Num3++){
                                         for(int Num4 = 0; Num4 < 3; Num4++){
                                                 for(int Num5 = 0; Num5 < 3; Num5++){
                                                         for(int Num6 = 0; Num6 < 3; Num6++){
                                                                 for(int Num7 = 0; Num7 < 3; Num7++){
									
                                                                    Letters[0] = phoneLetters[phoneDigits[0]][Num1];
                                                                    Letters[1] = phoneLetters[phoneDigits[1]][Num2];
                                                                    Letters[2] = phoneLetters[phoneDigits[2]][Num3];
                                                                    Letters[3] = phoneLetters[phoneDigits[3]][Num4];
                                                                    Letters[4] = phoneLetters[phoneDigits[4]][Num5];
                                                                    Letters[5] = phoneLetters[phoneDigits[5]][Num6];
                                                                    Letters[6] = phoneLetters[phoneDigits[6]][Num7];
									
                                                                    fprintf(wfPtr, "%c%c%c%c%c%c%c", Letters[0], Letters[1],
                                                                           Letters[2], Letters[3], Letters[4], Letters[5],
                                                                           Letters[6]);

                                                                    fputs("\n", wfPtr); 

                                                                } //end of 7th for loop
                                                        
							 } //end of 6th for loop

                                                } //end of 5th for loop
                                        
					 } //end of 4th for loop
                                
				 } //end of 3rd for loop
                        

			} //end of 2nd for loop
                
		}  //end of 1st for loop

                fclose(wfPtr);   // closes file
                printf("Done !\nCheck words.txt file !\n");
 
    
}  //end of main 


