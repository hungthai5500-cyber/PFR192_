#include <stdio.h>

int main() {
    int n;
    int dem = 1;
    int tong = 0;

    do {
        printf("Nhap so nguyen thu %d: ", dem);    // kiểm tra nhập đúng số nguyên và >= 0
       while (scanf("%d", &n) != 1 || n < 0) {
            printf("Nhap lai so nguyen thu %d: ", dem);
            fflush(stdin);
        }

        if (n != 0) {
            tong += n;
            printf("Tong = %d\n", tong);
            dem++;
        }

    } while (n != 0);

    printf("Tong cac so nguyen duong da nhap la: %d\n", tong);
    return 0;
}