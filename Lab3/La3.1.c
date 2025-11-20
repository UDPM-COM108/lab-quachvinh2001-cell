#include <stdio.h>
int main(){
    double dtb;
    printf("Nhap diem cua sinh vien: ");
    scanf("%lf", &dtb);
    if (dtb >=9){
        printf("Hoc luc xuat sac");
        } else if (dtb >= 8 && dtb < 9){
            printf("Hoc luc gioi");
        } else if (dtb >= 6.5 && dtb < 8){
            printf("Hoc luc kha");
        } else if (dtb >= 5 && dtb < 6.5){
            printf("Hoc luc trung binh");                       
        } else if (dtb >= 0 && dtb <5){
            printf("Hoc luc yeu");
        } else {
            printf("Hoc luc kem");
        }
        return 0;
        
    }

