#include<stdio.h>
int main(){
	int N,t;
	printf("Nhap so kWh da su dung: ");
    scanf("%d", &N);
    if (N<=100){
       t= N * 950;
  } else if (N<=150){
	t= N * 1250;
  }	else if (N<=200){
	t= N* 1350;
  }else {
    t = N*1550;
  }
  printf("So tien phai tra la: %dVND\n",t);
  return 0;
}