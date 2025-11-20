#include <stdio.h>

int main(){
    float chieuDai, chieuRong;
    printf("Nhap vao chieu dai: ");
    scanf("%f", &chieuDai);
    printf("Nhap vao chieu rong: ");
    scanf("%f", &chieuRong);
    float chuVi = (chieuDai + chieuRong)*2;
    printf("HCN co chieu dai: %f, co chieu rong:%f, chu vi=%f", chieuDai, chieuRong, chuVi);
    float dienTich = chieuDai * chieuRong;
    printf("HCN co chieu dai: %f, co chieu rong:%f, dientich=%f", chieuDai, chieuRong, dienTich);
    return 0;
}
 

