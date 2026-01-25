//Xếp hạng học thuật tín chỉ Nhập vào điểm chuyên cần (10%), điểm giữa kỳ (30%) và điểm cuối kỳ (60%).
//1.	Tính điểm tổng kết.
//2.	Chuyển từ thang điểm 10 sang thang điểm chữ (A, B, C, D, F).
//3.	Sử dụng if để kiểm tra điều kiện tốt nghiệp: Không có điểm thành phần nào dưới 4.0 và điểm tổng kết chữ khác 'F'.

#include <stdio.h>
int main()
{
	float score1, score2, score3;
	char diemChu;
	float sumScore;
	printf("Nhap diem chuyen can: ");
	int kq = scanf(" %f",&score1);
	if (score1<0 || score1>10 || kq != 1)
	{
		printf("Nhap sai!");
		return 0;
	}
	else
	{
		printf("Nhap diem giua ky: ");
		kq = scanf(" %f",&score2);
		if (score2<0 || score2>10 || kq != 1)
		{
			printf("Nhap sai!");
			return 0;
		}
		else
		{
			printf("Nhap diem cuoi ky: ");
			kq = scanf(" %f",&score3);
			if (score3<0 || score3>10 || kq != 1)
			{
				printf("Nhap sai!");
				return 0;
			}
			else
			{
				sumScore = score1 * 0.1 + score2 * 0.3 + score3 * 0.6;
				if (sumScore >= 8.5)
				{
					diemChu = 'A';
				}
				else
				{
					if (sumScore >= 7)
					{
						diemChu = 'B';
					}
					else
					{
						if (sumScore >= 5.5)
						{
							diemChu = 'C';
						}
						else
						{
							if (sumScore >= 4)
							{
								diemChu = 'D';
							}
							else
							{
								diemChu = 'F';
							}
						}
					}
				}
				printf ("Diem tong ket: %.2f \n",sumScore);
				printf ("Diem chu: %c \n", diemChu);
				if (score1 < 4 || score2 < 4 || score3 < 4 || diemChu == 'F')
				{
					printf ("Khong du dieu kien tot nghiep \n");
				}
				else
				{
					printf ("Khong du dieu kien tot nghiep \n");
				}
			}
			return 0;
		}
	}
}