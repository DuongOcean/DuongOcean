#include <stdio.h>

int main()
{
    int n, m, tien;
    printf("Nhap vao 2 so n, m: ");
    scanf("%d%d", &n, &m);
    tien = n*m;
    if (n%2 == 0)
    {
        if (n > 4)
        {
            tien = tien-(tien*15/100);
        }
    }
    else
    {
        if (n > 5)
        {
            tien = tien-(tien*20/100);
        }
    }
    printf("So tien Hung phai tra la: %d", tien);

    return 0;
}