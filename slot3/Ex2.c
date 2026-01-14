//2. Khai bao kieu ki tu ten kt, khoi dan gia tri cho
//bien nay
//In ra: gia tri cua bien
//Gia tri thap phan, gia tri hex, gia tri octal
//Kich thuoc kieu du lieu cua bien kt

#include<stdio.h>
int main(){
	char kt ='a';
	printf("%-15s |%-15s |%-15s |%-15s |%-15s |%-15s\n", "Ten Bien","GiaTri","Dec", "Hexa","Octal","Kich thuoc");
    printf("%-15s |%-15c |%-15d |%-15X |%-15o |%-15lu\n","kt", kt, kt, kt, kt, sizeof(kt));
	return 0;
	
}