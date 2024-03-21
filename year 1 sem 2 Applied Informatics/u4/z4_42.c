#include <stdio.h>

int main()
{
    int d, mm, y;

    printf("Enter date: ");
    scanf("%d", &d);
    printf("Enter month: ");
    scanf("%d", &mm);
    printf("Enter year: ");
    scanf("%d", &y);

    if (y < 0 && (mm < 0 || mm > 12) && (d < 0 || d > 31))
    {
        printf("invalid year.\n");
        printf("invalid month.\n");
        printf("invalid date.\n");
    }
    else
    {
        if (y > 0 && y % 4 == 0)
            switch (mm)
            {
            case 1:
                if (d > 0 && d < 32)
                {
                    printf("Valid date.");
                }
                else
                {
                    printf("Invalid date.");
                }
                break;
            case 2:
                if (d > 0 && d < 30)
                {
                    printf("Valid date.");
                }
                else
                {
                    printf("Invalid date.");
                }
                break;
            case 3:
                if (d > 0 && d < 32)
                {
                    printf("Valid date.");
                }
                else
                {
                    printf("Invalid date.");
                }
                break;
            case 4:
                if (d > 0 && d < 31)
                {
                    printf("Valid date.");
                }
                else
                {
                    printf("Invalid date.");
                }
                break;
            case 5:
                if (d > 0 && d < 32)
                {
                    printf("Valid date.");
                }
                else
                {
                    printf("Invalid date.");
                }
                break;
            case 6:
                if (d > 0 && d < 31)
                {
                    printf("Valid date.");
                }
                else
                {
                    printf("Invalid date.");
                }
                break;
            case 7:
                if (d > 0 && d < 32)
                {
                    printf("Valid date.");
                }
                else
                {
                    printf("Invalid date.");
                }
                break;
            case 8:
                if (d > 0 && d < 32)
                {
                    printf("Valid date.");
                }
                else
                {
                    printf("Invalid date.");
                }
                break;
            case 9:
                if (d > 0 && d < 31)
                {
                    printf("Valid date.");
                }
                else
                {
                    printf("Invalid date.");
                }
                break;
            case 10:
                if (d > 0 && d < 32)
                {
                    printf("Valid date.");
                }
                else
                {
                    printf("Invalid date.");
                }
                break;
            case 11:
                if (d > 0 && d < 31)
                {
                    printf("Valid date.");
                }
                else
                {
                    printf("Invalid date.");
                }
                break;
            case 12:
                if (d > 0 && d < 32)
                {
                    printf("Valid date.");
                }
                else
                {
                    printf("Invalid date.");
                }
                break;
            default:
                printf("Invalid month");
                break;
            }
        else if (y > 0 && y % 4 != 0)
        {
            switch (mm)
            {
            case 1:
                if (d > 0 && d < 32)
                {
                    printf("Valid date.");
                }
                else
                {
                    printf("Invalid date.");
                }
                break;
            case 2:
                if (d > 0 && d < 29)
                {
                    printf("Valid date.");
                }
                else
                {
                    printf("Invalid date.");
                }
                break;
            case 3:
                if (d > 0 && d < 32)
                {
                    printf("Valid date.");
                }
                else
                {
                    printf("Invalid date.");
                }
                break;
            case 4:
                if (d > 0 && d < 31)
                {
                    printf("Valid date.");
                }
                else
                {
                    printf("Invalid date.");
                }
                break;
            case 5:
                if (d > 0 && d < 32)
                {
                    printf("Valid date.");
                }
                else
                {
                    printf("Invalid date.");
                }
                break;
            case 6:
                if (d > 0 && d < 31)
                {
                    printf("Valid date.");
                }
                else
                {
                    printf("Invalid date.");
                }
                break;
            case 7:
                if (d > 0 && d < 32)
                {
                    printf("Valid date.");
                }
                else
                {
                    printf("Invalid date.");
                }
                break;
            case 8:
                if (d > 0 && d < 32)
                {
                    printf("Valid date.");
                }
                else
                {
                    printf("Invalid date.");
                }
                break;
            case 9:
                if (d > 0 && d < 31)
                {
                    printf("Valid date.");
                }
                else
                {
                    printf("Invalid date.");
                }
                break;
            case 10:
                if (d > 0 && d < 32)
                {
                    printf("Valid date.");
                }
                else
                {
                    printf("Invalid date.");
                }
                break;
            case 11:
                if (d > 0 && d < 31)
                {
                    printf("Valid date.");
                }
                else
                {
                    printf("Invalid date.");
                }
                break;
            case 12:
                if (d > 0 && d < 32)
                {
                    printf("Valid date.");
                }
                else
                {
                    printf("Invalid date.");
                }
                break;
            default:
                printf("Invalid month");
                break;
            }
        }
        else
        {
            printf("Invalid year.");
        }
    }

    return 0;
}