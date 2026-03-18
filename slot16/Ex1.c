//Dem so Nguyen am co trong chuoi

#include <stdio.h>  
#include <string.h> 
#include <ctype.h>  

// Hàm kiểm tra một ký tự có phải là nguyên âm hay không
int isVowel(char c)
{
    // chuyển ký tự về chữ thường để dễ kiểm tra
    c = tolower(c);
    // kiểm tra nếu ký tự là a, e, i, o, u
    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
    {
        return 1;   // đúng là nguyên âm
    }
    return 0;       // không phải nguyên âm
}
// Hàm đếm số nguyên âm trong chuỗi
int countVowel(char input[])
{
    int count = 0;              // biến lưu số nguyên âm
    int length = strlen(input);   // lấy độ dài chuỗi

    // duyệt từng ký tự trong chuỗi
    for (int i = 0; i < length; i++)
    {
        // gọi hàm isVowel để kiểm tra ký tự
        if (isVowel(input[i]))
        {
            count++;   // nếu là nguyên âm thì tăng biến đếm
        }
    }
    return count;   // trả về tổng số nguyên âm
}

// Hàm main - chương trình chính
int main()
{
    char input[100];   // khai báo chuỗi tối đa 100 ký tự
    // nhập chuỗi từ bàn phím
    printf("Nhap chuoi: ");
    fgets(input, sizeof(input), stdin);
    input[strcspn(input, "\n")] = '\0';
    // gọi hàm countVowel để đếm số nguyên âm
    int result = countVowel(input);
    // in kết quả
    printf("So nguyen am trong chuoi: %d\n", result);
    return 0;   // kết thúc chương trình
}