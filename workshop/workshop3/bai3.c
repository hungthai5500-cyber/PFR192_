//Bài 3:Tính lương công nhân theo giờ làm
//Yêu cầu: Viết hàm calculate_salary(float hours, float rate).
//Logic:  Giờ tiêu chuẩn: 40h/tuần.
//Nếu làm quá 40h, những giờ thừa (overtime) được tính hệ số 1.5.
//Sử dụng if để kiểm tra điều kiện overtime.

#include <stdio.h>
  float calculatesalary(float hours, float rate){
  	float salary;
  	 if (hours <= 40) {
        salary = hours * rate;
    } else {
        salary = 40 * rate + (hours - 40) * rate * 1.5;
    }

    return salary;
}

int main() {
    float hours, rate, salary;
    printf("Nhap gio lam:");
	 while(scanf("%f", &hours) != 1 || hours <= 0) {
	 	printf("Nhap sai! Moi nhap lai: ");
		while(getchar() != '\n');
	}
		printf("Nhap luong theo gio:");
		 while(scanf("%f", &rate) != 1 || rate <= 0) {
	 	printf("Nhap sai! Moi nhap lai: ");
		while(getchar() != '\n');
    }
 salary = calculatesalary(hours, rate);
 printf("Luong theo gio la: %.2f", salary);
 return 0;
}
 

