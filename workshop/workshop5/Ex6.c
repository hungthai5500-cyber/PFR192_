#include <stdio.h>
#include <string.h>

int main() {
    int n;
    char danh_sach[10][100];
    printf("INPUT:\n");
    // Doc so luong hoc sinh
    scanf("%d", &n);
    // Doc tung ten hoc sinh vao mang
    for (int i = 0; i < n; i++) {
        scanf("%99s", danh_sach[i]);
    }
    // Su dung thuat toan sap xep noi bot (Bubble Sort) de sap xep mang mang ten
    char tam[100]; // bien tam de hoan doi gia tri
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            // Su dung strcmp de so sanh vi tri tu dien cua hai ten
            if (strcmp(danh_sach[i], danh_sach[j]) > 0) {
                // Su dung strcpy de doi cho 2 chuoi ky tu
                strcpy(tam, danh_sach[i]);
                strcpy(danh_sach[i], danh_sach[j]);
                strcpy(danh_sach[j], tam);
            }
        }
    }
    
    printf("\nOUTPUT:\n");
    // In danh sach ten sinh vien chi sau khi da sap xep (Hien thi giong nhu vi du cua de bai)
    for (int i = 0; i < n; i++) {
        printf("%s\n", danh_sach[i]);
    }
    return 0;
}
