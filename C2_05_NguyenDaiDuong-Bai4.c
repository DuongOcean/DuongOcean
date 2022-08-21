#include <stdio.h>

int main()
{
    int n, m, k;
    printf("Nhap lan luot so ban, so goi keo và so keo moi goi: ");
    scanf("%d%d%d", &n, &m, &k);
    printf(m*k%n == 0 ? "no": "yes");

    return 0;
}