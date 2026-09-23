#include <stdio.h>
int main () {

    float toan, ly, hoa;
    float Diemtrungbinh;

    printf("Nhap diem toan: %.2f\n", &toan);
    scanf("%f", &toan);

    printf("Nhap diem ly: %.2f\n", &ly);
    scanf("%f", &ly);

    printf("Nhap diem hoa: %.2f\n", &hoa);
    scanf("%f", &hoa);

    Diemtrungbinh = (toan * 3 + ly * 2 + hoa) / 6;

    printf("Diem trung binh: %.2f\n", Diemtrungbinh);

    return 0;
}