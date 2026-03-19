#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

typedef struct {
    int x;
    int y;
}Point;

void nhapDiem(Point list[], int n){
	 for(int i=0;i<n;i++)
   scanf("%d%d",&list[i].x,&list[i].y);
}
void inDiem(Point list[], int n){
	 for(int i=0;i<n;i++)
   printf("(%d,%d)\n",list[i].x,list[i].y);
}

int main() {
  system("cls");
  printf("INPUT:\n");
  
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
   int n;
   scanf("%d",&n);
   Point list[n];
   nhapDiem(list,n);
  
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
   inDiem(list,n);
   
 
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}

