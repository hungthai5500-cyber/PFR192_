#include <stdio.h>

int nhapSo() {
    int x;
    char c;
    while (1) {
        if (scanf("%d", &x) != 1) {
            printf("Nhap sai! Nhap lai: ");
            while ((c = getchar()) != '\n');
        }
        else if (x < 0) {
            printf("Nhap sai! Nhap lai: ");
        }
        else return x;
    }
}

void inMang(int a[], int n) {
    if (n == 0) {
        printf(" Mang hien dang rong.\n");
        return;
    }
    printf(" Danh sach mang: ");
    for (int i = 0; i < n; i++) printf("[%d] ", a[i]);
    printf("\n");
}

int tim(int a[], int n, int x) {
    for (int i = 0; i < n; i++)
        if (a[i] == x) return i;
    return -1;
}

void xoaDau(int a[], int *n, int x) {
    int pos = tim(a, *n, x);
    if (pos == -1) {
        printf(" Khong tim thay gia tri %d trong mang.\n", x);
        return;
    }
    for (int i = pos; i < *n - 1; i++) a[i] = a[i + 1];
    (*n)--;
    printf(" Da xoa phan tu %d dau tien.\n", x);
}


void xoaTatCa(int a[], int *n, int x) {
    int dem = 0;
    for (int i = 0; i < *n; i++) {
        if (a[i] == x) {
            for (int j = i; j < *n - 1; j++) {
                a[j] = a[j + 1];
            }
            (*n)--;
            i--;
            dem++;
        }
    }
    if (dem == 0) printf(" Khong tim thay %d de xoa.\n", x);
    else printf(" Da xoa tat ca %d phan tu %d.\n", dem, x);
}

void inTang(int a[], int n) {
    if (n == 0) { printf("Mang rong\n"); return; }
    int b[100];
    for (int i = 0; i < n; i++) b[i] = a[i];
    for (int i = 0; i < n - 1; i++)
        for (int j = i + 1; j < n; j++)
            if (b[i] > b[j]) {
                int t = b[i]; b[i] = b[j]; b[j] = t;
            }
    printf(" Ket qua tang dan: ");
    for (int i = 0; i < n; i++) printf("%d ", b[i]);
    printf("\n");
}

void inGiam(int a[], int n) {
    if (n == 0) { printf("Mang rong\n"); return; }
    int b[100];
    for (int i = 0; i < n; i++) b[i] = a[i];
    for (int i = 0; i < n - 1; i++)
        for (int j = i + 1; j < n; j++)
            if (b[i] < b[j]) {
                int t = b[i]; b[i] = b[j]; b[j] = t;
            }
    printf(" Ket qua giam dan: ");
    for (int i = 0; i < n; i++) printf("%d ", b[i]);
    printf("\n");
}

int main() {
    int a[100], n = 0, chon, x;

    do {
        printf("\n Menu \n");
        printf("  1. Them gia tri              \n");
        printf("  2. Tim vi tri                \n");
        printf("  3. Xoa phan tu dau tien      \n");
        printf("  4. Xoa tat ca phan tu trung  \n");
        printf("  5. In danh sach mang         \n");
        printf("  6. Sap xep tang dan          \n");
        printf("  7. Sap xep giam dan          \n");
        printf("  0. Thoat                     \n");
        printf("\n");
        printf(" Nhap lua chon: ");

        chon = nhapSo();
        switch (chon) {
        case 1:
            if (n >= 100) printf(" Mang da day.\n");
            else {
                printf("Nhap gia tri: ");
                a[n++] = nhapSo();
                printf(" Da them thanh cong.\n");
            }
            break;
        case 2:
            if (n == 0) printf("Mang rong.\n");
            else {
                printf("Nhap gia tri tim: ");
                x = nhapSo();
                int pos = tim(a, n, x);
                if (pos == -1) printf(" Khong tim thay %d.\n", x);
                else printf(" Gia tri %d o vi tri: %d\n", x, pos);
            }
            break;
        case 3:
            if (n == 0) printf("Mang rong.\n");
            else {
                printf("Nhap gia tri xoa: ");
                x = nhapSo();
                xoaDau(a, &n, x);
            }
            break;
        case 4:
            if (n == 0) printf("Mang rong.\n");
            else {
                printf("Nhap gia tri xoa het: ");
                x = nhapSo();
                xoaTatCa(a, &n, x);
            }
            break;
        case 5:
            inMang(a, n);
            break;
        case 6:
            inTang(a, n);
            break;
        case 7:
            inGiam(a, n);
            break;
        case 0:
            printf("Tam biet!\n");
            break;
        default:
            printf(" Lua chon khong hop le.\n");
        }
    } while (chon != 0);

    return 0;
}