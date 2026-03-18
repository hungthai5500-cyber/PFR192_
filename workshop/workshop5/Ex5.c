#include <stdio.h>

int main() {
    char chuoi[1000] = "";
    char ky_tu_tim, ky_tu_thay_the;
    
    printf("INPUT:\n");
    // Nhung chuoi trong vi du khong chua khoang trang nen ta dung scanf
    scanf("%999s", chuoi);
    
    // Doc 2 ky tu tiep theo (su dung dau cach o truoc %c de bo qua cac ky tu thua/khoang trang/xuong dong tu luot nhap truoc)
    scanf(" %c", &ky_tu_tim);
    scanf(" %c", &ky_tu_thay_the);

    int so_lan_thay = 0;
    int i = 0;
    // Lap qua tung ky tu de thay the
    while (chuoi[i] != '\0') {
        if (chuoi[i] == ky_tu_tim) {
            chuoi[i] = ky_tu_thay_the;
            so_lan_thay++;
        }
        i++;
    }
    
    printf("\n\nOUTPUT:\n");
    // In ra so luong thay the va chuoi moi
    printf("%d\n", so_lan_thay);
    printf("%s\n", chuoi);
    return 0;
}
