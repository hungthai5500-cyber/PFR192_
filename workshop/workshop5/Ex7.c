#include <stdio.h>

int main() {
    char chuoi[1000] = "";
    
    printf("INPUT:\n");
    // Doc chuoi tong hop (gom cac chu so, chu cai, va ky tu dac biet). Chon fgets cho de dang doc khoang trang.
    fgets(chuoi, sizeof(chuoi), stdin);
    int so_chu_so = 0;
    int so_chu_cai = 0;
    int so_ky_tu_khac = 0;
    
    int i = 0;
    // Phat hien va phan loai cac nhom ky tu co mat
    while (chuoi[i] != '\0') {
        // Neu muc tieu la xuong dong do qua trinh quet cua fgets, chuyen thanh null hoac khong dem no vao danh sach
        if (chuoi[i] == '\n') {
            chuoi[i] = '\0';
            break;
        }
        
        // Nhom 1: Chu so tu (0 den 9)
        if (chuoi[i] >= '0' && chuoi[i] <= '9') {
            so_chu_so++;
        }
        // Nhom 2: Chu cai thuong va in hoa (a den z hoac tu A den Z)
        else if ((chuoi[i] >= 'a' && chuoi[i] <= 'z') || (chuoi[i] >= 'A' && chuoi[i] <= 'Z')) {
            so_chu_cai++;
        }
        // Nhom 3: Moi loai ky tu/khoang trang khac
        else {
            so_ky_tu_khac++;
        }
        i++;
    }
    printf("\nOUTPUT:\n");
    // In theo so thu tu duoc quy dinh boi de bai: chu so -> chu cai -> cac ky tu khac
    printf("%d\n", so_chu_so);
    printf("%d\n", so_chu_cai);
    printf("%d\n", so_ky_tu_khac);
    return 0;
}
