#include <stdio.h>
#include <math.h>

int main() {
    int chon;
    float a, b, c, dtb, delta;
    int kWh;
    long tien;

    do {
        printf("\n===== MENU =====\n");
        printf("1. Xep loai hoc luc\n");
        printf("2. Giai PT bac 1\n");
        printf("3. Giai PT bac 2\n");
        printf("4. Tinh tien dien\n");
        printf("0. Thoat\nChon: ");
        scanf("%d", &chon);

        switch (chon) {

        case 1:
            printf("Nhap DTB: "); 
            scanf("%f", &dtb);
            if (dtb >= 9) printf("Xuat sac\n");
            else if (dtb >= 8) printf("Gioi\n");
            else if (dtb >= 6.5) printf("Kha\n");
            else if (dtb >= 5) printf("TB\n");
            else printf("Yeu\n");
            break;

        case 2:
            printf("Nhap a b: "); 
            scanf("%f %f", &a, &b);
            if (a == 0) 
                printf(b == 0 ? "VSN\n" : "Vo nghiem\n");
            else 
                printf("x = %.2f\n", -b/a);
            break;

        case 3:
            printf("Nhap a b c: "); 
            scanf("%f %f %f", &a, &b, &c);
            if (a == 0) {
                if (b == 0) printf(c == 0 ? "VSN\n" : "Vo nghiem\n");
                else printf("x = %.2f\n", -c/b);
            } else {
                delta = b*b - 4*a*c;
                if (delta < 0) printf("Vo nghiem\n");
                else if (delta == 0) printf("Nghiem kep x = %.2f\n", -b/(2*a));
                else {
                    printf("x1 = %.2f\n", (-b+sqrt(delta))/(2*a));
                    printf("x2 = %.2f\n", (-b-sqrt(delta))/(2*a));
                }
            }
            break;

        case 4:   // TÍNH TIỀN ĐIỆN
            printf("Nhap so kWh: ");
            scanf("%d", &kWh);

            if (kWh <= 50)
                tien = kWh * 1678;
            else if (kWh <= 100)
                tien = 50*1678 + (kWh-50)*1734;
            else if (kWh <= 200)
                tien = 50*1678 + 50*1734 + (kWh-100)*2014;
            else if (kWh <= 300)
                tien = 50*1678 + 50*1734 + 100*2014 + (kWh-200)*2536;
            else if (kWh <= 400)
                tien = 50*1678 + 50*1734 + 100*2014 + 100*2536 + (kWh-300)*2834;
            else
                tien = 50*1678 + 50*1734 + 100*2014 + 100*2536 + 100*2834 + (kWh-400)*2927;

            printf("Tien dien: %ld dong\n", tien);
            break;
        }

    } while (chon != 0);

    return 0;
}

    
        
            
        
        

              
    
        

