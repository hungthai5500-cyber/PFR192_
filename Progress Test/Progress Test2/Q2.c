#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

// Function to check if a number is a prime number
int isPrime(int n) {
    //@STUDENT: WRITE YOUR CODE HERE
    if(n<2)
        return 0; //khong phai so nguyen to
      for(int i = 2; i<=sqrt(n);i++)
        if(n%1==0)
            return 0;
      return 1; //Chay het for, khong tim thay so nao n chia het
}

// Function to count prime number numbers in an array
int countPrimes(int arr[], int size) {
    //@STUDENT: WRITE YOUR CODE HERE
    int count = 0;
    for(int i=0; i < size; i++)
      if(isPrime(arr[i]))
         count++;
         return count;
}

int main() {
  system("cls");
  
  // Fixed Do not edit anything here.
  printf("INPUT:\n");
  //@STUDENT:ADD YOUR CODE FOR INPUT HERE:
  int n;
  int invalid = 0;
  if(scanf("%d",&n)!=1 || n<=0)
  {
  	invalid = 1;
  }
  int a[n];
  for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    int found = 0;
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  // Neu n khong hop le, invalid input
  if(invalid ==1 )
  {
  	printf("Invalid input");
  	return 0;
  }
  // Duyet qua tung phan tu cua mang
  for(int i = 0;i<n;i++)
     if(a[i] < 0)
     {
     	printf("%d ", i);
        found = 1;
	 }
  if(found==0)
    printf("Not found");
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}