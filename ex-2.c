#include <stdio.h>

int main()
{
    int n, m;
    int s, index;
    double soHatGao, tong;

    // 1. In cac so tu 0 den 10
    printf("In cac so tu 0 - 10:\n");

    for (int i = 0; i <= 10; i++)
    {
        printf("%d\t", i);
    }

    // 2. In cac so chan tu 1 den 10
    printf("\n\nIn cac so chan tu 1 - 10:\n");

    for (int i = 1; i <= 10; i++)
    {
        if (i % 2 == 0)
        {
            printf("%d\t", i);
        }
    }

    // 3. In cac so chia het cho 3 tu 1 den 100
    printf("\n\nIn cac so chia het cho 3 tu 1 - 100:\n");

    for (int i = 1; i <= 100; i++)
    {
        if (i % 3 == 0)
        {
            printf("%d\t", i);
        }
    }

    // 4. In cac so chia het cho ca n va m
    printf("\n\nNhap n va m: ");
    scanf("%d%d", &n, &m);

    if (n == 0 || m == 0)
    {
        printf("n va m phai khac 0.\n");
    }
    else
    {
        printf("Cac so chia het cho ca %d va %d:\n", n, m);

        for (int i = 1; i <= 100; i++)
        {
            if (i % n == 0 && i % m == 0)
            {
                printf("%d\t", i);
            }
        }
    }

    // 5. In bang cuu chuong cua n
    printf("\n\nNhap n de in bang cuu chuong: ");
    scanf("%d", &n);

    printf("\nBang cuu chuong %d:\n", n);

    for (int i = 1; i <= 10; i++)
    {
        printf("%2d x %2d = %3d\n", n, i, n * i);
    }

    // 6. Tong so hat gao qua cac o ban co
    printf("\nTong so hat gao qua 64 o ban co vua:\n");

    soHatGao = 1;
    tong = 0;

    for (int i = 1; i <= 64; i++)
    {
        tong += soHatGao;

        printf("O %2d: %.0lf hat, tong: %.0lf\n",
               i, soHatGao, tong);

        soHatGao *= 2;
    }

    printf("\nTong so hat gao: %.0lf\n", tong);

    // 7. Tinh S = 3 + 6 + 9 + ... sao cho S <= 100
    s = 0;
    index = 1;

    do
    {
        if (s + 3 * index > 100)
        {
            break;
        }

        s += 3 * index;

        printf("%d\t%d\n", index, s);

        index++;

    } while (s <= 100);

    printf("\nTong S = %d\n", s);

    return 0;
}
