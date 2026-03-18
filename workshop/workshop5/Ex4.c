#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>


int main() {
  system("cls");
	printf("\nINPUT:\n");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
	char str[100];
	gets(str);

  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: ADD YOUR CODE FOR OUTPUT HERE:
 	int count = 0; 
	for(int i = 0; str[i]; i++){
		char c = tolower(str[i]);
		if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
		{
			count++;
		}
	}
	printf("%d", count);
  
//printf("%d", countVowel(str));  

  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
