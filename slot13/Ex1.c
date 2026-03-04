#include<stdio.h>

// Truyền tham trị (không làm thay đổi x bên ngoài)
//x = 10
//doubleX(x) → x trong hàm = 20
//nhưng x ngoài main vẫn = 10

void doubleX(int x){
	x = x + x;	
}

// Truyền tham chiếu bằng con trỏ (làm thay đổi x bên ngoài)

void doubleX2(int *p){ //*p chính là giá trị của x --> x = 10
	*p = *p + *p;     //--> doubleX2(&x) --> *p = 20
}

// Nhập mảng
void inputArr(int a[], int n){  //a[] là giá trị ,n là số phần tử 
	for(int i = 0; i < n; i++){ // i là vị trí 
		printf("Nhap a[%d] = ", i);
		scanf("%d", &a[i]);
	}
}

// Xuất mảng
void outputArr(int a[], int n){ 
	printf("Mang vua nhap la: ");
	for(int i = 0; i < n; i++){
		printf("%d ", a[i]);
	}
	printf("\n");
}

// Kiểm tra số nguyên tố
int isPrime(int n){
	if(n < 2) 
		return 0;
	for(int i = 2; i <= n/2; i++){
		if(n % i == 0)
			return 0;
	}
	return 1;
}

// Đếm số nguyên tố trong mảng
int countPrimes(int a[], int n){
	int count = 0;
	for(int i = 0; i < n; i++){
		if(isPrime(a[i])){
			count++;
		}
	}
	return count;
}

int main(){
	int x = 10;

	doubleX(x);   // không làm thay đổi x
	printf("Sau doubleX(x), x = %d\n", x);

	doubleX2(&x); // làm thay đổi x
	printf("Sau doubleX2(&x), x = %d\n", x); // Làm việc với mảng
	int n;
	printf("\nNhap so luong phan tu: ");
	scanf("%d", &n);

	int a[n];

	inputArr(a, n);
	outputArr(a, n);

	int totalPrime = countPrimes(a, n);
	printf("So luong so nguyen to trong mang: %d\n", totalPrime);

	return 0;
}