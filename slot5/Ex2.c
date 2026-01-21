//In ra gia tri max trong 3 so thuc a,b,c

#include<stdio.h>
int main(){
	float a, b, c, max;
	printf ("Nhap a, b, c: ");
    scanf("%f %f %f", &a, &b, &c);

    max = a;         
    if (b>max) {
        max = b;
    }
    if (c>max) {
        max = c;
    }
    printf("Gia tri lon nhat la: %.2f", max);
    return 0;
}
