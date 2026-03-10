#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int main() {
  system("cls");
  printf("INPUT:\n");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
   int n;
   int invalid = 0;
   if(scanf("%d",&n)!=1 || n<=0)
    {
       invalid = 1;
    }
    int a[100];
    for(int i=0;i<n;i++){
	
        scanf("%d",&a[i]);
    }
    int temp;
  // Fixed Do not edit anything here.
  printf("OUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  if(invalid==1){
        printf("Invalid input");
        return 0;
    }
  //sap xep giam dan
   for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(a[i] < a[j]){
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

  //in so chan
    for(int i=0;i<n;i++)
        if(a[i] % 2 == 0)
            printf("%d\n",a[i]);
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE  
  printf("\n");
  system ("pause");
  return(0);
}
