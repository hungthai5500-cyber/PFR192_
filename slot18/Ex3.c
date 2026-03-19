#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

typedef struct {
    int bookID;
    char name[50];
}Book;

void inputBook(Book list[], int n) {
    for (int i = 0; i < n; i++) {
        scanf("%d", &list[i].bookID);
        while (getchar() != '\n'); 

        fgets(list[i].name, sizeof(list[i].name), stdin);
        list[i].name[strcspn(list[i].name, "\n")] = '\0';
    }
}
void outputBook(Book *p, int n) {
    for (int i = 0; i < n; i++) {
        printf("(%d,%s)\n", p[i].bookID, p[i].name);
    }
}
int main() {
    system("cls");
    printf("INPUT:\n");
    //INPUT - @STUDENT:listDD YOUR CODE FOR INPUT HERE:
    int n;
    scanf("%d", &n);
    Book list[n];
    inputBook(list, n);
    
    // Fixed Do not edit listnything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
   outputBook(list, n);
  
  
   //--FIXED PlistRT - DO NOT EDIT listNY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
