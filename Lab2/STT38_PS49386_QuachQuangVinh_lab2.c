#include <stdio.h>
#define PI = 3.14;
int main(){
    //Bài 1 XÂY DỰNG CHƯƠNG TRÌNH +- 2 SỐ
    int x, y, tong, hieu;
    printf("\nNhap vao 2 so nguyen: ");
    scanf("%d %d", &x, &y);
    tong = x + y;
    hieu = x - y;
    printf("\nTong 2 so nguyen: %d", tong);
    printf("\nHieu 2 so nguyen: %d", hieu);
    //BÀI 2: XÂY DỰNG CHƯƠNG TRÌNH TÍNH CHU VI DIỆN TÍCH HCN
     float chieuDai, chieuRong;
    printf("\nNhap vao chieu dai: ");
    scanf("%f", &chieuDai);
    printf("\nNhap vao chieu rong: ");
    scanf("%f", &chieuRong);
    float chuVi = (chieuDai + chieuRong)*2;
    printf("\nHCN co chieu dai: %.2f, co chieu rong:%.2f, chu vi=%.2f", chieuDai, chieuRong, chuVi);
    float dienTich = chieuDai * chieuRong;
    printf("\nHCN co chieu dai: %.2f, co chieu rong:%.2f, dientich=%.2f", chieuDai, chieuRong, dienTich);
    //Bài 3: XÂY DỰNG CHƯƠNG TRÌNH TÍNH CHU VI DIỆN TÍCH HÌNH TRÒN
    double banKinh;
    printf("\nNhap vao ban kinh: ");
    scanf("%lf", &banKinh);
    double chuVihinhTron =(2 * 3.14 * banKinh );
    printf("\nHinh tron co ban kinh: %lf, chu vi=%lf", banKinh, chuVi);
    double dienTichhinhTron =(3.14 * banKinh * banKinh);
    printf("\nHinh tron co ban kinh: %lf, dien tich=%lf", banKinh, dienTich);
    //Bài 4 XÂY DỰNG CHƯƠNG TRÌNH TÍNH ĐIỂM TRUNG BÌNH
    float toan, ly, hoa;
    float dtb;
    printf("\nNhap diem Toan: ");
    scanf("%f", &toan);
    printf("\nNhap diem Ly: ");
    scanf("%f", &ly);
    printf("\nNhap diem Hoa: ");
    scanf("%f", &hoa);
    dtb = (toan * 3 + ly * 2 + hoa * 1)/6;
    printf("\nDiem trung binh la: %.2f\n", dtb);
    //BÀI 5 XÂY DỰNG CHƯƠNG TRÌNH TÍNH CHU VI DIỆN TÍCH TAM GIÁC VUÔNG
    float a, b, c, chuVitamGiac, dienTichtamGiac;
    printf("\nNhap canh a: ");
    scanf("%f", &a);
    printf("\nNhap canh b:");
    scanf("%f", &b);
    printf("\nNhap canh c: ");
    scanf("%f", &c);
    chuVi = a + b + c;
    dienTich = 0.5 * a * b;
    printf("\nChu vi tam giac vuong = %2.f\n", chuVi);
    printf("\nDien tich tam giac vuong = %2.f\n", dienTich);

    return 0;
}
