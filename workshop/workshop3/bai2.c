//Bài 2: Tính tiền cước Taxi (Tính km thực tế)
//Yêu cầu: Viết hàm calculate_taxi_fare(float distance).
//Logic: 1 km đầu: 15.000đ.
//Từ km thứ 2 đến km thứ 30: 12.000đ/km.
//Từ km thứ 31 trở đi: 10.000đ/km.
//Sử dụng if...else if...else để phân loại khoảng cách.


#include <stdio.h>

int calculateTaxiFare(float distance)
{
	int price;
	if(distance <= 1)
	{
		price = 15000;
	}
	else if(distance <= 30)
	{
		price = 15000 + 12000 * (distance - 1);
	}
	else
	{
		price = 15000 + 12000 * 29 + 10000 * (distance - 30);
	}
	return price;
}

int main()
{
	float distance;
	int check, price;
	do
	{
		printf("Nhap so km: ");
		check = scanf("%f", &distance);
		while(getchar() != '\n');
		if(check != 1)
		{
			printf("Nhap sai roi! Nhap lai di!\n");
		}
	}while(distance <= 0);
	price = calculateTaxiFare(distance);
	printf("Tien cuoc taxi la: %d", price);
	return 0;
}
