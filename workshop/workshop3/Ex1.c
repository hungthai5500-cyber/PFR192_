#include<stdio.h>
int main(){
	int i, sum = 0;
	for(i=1;i<=5;i++){
		if(i%2==1)
		{
			printf("The old number is: %d\n",i);
			sum += i;
		}
	}
	printf("Sum the old number is: %d",sum);
}