//: X?p h?ng h?c thu?t tin ch? Nh?p vao ?i?m chuyen c?n (10%), ?i?m gi?a k? (30%) va ?i?m cu?i k? (60%).
//1.Tinh ?i?m t?ng k?t.
//2.Chuy?n t? thang ?i?m 10 sang thang ?i?m ch? (A, B, C, D, F).
//3.S? d?ng if ?? ki?m tra ?i?u ki?n t?t nghi?p: Khong co ?i?m thanh ph?n nao d??i 4.0 va ?i?m t?ng k?t ch? khac 'F'.

#include <stdio.h>

int main() {
    float cc, gk, ck;
    float tongKet;
    char diemChu;

    // Nhap diem
    printf("Nhap diem chuyen can (10%): ");
    scanf("%f", &cc);
    printf("Nhap diem giua ky (30%): ");
    scanf("%f", &gk);
    printf("Nhap diem cuoi ky (60%): ");
    scanf("%f", &ck);
    // Tinh diem tong ket
    tongKet = cc * 0.1 + gk * 0.3 + ck * 0.6;
    // Chuyen sang diem chu
    if (tongKet >= 8.5)
        diemChu = 'A';
    else if (tongKet >= 7.0)
        diemChu = 'B';
    else if (tongKet >= 5.5)
        diemChu = 'C';
    else if (tongKet >= 4.0)
        diemChu = 'D';
    else
        diemChu = 'F';
    // In ket qua
    printf("\nDiem tong ket: %.2f\n", tongKet);
    printf("Diem chu: %c\n", diemChu);
    // Kiem tra tot nghiep
    if (cc >= 4.0 && gk >= 4.0 && ck >= 4.0 && diemChu != 'F') {
        printf("Ket qua: DU DIEU KIEN TOT NGHIEP\n");
    } else {
        printf("Ket qua: KHONG DU DIEU KIEN TOT NGHIEP\n");
    }

    return 0;
}
