#include <stdio.h>
#include<math.h>
int main()
{
    int chon;
    do
    {
        printf("+---------------------------------------------------+\n");
        printf("|              MENU CHƯƠNG TRÌNH LAB 3              |\n");
        printf("+---------------------------------------------------+\n");
        printf("|  1. chuc nang tinh hoc luc sinh vien              |\n");
        printf("|  2. chuc nang giai phuong trinh bac hai           |\n");
        printf("|  3. chuc nang tinh tien dien tieu thu hang thang  |\n");
        printf("|  4. thoat chuong trinh                            |\n");
        printf("+---------------------------------------------------+\n");
        printf(">>chon chuc nang cua ban (1-4): \n");
        scanf("%d", &chon);

        switch (chon)

        {
        case 1:
        {
            float diem;
            printf("Ban da chon chuc nang: 1. Tinh hoc luc sinh vien.\n");
            printf("nhap diem sinh vien:\n");
            scanf("%f", &diem);
            if (diem < 0.0 || diem > 10.0)
            {
                printf("diem so nhap khong hop le\n");
            }
            else if (diem > 9.0)
            {
                printf("hoc luc xuat xac\n");
            }
            else if (diem > 8.0)
            {
                printf("hoc luc gioi\n ");
            }
            else if (diem > 6.5)
            {
                printf("hoc luc kha\n");
            }
            else if (diem > 5.0)
            {
                printf("hoc luc trung binh\n");
            }
            else if (diem > 3.5)
            {
                printf("hoc luc yeu\n");
            }
            else
            {
                printf("hoc luc kem\n");
            }

            break;
        }
        case 2:
            printf("Ban da chon chuc nang: 2. Giai phuong trinh bac hai.\n");
            printf("nhap he so a\n");
            scanf("%f", &a);
            printf("nhap he so b\n");
            scanf("%f", &b);
            printf("nhap he so c\n");
            scanf("%f", &c);
            if(a==0){
                if(b==0){
                    if(c==0){
                        printf("phuong trinh co vo so nghiem\n");
                    }else{
                        printf("phuong trinh vo nghiem\n");
                    }
                }else{
                    x = -c/b;
                    printf("phuong trinh co nghiem duy nhat: x = &.2f\n",x);
                }
            }
            else{
                delta = b*b-4*a*c;
                if(delta < 0){
                    printf("phuong trinh vo nghiem\n");
                }
                else if(delta == 0){
                    x = -b/(2*a);
                    printf("phuong trinh co nghiem kep: x1 = x2 = %.2f\n,x ");
                }
                else{
                     x1 = (-b + sqrt(delta)) / (2 * a);
            x2 = (-b - sqrt(delta)) / (2 * a);
            printf("phuong trinh co hai nghiem rieng biet:\n");
            printf("x1 = %.2f\n",x1);
            printf("x2 = %.2f\n",x2);

                }
            }
    
      
            
            break;
        
        case 3:
            printf("Ban da chon chuc nang: 3. Tinh tien dien.\n");
            break;
        case 4:
            printf("Ban da chon chuc nang: 4. thoat chuong trinh.\n");
            break;
        default:
            printf("Ban phai chon chuc nang 1 - 4\n");
            break;
        }
    } while (chon != 0); // 0 != 0

    return 0;
}