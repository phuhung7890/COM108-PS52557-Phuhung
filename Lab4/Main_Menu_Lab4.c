#include <stdio.h>

// Chuc nang 1: Tinh trung binh cac so chia het cho 2
void tinhTrungBinhSoChan() {
    int min, max;
    int tong = 0;
    int bienDem = 0;

    printf("Nhap min va max: ");
    if (scanf("%d %d", &min, &max) != 2) {
        printf("Du lieu nhap khong hop le, Vui Long Nhap Lai ! \n");
        return;
    }

    if (min > max) {
        printf("Khong co so nao chia het cho 2 trong khoang da nhap!\n");
        return;
    }

    int i = min;

    while (i <= max) {
        if (i % 2 == 0) {
            tong += i;
            bienDem++;
        }

        i++;
    }

    if (bienDem == 0) {
        printf("Khong co so nao chia het cho 2 trong khoang da nhap!\n");
    } else {
        float trungBinh = (float)tong / bienDem;

        printf("Tong cac so chia het cho 2: %d\n", tong);
        printf("So luong cac so chia het cho 2: %d\n", bienDem);
        printf("Trung binh cong: %.2f\n", trungBinh);
    }
}

// Chuc nang 2: Kiem tra so nguyen to
void kiemTraSoNguyenTo() {
    int x;
    int laSoNguyenTo = 1;

    printf("Nhap so nguyen x: ");
    if (scanf("%d", &x) != 1) {
        printf("Du lieu nhap khong hop le, Vui Long Nhap Lai ! \n");
        return;
    }

    if (x < 2) {
        laSoNguyenTo = 0;
    } else {
        for (int i = 2; i < x; i++) {
            if (x % i == 0) {
                laSoNguyenTo = 0;
                break;
            }
        }
    }

    if (laSoNguyenTo) {
        printf("%d la so nguyen to.\n", x);
    } else {
        printf("%d khong phai la so nguyen to.\n", x);
    }
}

// Chuc nang 3: Kiem tra so chinh phuong
void kiemTraSoChinhPhuong() {
    int x;
    int laSoChinhPhuong = 0;

    printf("Nhap so nguyen x: ");
    if (scanf("%d", &x) != 1) {
        printf("Du lieu nhap khong hop le, Vui Long Nhap Lai ! \n");
        return;
    }

    // So am khong phai so chinh phuong.
    // 0 la so chinh phuong vi 0 = 0 * 0.
    if (x == 0) {
        laSoChinhPhuong = 1;
    } else if (x > 0) {
        for (int i = 1; i <= x / i; i++) {
            if (i * i == x) {
                laSoChinhPhuong = 1;
                break;
            }
        }
    }

    if (laSoChinhPhuong) {
        printf("%d la so chinh phuong.\n", x);
    } else {
        printf("%d khong phai la so chinh phuong.\n", x);
    }
}

int main() {
    int luaChon;

    do {
        printf("\n+---------------------------------------------------+\n");
        printf("|              MENU CHUONG TRINH LAB 4              |\n");
        printf("+---------------------------------------------------+\n");
        printf("| 1. Tinh trung binh tong cac so chia het cho 2     |\n");
        printf("| 2. Kiem tra So nguyen to                          |\n");
        printf("| 3. Kiem tra So chinh phuong                       |\n");
        printf("| 4. Thoat chuong trinh                             |\n");
        printf("+---------------------------------------------------+\n");
        printf(">> Xin moi chon chuc nang (1-4): ");

        if (scanf("%d", &luaChon) != 1) {
            printf("Lua chon khong hop le, Vui Long Nhap Lai ! \n");
            return 1;
        }

        switch (luaChon) {
            case 1:
                tinhTrungBinhSoChan();
                break;

            case 2:
                kiemTraSoNguyenTo();
                break;

            case 3:
                kiemTraSoChinhPhuong();
                break;

            case 4:
                printf("Da thoat chuong trinh.\n");
                break;

            default:
                printf("Lua chon khong hop le. Vui long chon tu 1 den 4.\n");
        }
    } while (luaChon != 4);

    return 0;
}