#include <stdio.h>
#include <math.h>
int main()
{
    int luachon, x, x1, y;
    do
    {
        printf("+--------------------------------------------------------------------------------+\n");
        printf("|                                                                                |\n");
        printf("+--------------------------------------------------------------------------------+\n");
        printf("|  0. Thoat chuong trinh                                                         |\n");
        printf("|  1. Chuc nang so  1: kiem tra so nguyen                                        |\n");
        printf("|  2. Chuc nang so  2: Tim uoc so chung va boi uoc so chung cua 2 so             |\n");
        printf("|  3. Chuc nang so  3: Chuong trinh tinh tien cho quan karaoke                   |\n");
        printf("|  4. Chuc nang so  4: Tinh tien dien                                            |\n");
        printf("|  5. Chuc nang so  5: Chuc nang doi tien                                        |\n");
        printf("|  6. Chuc nang so  6: Xay dung chuc nang tinh lai suat vay ngan hang vay tra gop|\n");
        printf("|  7. Chuc nang so  7: Xay dung chuong trinh vay tien mua xe                     |\n");
        printf("|  8. Chuc nang so  8: Sap xep thong tin sinh vien                               |\n");
        printf("|  9. Chuc nang so  9: Xay dung game FPOLY-LOTT (2/15)                           |\n");
        printf("| 10. Chuc nang so 10: Xay dung chuong trinh tinh toan phan so                   |\n");
        printf("+--------------------------------------------------------------------------------+\n");
        printf("Chon chuc nang cua ban (0-10):  \n");
        scanf("%d", &luachon);
        switch (luachon)
        {
        case 0:
        {
            printf("\nBan da thoat chuong trinh!\n");
            break;
        }
        case 1:
        {
            printf("\nban da chon chuc nang 1: kiem tra so nguyen\n");
            break;
        }
        case 2:
        {
            printf("\nban da chon chuc nang 2:  Tim uoc so chung va boi uoc so chung cua 2 so\n");
            break;
        }
        case 3:
        {
            printf("\nban da chon chuc nang 3:  Chuong trinh tinh tien cho quan karaoke\n");
            break;
        }
        case 4:
        {
            printf("\nban da chon chuc nang 4:  Tinh tien dien\n");
            break;
        }
        case 5:
        {
            printf("\nban da chon chuc nang 5: Chuc nang doi tien\n");
            break;
        }

        case 6:
        {
            printf("\nban da chon chuc nang 6: Xay dung chuc nang tinh lai suat vay ngan hang vay tra gop\n");
            break;
        }
        case 7:
        {
            printf("\nban da chon chuc nang 7: Xay dung chuong trinh vay tien mua xe\n");
            break;
        }
        case 8:
        {
            printf("\nban da chon chuc nang 8: Sap xep thong tin sinh vien\n");
            break;
        }
        case 9:
        {
            printf("\nban da chon chuc nang 9: Xay dung game FPOLY-LOTT (2/15)\n");
            break;
        }
        case 10:
        {
            printf("\nban da chon chuc nang 10: Xay dung chuong trinh tinh toan phan so\n");
            break;
        }

        default:
            printf("\nlua chon khong hop le\n");
            break;
        }

    } while (luachon != 0);
    return 0;
}
