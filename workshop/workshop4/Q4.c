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
        invalid = 1;
    int a[n];
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    int found = 0;

  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
   if(invalid==1){
        printf("Invalid input");
        return 0;
    }
    // duyet tung phan tu
    for(int i=0;i<n;i++)
    {
        if(a[i]%2==0)   // chi xet so chan
        {
            int printed = 0;
            for(int j=0;j<i;j++)
                if(a[j]==a[i])
                    printed = 1;
            if(printed==0)
            {
                int count = 0;
                // dem tan suat
                for(int j=0;j<n;j++)
                    if(a[j]==a[i])
                        count++;
                printf("%d-%d\n",count,a[i]);
                found = 1;
            }
        }
    }

    if(found==0)
        printf("Not found");
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE  
  printf("\n");
  system ("pause");
  return(0);
}
