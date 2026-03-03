//Bài 1: Tính số ngày trong tháng
//Yêu cầu: Viết hàm get_days_in_month(int month, int year).
//Logic: Sử dụng switch...case để xác định số ngày.
//Với tháng 2, viết thêm một hàm con is_leap_year(int year) dùng if...else để kiểm tra năm nhuận.


#include <stdio.h>

//Ham kiem tra nam nhuan
int isLeapYear(int year)
{
	if( (year % 4 == 0 && year % 100 != 0) || year % 400 == 0) 
	{
		return 1;
	}
	return 0; 
}

//Ham kiem tra so ngay trong thang
int getDaysInMonth(int month, int year)
{
	int days ;
	switch(month)
	{
		case 1: case 3: case 5: case 7: case 8: case 10: case 12: 
		{
			days = 31;
			break;
		}
		case 4: case 6: case 9: case 11: 
		{
			days = 30;
			break;
		}
		case 2:
			{
										
				if(isLeapYear(year) == 1) 
				{
					days = 29; 
					break;
				}
				else
				{
					days = 28; 
					break;
				}
			}
		default:
		{
			printf("Nhap sai!");
			break;
		}
	}
	return days;
}

int main()
{
	int month, year;
	printf("Moi nhap thang va nam: ");
	while(scanf("%d %d", &month, &year) != 2 || month < 1 || month > 12 || year < 0)
	{
		printf("Nhap sai! Moi nhap lai: ");
		while(getchar() != '\n');
	}
	
	int days = getDaysInMonth(month, year);
	printf("Thang %d nam %d co %d ngay\n", month, year, days);
	
	if(month == 2)
	{
		if(isLeapYear(year) == 1)
		{
			printf("Nam %d la nam nhuan\n", year);
		}
		else
		{
			printf("Nam %d khong la nam nhuan\n", year);
		}
	}
	return 0;
}
