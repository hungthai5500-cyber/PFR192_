//
#include<stdio.h>
int main(){
     FILE *fp;
     fp = fopen("baitap1.txt","w");
     //Kiem tra thanh cong
     if(fp == NULL){
     	 printf("ERROR");
     	 return 0;
	 }
    int n;
    printf("Nhap vao so n: ");
    scanf("%d", &n);
    fprintf(fp,"Gia tri cua n :%d",n);
    
    //dong file
    fclose(fp);
    
    
    //Doc file
    fp = fopen("baitap1.txt","r");
    if(fp == NULL){
    	 printf("ERROR");
     	 return 0;
	}
	char s;
	do{
		s = getc(fp); // doc tung ki tu 1 tren file
		printf("%c",s);
	}
	while(s!=EOF);
	fclose(fp);
	return 0;
}