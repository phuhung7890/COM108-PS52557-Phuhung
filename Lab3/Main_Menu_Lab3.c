#include <stdio.h>
void TinhHocSinhVien(){
    printf("1. Tinh hoc luc sinh vien\n");
}
int main(){
    int chon;
    do
    {
        printf("===== MENU CHUONG TRINH LAB 3 =====\n");
  printf  ("0. Thoat chuong trinh\n");
printf("1. Tinh hoc luc sinh vien\n");
printf("2. Giai phuong trinh bac hai\n");
printf("3. Tinh tien dien tieu thu\n");
printf("Nhap lua chon cua ban: ");
scanf("%d", &chon);
switch (chon)
  {
    case 0:
    printf("Ban Chon Thoat Chuong Trinh?\n");
    break;
    case 1:
    TinhHocLucSinhVien();
  }