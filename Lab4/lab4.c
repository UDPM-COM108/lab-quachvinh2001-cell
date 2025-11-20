#include <stdio.h>

int main() {
    int luaChon;
    do {
        printf("\n===== MENU =====\n");
        printf("1. Tinh trung binh tong cac so chia het cho 2 (min -> max)\n");
        printf("2. Kiem tra so nguyen to\n");
        printf("3. Kiem tra so chinh phuong\n");
        printf("4. Thoat\n");
        printf("Nhap lua chon: ");
        scanf("%d", &luaChon);

        if (luaChon == 1) {
            int min, max;
            printf("Nhap min: ");
            scanf("%d", &min);
            printf("Nhap max: ");
            scanf("%d", &max);

            int i = min, bienDem = 0;
            float tong = 0;

            while (i <= max) {
                if (i % 2 == 0) {
                    tong += i;
                    bienDem++;
                }
                i++;
            }

            if (bienDem == 0) {
                printf("Khong co so chia het cho 2 trong khoang!\n");
            } else {
                float trungBinh = tong / bienDem;
                printf("Trung binh = %.2f\n", trungBinh);
            }
        }

        else if (luaChon == 2) {
            int x, count = 0;
            printf("Nhap x: ");
            scanf("%d", &x);

            if (x < 2) {
                printf("%d khong phai so nguyen to!\n", x);
            } else {
                for (int i = 2; i < x; i++) {
                    if (x % i == 0) {
                        count++;
                    }
                }
                if (count == 0) {
                    printf("%d la so nguyen to!\n", x);
                } else {
                    printf("%d khong phai so nguyen to!\n", x);
                }
            }
        }

        else if (luaChon == 3) {
            int x, kt = 0;
            printf("Nhap x: ");
            scanf("%d", &x);

            for (int i = 1; i <= x; i++) {
                if (i * i == x) {
                    kt = 1;
                    break;
                }
            }

            if (kt == 1) {
                printf("%d la so chinh phuong!\n", x);
            } else {
                printf("%d khong phai so chinh phuong!\n", x);
            }
        }

        else if (luaChon == 4) {
            printf("Thoat chuong trinh...\n");
        }

        else {
            printf("Lua chon khong hop le!\n");
        }

    } while (luaChon != 4);

    return 0;
}
