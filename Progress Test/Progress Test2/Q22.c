#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

// Function to check if a number is a prime number
int isPrime(int n) {
    //@STUDENT: WRITE YOUR CODE HERE
    if(n < 2)
    {
    	return 0;
	}
	for(int i = 2; i * i <= n; i++)
	{
		if(n % i == 0)
		{
			return 0;
		}
	}
    return 1;
}

// Function to count prime number numbers in an array
void outputPrimes(int arr[], int size) {
    //@STUDENT: WRITE YOUR CODE HERE
    int flag = 0;
	for(int i = 0; i < size; i++)
	{
		if(isPrime(arr[i]))
		{
			printf("%d ", arr[i]);
			flag = 1;
		}
	}
	if(flag == 0)
	{
		printf("Not found");
	}
}

int main() {
  system("cls");
  
  // Fixed Do not edit anything here.
  printf("INPUT:\n");
  //@STUDENT:ADD YOUR CODE FOR INPUT HERE:
	int size;
	int count = 0;
	int invalid;
	if(scanf("%d", &size) != 1 ||  size <= 0)
	{
		invalid = 1;
	}
	int arr[size];
	for(int i = 0; i < size; i++)
	{
		scanf("%d", &arr[i]);
	}
  
  
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
	if(invalid == 1)
	{
		printf("Invalid input");
		return 0;
	}
	outputPrimes(arr, size);
	
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}