//Nhap 1 mang in ra mang dao nguoc: bai mang tinh + bai con tro
//bai con tro

#include <stdio.h>

int main()
{
    int a[100], n;
    int *p;

    printf("Nhap so phan tu: ");
    scanf("%d", &n);

    for(p = a; p < a + n; p++)
    {
        scanf("%d", p);
    }

    printf("Mang dao nguoc: ");

    for(p = a + n - 1; p >= a; p--)
    {
        printf("%d ", *p);
    }

    return 0;
}