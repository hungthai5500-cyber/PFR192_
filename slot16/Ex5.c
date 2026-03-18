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
    int a, b;
    printf("Nhap 2 so nguyen: ");
    scanf("%d %d",&a, &b);
    
    hoanDoi(&a, &b);
    printf("Sau khi hoan doi: %d %d", a, b);

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
 	int a,b,c;
 	printf("Nhap 3 so nguyen: ");
 	scanf("%d %d %d", &a,&b,&c);
 	
 	hoanDoi(&a,&b,&c);
 	printf("HoanDoi: %d %d %d",a,b,c);
 	
 	return 0;
 }