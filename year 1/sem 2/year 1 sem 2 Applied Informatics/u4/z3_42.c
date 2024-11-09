#include <stdio.h>

int main()
{
    int x, y;

    printf("Enter value for x: ");
    scanf("%d", &x);
    printf("Enter value for y: ");
    scanf("%d", &y);

    if (x == 0 && y == 0)
    {
        printf("The point is in the center.");
    }
    else if (x == 0 && y != 0)
    {
        printf("The point in on the ordinate.");
    }
    else if (x != 0 && y == 0)
    {
        printf("The point in on the axis.");
    }
    else if (x > 0 && y > 0)
    {
        printf("The point in the first quadrant.");
    }
    else if (x < 0 && y > 0)
    {
        printf("The point in the second quadrant.");
    }
    else if (x < 0 && y < 0)
    {
        printf("The point in the third quadrant.");
    }
    else if (x > 0 && y < 0)
    {
        printf("The point in the forth quadrant.");
    }

    return 0;
}