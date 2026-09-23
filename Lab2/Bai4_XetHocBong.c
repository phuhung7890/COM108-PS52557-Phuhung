#include <stdio.h>
int main () {
    float DiemTrungBinh;
    int HanhKiem;
    int DieuKienDiem;
    int DieuKienHanhKiem;
    int KetQua;

    printf("Nhap diem trung binh (Yeu cau tren 8.0): ");
    scanf ("%f", &DiemTrungBinh);

    printf("Nhap hanh kiem (1: Tot, 0: Khong Tot): ");
    scanf("%d", &HanhKiem);
    
    DieuKienDiem = DiemTrungBinh >= 8;
    DieuKienHanhKiem = HanhKiem == 1;

    KetQua = DieuKienHanhKiem && DieuKienDiem;

    printf("Dieu Kien Diem Trung Binh >=8: %d\n", DieuKienDiem);

    printf("Dieu Kien Hanh Kiem Tot: %d\n", DieuKienHanhKiem);

    printf("Ket Qua Xet Hoc Bong (1: Dat, 0: Khong Dat): %d\n", KetQua);

    return 0;
    
}