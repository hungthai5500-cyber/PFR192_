//Nhap n nguyen  1<= n <=10
//In so tu 1 den n

#include<stdio.h>
int main(){
	int n;
	int count = 1;
    printf("Nhap n:");
    while(scanf("%d", &n)!=1 || n<1 || n>10){
    printf("\nNhap lai n:");
    fflush(stdin); //C1: xoa vung dem tranh nhap chu
    //while(getchar()!='\n'); //C2.
}
    while (count <=n) {
      printf("%d \n", count);
      count++;
  }
  count =1;
  
    while(count<=10){
      printf("%d x %d = %d\n", n, count, n * count);
      count++;
    }
    return 0;
}