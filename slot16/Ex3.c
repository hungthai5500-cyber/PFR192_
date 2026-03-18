//Nhap vao 1 chuoi in ra chuoi dao nguoc

#include <stdio.h>
#include <string.h>

// Hàm in chuỗi đảo ngược
void reverseString(char *input)
{
    int length = strlen(input); // lấy độ dài chuỗi

    printf("Chuoi dao nguoc: ");

    // duyệt chuỗi từ cuối về đầu
    for(int i = length - 1; i >= 0; i--)
    {
        printf("%c", *(input + i)); // in ký tự bằng con trỏ
    }
}

int main()
{
    char input[100]; // khai báo chuỗi

    printf("Nhap chuoi: ");

    // nhập chuỗi
    fgets(input, sizeof(input), stdin);
    input[strcspn(input, "\n")] = '\0';

    // gọi hàm đảo chuỗi
    reverseString(input);

    return 0;
}