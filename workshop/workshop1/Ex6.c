#include <stdio.h>

int main () {
	float chuyenCan, giuaKy, cuoiKy;
	float tongKet;
	char diemChu;
	printf("Nhap diem chuyen can, giua ky, cuoi ky:");
	int kq = scanf("%f %f %f",&chuyenCan, &giuaKy, &cuoiKy);
	printf("kq nhap: %d",kq);
	if(kq !=3 || chuyenCan <0 || giuaKy<0 || chuyenCan <0 ||cuoiKy<0 ||chuyenCan >10 ||giuaKy>10 ||cuoiKy>10)
	{
		printf("\nNhap sai diem, diem >=0!");
		return 0;
	}
	tongKet = (chuyenCan * 0.1) + (giuaKy * 0.3) + (cuoiKy * 0.6);
	
	if(tongKet >= 8.5) {
		diemChu = 'A';
	} else if(tongKet >= 7) {
		diemChu = 'B';
	} else if(tongKet >= 5.5) {
		diemChu = 'C';
	} else if(tongKet >= 4) {
		diemChu = 'D';
	} else {
		diemChu = 'F';
	}
	
	printf("\nDiem so: %.1f \nDiem chu: %c\n", tongKet, diemChu);
	
	if (chuyenCan >= 4.0 && giuaKy >= 4.0 && cuoiKy >= 4.0 && diemChu != 'F') {
        printf("DU DIEU KIEN TOT NGHIEP\n");
    } else {
        printf("KHONG DU DIEU KIEN TOT NGHIEP\n");
    }
    
	return 0;
}