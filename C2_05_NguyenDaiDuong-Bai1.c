#include <stdio.h>

int main()
{
    int age;
    printf("Nhap so tuoi: ");
    scanf("%d", &age);
    age >= 18 ? printf("Da du tuoi di tu"):printf("Chua du tuoi di tu");

    return 0;
}