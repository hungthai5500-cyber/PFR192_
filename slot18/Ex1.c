//struct point, x y (int), gian giá trị cứng cho 1 điếm, in ra
//Nhap gia tri tu ban phim, in ra

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>


struct Point {
    int x;
    int y;
};

int main() {
  system("cls");
  printf("INPUT:\n");
  
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  struct Point p1; 
  p1.x =5;
  p1.y =10;
  scanf("%d %d",&p1.x,&p1.y);
  
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  printf("(%d,%d)\n", p1.x,p1.y);
  
 
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
