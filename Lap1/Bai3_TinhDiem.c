#include <stdio.h>
int main () {
    char mssv[10] = "PS52557";
    char fullname[30] = "Nguyen Ho Phu Hung";
    float toan = 5.0;
    float hoa = 4.9;
    float ly = 4.0;
    
    float dtb = ((toan * 2) + hoa + ly) / (float) 4;

    printf("MSSV: %s\n", mssv);
    printf("Ho Va Ten: %s\n", fullname);
    printf("Diem Trung Binh: %1.2f\n", dtb);

    return 0;
}