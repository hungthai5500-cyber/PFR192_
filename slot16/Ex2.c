//Dem so Nguyen co trong chuoi
//Chuyen thanh con tro cho khai bao mang

#include <stdio.h>    
#include <string.h>   
#include <ctype.h>    

// Hàm kiểm tra một ký tự có phải là nguyên âm hay không
int isVowel(char c)
{
    // chuyển ký tự về chữ thường
    c = tolower(c);

    // kiểm tra nguyên âm
    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
    {
        return 1; // là nguyên âm
    }
    return 0; // không phải nguyên âm
}


// Hàm đếm số nguyên âm trong chuỗi
int countVowel(char *input)
{
    int count = 0;                // biến đếm nguyên âm
    int length = strlen(input);   // lấy độ dài chuỗi

    // duyệt từng ký tự trong chuỗi
    for (int i = 0; i < length; i++)
    {
        // *(input + i) là ký tự tại vị trí i
        if (isVowel(*(input + i)))
            count++; // tăng biến đếm
    }
    return count; // trả về tổng số nguyên âm
}


int main()
{
    char input[100];  // khai báo chuỗi tên input
    printf("Nhap 1 chuoi: ");

    // nhập chuỗi từ bàn phím
    fgets(input, sizeof(input), stdin);
    input[strcspn(input, "\n")] = '\0';

    // gọi hàm countVowel
    int result = countVowel(input);

    // in kết quả
    printf("So nguyen am trong chuoi: %d\n", result);

    return 0;
}