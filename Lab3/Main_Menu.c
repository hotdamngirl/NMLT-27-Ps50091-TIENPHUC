#include <stdio.h>
#include <math.h>

int main() {
    int luaChon;

    do {
      printf("+---------------------------------------------------+\n");
      printf("|              MENU CHƯƠNG TRÌNH LAB 3              |\n");
      printf("+---------------------------------------------------+\n");
      printf("|  1. Chức năng tính học lực sinh viên              |\n");
      printf("|  2. Chức năng giải phương trình bậc hai           |\n");
      printf("|  3. Chức năng tính tiền điện tiêu thụ hàng tháng  |\n");
      printf("|  4. Thoát chương trình                            |\n");
      printf("+---------------------------------------------------+\n");
      printf(">> Chọn chức năng của bạn (1-4): \n");
        scanf("%d", &luaChon);

        switch (luaChon) {

            case 1: {
                float diem;

                printf("\n--- CHUC NANG 1: TINH HOC LUC ---\n");
                printf("Nhap diem sinh vien: ");
                scanf("%f", &diem);

                if (diem < 0.0 || diem > 10.0) {
                    printf("Diem so nhap vao khong hop le!\n");
                }
                else if (diem >= 9.0) {
                    printf("Hoc luc: Xuat sac\n");
                }
                else if (diem >= 8.0) {
                    printf("Hoc luc: Gioi\n");
                }
                else if (diem >= 6.5) {
                    printf("Hoc luc: Kha\n");
                }
                else if (diem >= 5.0) {
                    printf("Hoc luc: Trung binh\n");
                }
                else if (diem >= 3.5) {
                    printf("Hoc luc: Yeu\n");
                }
                else {
                    printf("Hoc luc: Kem\n");
                }

                break;
            }

            case 2: {
                double a, b, c;
                double delta, x, x1, x2;

                printf("\n--- CHUC NANG 2: GIAI PHUONG TRINH BAC HAI ---\n");
                printf("Nhap he so a, b, c: ");
                scanf("%lf %lf %lf", &a, &b, &c);

                if (a == 0) {
                    if (b == 0) {
                        if (c == 0) {
                            printf("Phuong trinh co vo so nghiem.\n");
                        }
                        else {
                            printf("Phuong trinh vo nghiem.\n");
                        }
                    }
                    else {
                        x = -c / b;
                        printf("Phuong trinh co nghiem duy nhat:\n");
                        printf("x = %.2lf\n", x);
                    }
                }
                else {
                    delta = b * b - 4 * a * c;

                    printf("Delta = %.2lf\n", delta);

                    if (delta < 0) {
                        printf("Phuong trinh vo nghiem.\n");
                    }
                    else if (delta == 0) {
                        x = -b / (2 * a);

                        printf("Phuong trinh co nghiem kep:\n");
                        printf("x1 = x2 = %.2lf\n", x);
                    }
                    else {
                        x1 = (-b + sqrt(delta)) / (2 * a);
                        x2 = (-b - sqrt(delta)) / (2 * a);

                        printf("Phuong trinh co hai nghiem phan biet:\n");
                        printf("x1 = %.2lf\n", x1);
                        printf("x2 = %.2lf\n", x2);
                    }
                }

                break;
            }

            case 3: {
                double soKwh;
                double tienDien;

                printf("\n--- CHUC NANG 3: TINH TIEN DIEN ---\n");
                printf("Nhap so kWh dien tieu thu: ");
                scanf("%lf", &soKwh);

                if (soKwh < 0) {
                    printf("So kWh nhap vao khong hop le!\n");
                }
                else if (soKwh <= 50) {
                    tienDien = soKwh * 1678;
                }
                else if (soKwh <= 100) {
                    tienDien = 50 * 1678
                             + (soKwh - 50) * 1734;
                }
                else if (soKwh <= 200) {
                    tienDien = 50 * 1678
                             + 50 * 1734
                             + (soKwh - 100) * 2014;
                }
                else if (soKwh <= 300) {
                    tienDien = 50 * 1678
                             + 50 * 1734
                             + 100 * 2014
                             + (soKwh - 200) * 2536;
                }
                else if (soKwh <= 400) {
                    tienDien = 50 * 1678
                             + 50 * 1734
                             + 100 * 2014
                             + 100 * 2536
                             + (soKwh - 300) * 2834;
                }
                else {
                    tienDien = 50 * 1678
                             + 50 * 1734
                             + 100 * 2014
                             + 100 * 2536
                             + 100 * 2834
                             + (soKwh - 400) * 2927;
                }

                if (soKwh >= 0) {
                    printf("So dien tieu thu: %.2lf kWh\n", soKwh);
                    printf("Tong tien dien: %.0lf dong\n", tienDien);
                }

                break;
            }

            case 4:
                printf("\nDa thoat chuong trinh!\n");
                break;

            default:
                printf("\nLua chon khong hop le! Vui long chon lai.\n");
        }

    } while (luaChon != 4);

    return 0;
}