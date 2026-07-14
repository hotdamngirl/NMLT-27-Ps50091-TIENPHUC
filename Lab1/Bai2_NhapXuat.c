#include <stdio.h>
#include <stdlib.h>
int main()
{char mssv[20];
    char hoten[30];
    int namsinh;
    int sotuoi;
    float diemTB;
    printf("Nhap thong tin sinh vien:\n");
    printf("Nhap MA SO SINH VIEN: ");
    scanf("%s", mssv);
    getchar();
    printf("Nhap HO TEN: ");
    fgets(hoten, sizeof(hoten), stdin);
    printf("Nhap NAM SINH: ");
    scanf("%d", &namsinh);
    printf("Nhap DIEM TRUNG BINH: ");
    scanf("%f", &diemTB);
    sotuoi = 2026 - namsinh;
    printf("\nThong tin sinh vien vua nhap:\n");
    printf("MA SO SINH VIEN: %s\n", mssv);
    printf("HO TEN: %s", hoten);
    printf("NAM SINH: %d\n", namsinh);
    printf("SO TUOI: %d\n", sotuoi);
    printf("DIEM TRUNG BINH: %.2f\n", diemTB);
    system("pause");
    return 0; //

}