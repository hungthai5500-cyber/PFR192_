//Bài 6: Game đoán số (Sử dụng break/continue)
//Yêu cầu: Viết hàm play_game().
//Logic: Máy sinh một số ngẫu nhiên. Người dùng có tối đa 7 lần đoán.
// Nếu đoán đúng: dùng break để thắng cuộc.
// Nếu nhập số ngoài phạm vi (ví dụ âm): dùng continue để yêu cầu nhập lại mà không mất lượt.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void play_game() {
    int secret, guess;
    int attempt = 1;
    int check;

    srand(time(NULL));
    secret = rand() % 100 + 1;   // số từ 1 đến 100

    printf("GAME DOAN SO \n");
    printf("Ban co toi da 7 lan doan.\n");

    while (attempt <= 7) {

        printf("\nLan %d - Nhap so (1-100): ", attempt);

        check = scanf("%d", &guess);

        // Nhập sai (abc)
        if (check != 1) {
            printf("Vui long nhap so nguyen!\n");
            while (getchar() != '\n');   // xóa bộ nhớ đệm
            continue;   // không mất lượt
        }

        // Nhập ngoài phạm vi (ví dụ số âm hoặc >100)
        if (guess < 1 || guess > 100) {
            printf("So ngoai pham vi! Nhap lai.\n");
            continue;   // không mất lượt
        }

        // Đoán đúng
        if (guess == secret) {
            printf("Chuc mung! Ban da doan dung!\n");
            break;   // thắng → thoát vòng lặp
        }

        // Gợi ý
        if (guess < secret)
            printf("So can tim LON HON!\n");
        else
            printf("So can tim NHO HON!\n");

        attempt++;  // chỉ tăng lượt khi nhập hợp lệ
    }

    if (attempt > 7)
        printf("\nBan da het luot! So dung la: %d\n", secret);
}

int main() {
    play_game();
    return 0;
}