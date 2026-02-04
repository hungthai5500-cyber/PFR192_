//Nhap so nguyen n, su dung while va toan tu % de in ra so dao nguoc cua no.

#include <stdio.h>
int main() {
    int n, soDao = 0;
    printf("Nhap so nguyen n: ");
    scanf("%d", &n);
    while (n != 0) {
        soDao = soDao * 10 + (n % 10);
        n = n / 10;
    }
    printf("So dao nguoc la: %d", soDao);
    return 0;
}
