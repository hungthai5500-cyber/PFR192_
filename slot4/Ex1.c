#include<stdio.h>
int main(){
	//1. Khai bao bien so nguyen va nhap gia tri
	int a,b;
         printf("Nhap vao a,b: ");
    int kq= scanf("%d%d", &a,&b);
    if(kq>0){
    	printf("kq ham scanf: %d\n", kq);
        printf("a = %d, b =%d\n", a,b);
    }
    else
        printf("Nhap sai roi!\n");
        printf("Bai tap nhap voi scanf");
	return 0;
}
