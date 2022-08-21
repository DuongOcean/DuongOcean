#include <stdio.h>

int main()
{
    int a;
    printf("Nhap vao so nguyen a: ");
    scanf("%d", &a);
    printf("(a/3)^4 = %.3f", (1.0*a/3)*(1.0*a/3)*(1.0*a/3)*(1.0*a/3));

    return 0;
}