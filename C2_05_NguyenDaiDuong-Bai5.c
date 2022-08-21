#include <stdio.h>

int main()
{
    int thang, nam;
    printf("Nhap thang, nam: ");
    scanf("%d%d", &thang, &nam);

    switch (thang)
    {
        case 1:
        {
            printf("Thang %d cua nam %d co %d ngay", thang, nam, 31);
            break;
        }
        case 2:
        {
            if (nam%100 == 0)
            {
                printf("Thang %d cua nam %d co %d ngay", thang, nam, nam%400 == 0 ? 29: 28);
            }
            else
            {
                printf("Thang %d cua nam %d co %d ngay", thang, nam, nam%4 == 0 ? 29: 28);
            }
            break;
        }
        case 3:
        {
            printf("Thang %d cua nam %d co %d ngay", thang, nam, 31);
            break;
        }
        case 4:
        {
            printf("Thang %d cua nam %d co %d ngay", thang, nam, 30);
            break;
        }
        case 5:
        {
            printf("Thang %d cua nam %d co %d ngay", thang, nam, 31);
            break;
        }
        case 6:
        {
            printf("Thang %d cua nam %d co %d ngay", thang, nam, 30);
            break;
        }
        case 7:
        {
            printf("Thang %d cua nam %d co %d ngay", thang, nam, 31);
            break;
        }
        case 8:
        {
            printf("Thang %d cua nam %d co %d ngay", thang, nam, 31);
            break;
        }
        case 9:
        {
            printf("Thang %d cua nam %d co %d ngay", thang, nam, 30);
            break;
        }
        case 10:
        {
            printf("Thang %d cua nam %d co %d ngay", thang, nam, 31);
            break;
        }
        case 11:
        {
            printf("Thang %d cua nam %d co %d ngay", thang, nam, 30);
            break;
        }
        case 12:
        {
            printf("Thang %d cua nam %d co %d ngay", thang, nam, 31);
            break;
        }
    }

    return 0;
}