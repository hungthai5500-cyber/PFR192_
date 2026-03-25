#include <stdio.h>
#include <string.h>

typedef struct {
    int id;
    char name[100];
    float grade;
} SinhVien;

int main(){
    FILE *fp;
    SinhVien sv;

    
    printf("Nhap id: ");
    scanf("%d", &sv.id);
    getchar(); 

    printf("Nhap ten: ");
    fgets(sv.name, sizeof(sv.name), stdin);
    sv.name[strcspn(sv.name, "\n")] = '\0';

    printf("Nhap diem: ");
    scanf("%f", &sv.grade);

   
    fp = fopen("baitap3.txt", "w");
    if(fp == NULL){
        printf("ERROR!");
        return 0;
    }

    fprintf(fp, "%d, %s, %f", sv.id, sv.name, sv.grade);
    fclose(fp);
    
    printf("\nOUTPUT:\n");
    printf("%d, %s, %.f", sv.id, sv.name, sv.grade);
  
    return 0;
}