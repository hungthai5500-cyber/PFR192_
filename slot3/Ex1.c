//1. Khai bao va khoi tao gia tri cho 2 so a,b nguyen
//Khai bao bien kq
//Hay in ket qua: =,-,*,/ cua a,b
//vd:
#include <stdio.h>
int main(){
	int a = 7;
	int b = 2;
	int kq;
	float kqf;
	kq = a + b;
	printf("%d + %d = %d\n", a,b,kq);
	kq = a - b;
	printf("%d - %d = %d\n", a,b,kq);
	kq = a * b;
	printf("%d * %d = %d\n", a,b,kq);
	kqf =(float)a / b;
	printf("%d / %d = %.2f\n", a,b,kqf);
	return 0;
	
}
