#include <stdio.h>
#include <math.h>

//Bai 1 Tinh Hoc Luc Sinh Vien

void tinhhocluc (){
    double diem;
    printf("Nhap Diem Cua Sinh Vien (tu 0 -> 10):");
    if (scanf("%lf", &diem) != 1) {
        printf("Du Lieu Khong Hop Le, Vui Long Nhap Lai !\n");
        return;
    }
    if (diem < 0 || diem > 10) {
        printf("Diem So Nhap Vao Khong Hop Le, Vui Long Nhap Lai !\n");
    } else if (diem >= 9){
        printf("Hoc Luc Xuat Sac\n");
    } else if (diem >= 8){
        printf("Hoc Luc Gioi\n");
    } else if (diem >= 6.5){
        printf("Hoc Luc Kha\n");
    } else if (diem >= 5){
        printf("Hoc Luc Trung Binh\n");
    } else if (diem >= 3.5){
        printf("Hoc Luc Yeu\n");
    } else {
        printf("Hoc Luc Kem\n");
    }    
}

//bai 2 Giai Phuong Trinh Bac Hai

void giaiPTBacHai(){
    double a, b, c;
    printf("Nhap Du Lieu: a, b, c: ");
    if (scanf("%lf %lf %lf", &a, &b, &c) !=3) {
        printf("Du Lieu Nhap Khong Hop Le, Vui Long Nhap Lai !\n");
    }
    if (a == 0) {
        // Phuong Trinh Tro Thanh bx + c = 0
        if (b == 0) {
            if (c == 0) {
                printf("Phuong Trinh Co Vo So Nghiem\n");
            } else {
                printf("Phuong Trinh Vo Nghiem\n");
            }
        } else {
            double x = -c / b;
            printf("Phuong Trinh Co Nghiem Duy Nhat: x = %.2lf\n", x);
        }
    } else {
        // Phuong Trinh Bac Hai Tinh Delta
        double delta = b * b -4 * a * c;

        if (delta < 0) {
            printf("Phuong Trinh Vo Nghiem. \n");
        }else if (delta == 0) {
            double x = -b / (2 * a);
            printf("Phuong Trinh Co Nghiem Kep: x = %.2lf\n", x);
        } else {
            double x1 = (-b + sqrt(delta)) / (2 * a);
            double x2 = (-b - sqrt(delta)) / (2 * a);
            printf("Phuong Trinh Co 2 Nghiem Phan Biet: ");
            printf("x1 = %.2lf, x2 = %.2lf\n", x1 , x2);
        }
    }
}

//Bai 3 Tinh Tien Dien Theo Tung Bac

void TinhTienDien () {
    double Kwh;
    double Tien = 0;

    printf("Nhap Tien Dien Tieu Thu: ");
    if (scanf("%lf", &Kwh) !=1) {
        printf("Du Lieu Nhap Khong Hop Le, Vui Long Nhap Lai !\n");
        return;
}

if (Kwh < 0) {
    printf("Sai Du Lieu, So Kwh Phai Lon Hon 0 !\n");
    return;
}

// 50Kwh Dau Tien: 1,678 Dong/Kwh
if (Kwh <= 50){
    Tien = Kwh * 1678;
} else {
    Tien += 50 * 1687;
    // 50Kwh Tiep Theo: 1,734 Dong/Kwh
    if (Kwh <= 100){
        Tien += (Kwh - 50) * 1734;
    } else {
        Tien += 50 * 1734;
        // 100Kwh Tiep Theo: 2,014 Dong/Kwh
        if (Kwh <= 200){
            Tien += (Kwh - 100) * 2014;
        } else {
            Tien += 100 * 2014;
        // 100 Kwh Tiep Theo: 2,536 Dong/Kwh
        if (Kwh <= 300){
            Tien += (Kwh - 200) * 2536;
        } else {
            Tien += 100 * 2536;
        // 100 Kwh Tiep Theo: 2,834 Dong/Kwh
        if (Kwh <=400){
            Tien += (Kwh - 300) * 2834;
        } else {
            Tien += 100 * 2834;
        // Phan Vuot 400 Kwh: 2,927 Dong/Kwh;
        Tien += (Kwh - 400) * 2927;
        }
    }
}
    }
}
printf ("Tinh Tong Tien Dien Phai Tra: %.0f dong\n", Tien);
}

int main (){ 
    int LuaChon;
    do{

        printf("\n===== MENU CHUONG TRINH LAB 3 =====\n");
        printf("1. Tinh hoc luc sinh vien\n");
        printf("2. Giai phuong trinh bac hai\n");
        printf("3. Tinh tien dien tieu thu\n");
        printf("0. Thoat chuong trinh\n");
        printf("Nhap lua chon cua ban: ");

        if (scanf("%d", &LuaChon) !=1 ) {
            printf("Lua Chon Khong Hop Le, Vui Long Chon Lai !\n");
            return 1;
        }
        switch (LuaChon) {

            case 1:
            tinhhocluc();
            break;

            case 2:
            giaiPTBacHai();
            break;

            case 3:
            TinhTienDien();
            break;

            case 0:
            printf ("Da Thoat Menu Chuong Trinh, Hen Gap Lai !\n");
            break;

            default:
            printf("Lua Chon Khong Le, Vui Long Thu Lai ! \n");
    }
} while (LuaChon !=0);
return 0;
}