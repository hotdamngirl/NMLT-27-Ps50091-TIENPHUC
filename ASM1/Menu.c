#include<stdio.h>
#include<math.h>
int main ()
{
    int luachon,x,x1,y;
 do
 {
    printf("+-------------------------------------------------------------------------------+\n");
    printf("|                                                                               |\n");
    printf("+-------------------------------------------------------------------------------+\n");
    printf("|  0. Thoat chuong trinh                                                         |\n");
    printf("|  1. Chuc nang so  1: kiem tra so nguyen                                       |\n");
    printf("|  2. Chuc nang so  2: Tim uoc so chung va boi uoc so chung cua 2 so            |\n");
    printf("|  3. Chuc nang so  3: Chuong trinh tinh tien cho quan karaoke                  |\n");
    printf("|  4. Chuc nang so  4: Tinh tien dien                                           |\n");
    printf("|  5. Chuc nang so  5: Chuc nang doi tien                                       |\n");
    printf("|  6. Chuc nang so  6: Xay dung chuc nang tinh lai suat vay ngan hang vay tra gop\n");
    printf("|  7. Chuc nang so  7: Xay dung chuong trinh vay tien mua xe                    |\n");
    printf("|  8. Chuc nang so  8: Sap xep thong tin sinh vien                              |\n");
    printf("|  9. Chuc nang so  9: Xay dung game FPOLY-LOTT (2/15)                          |\n");
    printf("| 10. Chuc nang so 10: Xay dung chuong trinh tinh toan phan so                  |\n");
    printf("+-------------------------------------------------------------------------------+\n");
    printf("Chon chuc nang cua ban (0-10):  \n");
    scantf("%d", &luachon);
    switch (luachon)
    {
    case 0:
        {
            printf("\nBan da thoat chuong trinh!\n");
            break;
        }
        case 1:
        {

            printf("\nnhap so x");
            scantf("%d", &x);
            printf("\n%d la so nguyen",x);
            
            
        }
        case 2:
        {
            printf("\nnhap so nguyen x");
            scantf("%d", &x1);
            printf("\nnhap so nguyen y");
            scantf("%d", &y);
        }
        
        break;
    
    default:
        break;
    }

 } while (condition);
 
    
}
