#include <stdio.h>
int main()
{
    int n,m;
    int s, index;
    double tong;
    // in cac so tu 0--10
    printf("\n\nin cac so tu 0 - 10:\n");
    for (int i = 0; i <= 10; i++)
    {
        printf("%d\t", i);
    }
    // in cac so chan tu 1 - 10
    printf("\n\nin cac so chan tu 1 - 10:\n ");
    for (int i = 1; i <= 10; i++)
    {
        if (i % 2 == 0)
        {
            printf("%d\t", i);
        }
    }
    // in cac so chia het cho 3 tu 1 - 100
    printf("\n\nin cac so chia het cho 3 tu 1 - 100:\n");
    for (int i = 1; i <= 100; i++)
    {
        if (i % 3 == 0)
        {
            printf("%d\t", i);
        }
    }
    // in boi cua n va m ( nhap tu ban phim) giua cac so tu 1 - 100
    printf("\n\nnhap n,m:");
    scanf("%d%d,&n,&m");
    if (n == 0, m == 0)
    {
        printf("n va m phai khac 0.\n");
    }
    
    printf("Cac so chia het cho ca %d va %d:\n", n, m);

    for (int i = 1; i <= 100; i++)
        
    {
        if (i % n == 0 && i % m == 0)
        {
            printf("%d\t", i);
        }
    }
    // nhap vao n, in bang cuu chuong cua m
    printf("nhap n:");
    scanf("%d", &n);
    for (int i = 1; i <= 10; i++)
    {
        n = 5;
        printf("\n\nnhap bang cuu chuong %d\n", n);
        printf("%2d x %2d = %3d\n", n, i, n * 1);
    }
    // tong so gao qua cac o ban co vua
    printf("\n\ntong so gao qua cac o ban co vua:\n");
    n = 1;
    tong = 0;
    for (int i = 1; i = 5; i++)
    {

        tong += n; // tong= tong + n
        printf("%d\t%.0lf\t%.0lf\n", i, n, tong);
        n = n * 2; // n *= 2
    }
    printf("\ntong so hat gao: %d\n", tong);

    // 1 + 2 + 3+.....
    // tinh s = 3 + 6 + 9 ... sao cho s <= 100
    s = 0;
    index = 1;
    do
    {
        s += 3 * index;
        printf("%d\t%d\n", index, s);
        index++;
    } while (s <= 100); if (s > 100)
    {
        s -= 3 * (--index);
    }
         printf("\nTong s = &d\n,s");

    return 0;
}