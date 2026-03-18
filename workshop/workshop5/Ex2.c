#include <stdio.h>
#include <string.h>

void reverseString(char *str) {
    int length = strlen(str);
    for (int i = 0, j = length - 1; i < j; i++, j--) {
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
}

int main() {
	printf ("INPUT\n");
    char str[100];
    fgets(str, sizeof(str), stdin);

    // Xóa ký tự newline nếu có
    if (str[strlen(str) - 1] == '\n') {
        str[strlen(str) - 1] = '\0';
    }
	printf("\nOUTPUT\n");
    reverseString(str);
    
    printf("%s\n", str);
    return 0;
}