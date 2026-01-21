//a,b nguyen
//1.Nhap a,b:7,2
//Nhap phep toan / 
// ket qua 7/2=3.50
//2.Nhap a,b:7,0
//Nhap phep toan /
//Khong the chia het cho 0
#include <stdio.h>

int main() {
    int a, b;
    float Ketqua;
    char Pheptoan;

    printf("Nhap vao a, b: ");
    scanf("%d,%d", &a, &b);

    printf("Nhap phep toan: ");
    fflush(stdin);// xoa vung dem - Neu phep toan la /
	scanf("%c", &Pheptoan);

    if (b == 0) {
        printf("Khong the chia cho 0");
    } else {
        Ketqua = (float)a / b;
        printf("Ket qua: %d %c %d = %.2f", a, Pheptoan, b, Ketqua);
    }

    return 0;
}

