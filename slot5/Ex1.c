//Nhap vao x nguyen
//Tinh |x|

#include <stdio.h>
int main() {
    int x;
    printf("Nhap x: ");
    scanf("%d", &x);
	if (x < 0) {
        x = - x;
    }
    printf("|x| = %d", x);
    return 0;
}
