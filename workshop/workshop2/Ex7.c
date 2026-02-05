//So chinh phuong: Nhap mot so, kiem tra xem no co phai so chinh phuong khong ma khong dung ham sqrt()

#include <stdio.h>
int main()
{
	int n;
	int a=0;
	printf("Nhap n: ");
	while(scanf("%d",&n)!=1 || n<0)
	{
		printf("Nhap lai n: ");
		while(getchar()!='\n');
	}
	while(a*a<=n)
	{
		if(a*a==n)
		{
			printf("%d la so chinh phuong",n);
			return 0;
		}
		a++;
	}
	printf("%d khong la so chinh phuong",n);
	return 0;
}
