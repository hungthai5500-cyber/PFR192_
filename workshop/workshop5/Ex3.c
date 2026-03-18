#include <stdio.h>

int main() {
    char chuoi[1000] = "";
    
    printf("INPUT:\n");
    // Doc chuoi khong chua khoang trang
    scanf("%999s", chuoi);
    int do_dai = 0;
    // Tim chiem do dai cua chuoi thu cong
    while (chuoi[do_dai] != '\0') {
        do_dai++;
    }
    int doi_xung = 1;
    // Kiem tra xem chuoi co doc xuoi va doc nguoc giong nhau khong
    for (int i = 0; i < do_dai / 2; i++) {
        if (chuoi[i] != chuoi[do_dai - 1 - i]) {
            doi_xung = 0;
            break;
        }
    }
    printf("\nOUTPUT:\n");
    // In ra ket qua
    if (doi_xung) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }
    return 0;
}
