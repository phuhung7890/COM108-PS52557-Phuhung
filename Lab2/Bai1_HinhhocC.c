#include <stdio.h>
#define PI 3.14159
int main (){
    float Chieudai, Chieurong, Chieucao;
    float ChuviHCN, DientichHCN;
    float ChuviHT, DienTichHT;
    float Bankinh;

    printf ("Nhap Chieu dai: %\2f", &Chieudai);
    scanf ("%f", &Chieudai);
    printf ("Nhap Chieu rong: %\2f", &Chieurong);
    scanf ("%f", &Chieurong);
    printf ("Nhap Ban kinh: %\2f", &Bankinh);
    scanf ("%f", &Bankinh);

    ChuviHCN = (Chieudai + Chieurong) * 2;
    DientichHCN = Chieudai * Chieurong;

    ChuviHT = 2 * PI * Bankinh;
    DienTichHT = PI * Bankinh * Bankinh;

    printf ("Chu vi hinh chu nhat: %.2f\n", ChuviHCN);
    printf ("Dien tich hinh chu nhat: %.2f\n", DientichHCN);
    printf ("Chu vi hinh tron: %.2f\n", ChuviHT);
    printf ("Dien tich hinh tron: %.2f\n", DienTichHT);

    return 0;
}