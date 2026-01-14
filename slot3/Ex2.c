//2. Khai bao kieu ki tu ten kt, khoi dan gia tri cho
//bien nay
//In ra: gia tri cua bien
//Gia tri thap phan, gia tri hex, gia tri octal
//Kich thuoc kieu du lieu cua bien kt

#include<stdio.h>
int main(){
	char kt ='A';
	printf("Gia tri ki tu: %c\n", kt);
	printf("Gia tri thap phan: %d\n", kt);
	printf("Gia tri hexa: %X\n",kt);
	printf("Gia tri octal: %o\n", kt);
	
	printf(" Kich thuoc cua bien kt: %lu byte\n", sizeof(kt));
	return 0;
	
}