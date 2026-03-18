#include <stdio.h>

int main() {
	system("cls");
	 // Fixed Do not edit anything here.
  printf("\nINPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
    char chuoi[1000] = "";
    
    // Doc chuoi bao gom ca khoang trang
    fgets(chuoi, sizeof(chuoi), stdin);
    int dem = 0;
    // Lap thu cong qua tung phan tu
    while (chuoi[dem] != '\0') {
        // Xu ly ky tu xuong dong do fgets tao ra
        if (chuoi[dem] == '\n') {
            chuoi[dem] = '\0';
            break;
        }
        dem++;
    }
     // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:

    // In ra tong so ky tu
    printf("%d\n", dem);
    return 0;
}
