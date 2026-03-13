//Bai5: 1 ham hoan doi 2 so nguyen
// 1 Hoan doi 3 so nguyen: gia tri so 1 <> gia tri so 3, so 2 <> so 1, so 3 <> so 2

#include <stdio.h>
/*void hoanDoi(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int x, y;

    printf("Nhap x, y: ");
    scanf("%d %d",&x, &y);

    hoanDoi(&x, &y);

    printf("Sau khi hoan doi: %d %d", x, y);

    return 0;
}*/

 void hoanDoi(int *a, int *b, int *c){
 	int temp = *a;
    *a = *c;
    *c = temp;

    temp = *b;
    *b = *a;
    *a = temp;

    temp = *c;
    *c = *b;
    *b = temp;
 }
 
 int main(){
 	int x,y,z;
 	printf("Nhap x, y, z: ");
 	scanf("%d %d %d", &x,&y,&z);
 	
 	hoanDoi(&x,&y,&z);
 	printf("HoanDoi: %d %d %d",x,y,z);
 	return 0;
 }