//Nhap du 5 so 
//Tinh sqrt cua tung so

#include<stdio.h>
#include<math.h>
int main (){
	int count =0;
	float n;
    while(count<5){
    printf("Nhap vao n:");
    while(scanf("%f", &n)!=1 || n<=0 || n>1000){
       printf("\nNhap lai n:");
       fflush(stdin); //C1: xoa vung dem tranh nhap chu
       //while(getchar()!='\n'); //C2.
   }
	printf("Can bac 2: %.2f\n", sqrt(n));
	count++;
   }
  printf("\nDa xong, xuat sac");
}