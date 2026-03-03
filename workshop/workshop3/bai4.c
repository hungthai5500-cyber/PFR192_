//Bài 4: Menu điều khiển máy tính bỏ túi
//Yêu cầu: Viết hàm show_menu() và hàm processor().
//Logic: Sử dụng vòng lặp do...while để giữ chương trình chạy liên tục. Sử dụng switch...case để chọn phép tính (+, -, *, /). Dùng break để thoát chương trình khi chọn 0.

#include <stdio.h>

void show_menu() {
    printf("\n Menu dieu khien may tinh bo tui \n");
    printf("1. Phep Cong \n");
    printf("2. Phep Tru \n");
    printf("3. Phep Nhan \n");
    printf("4. Phep Chia \n");
    printf("0. Thoat\n");
    printf("Chon phep tinh: ");
}

void processor() {
    int luaChon;
    float a, b, kq;

    do {
        show_menu();

    if (scanf("%d", &luaChon) != 1) {
        printf("Nhap sai! Vui long nhap so.\n");
        while (getchar() != '\n');
        continue;
    }

        if (luaChon >= 1 && luaChon <= 4) {
            printf("Nhap a va b: ");
            
            if (scanf("%f %f", &a, &b) != 2) {
        printf("Nhap sai! Nhap lai\n");
        while (getchar() != '\n');
        continue;
        }
}
        switch (luaChon) {
            case 1:
                kq = a + b;
                break;
            case 2:
                kq = a - b;
                break;
            case 3:
                kq = a * b;
                break;
            case 4:
                if (b == 0) {
                    printf("Khong the chia cho 0!\n");
                    continue;  
                }
                kq = a / b;
                break;
            case 0:
                printf("Thoat chuong trinh.\n");
                break;
            default:
                printf("Lua chon khong hop le!\n");
                continue;
        }
        if (luaChon != 0) {
            printf("Ket qua: %.2f\n", kq);
		}
    } while (luaChon != 0);
}

int main() {
    processor();
    return 0;
}