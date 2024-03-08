#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float xp, yp, xc, yc, rs, distance;

    printf("\nEnter the point X coordinate:\n");
    printf("\nX = ");
    scanf("%d", &xp);

    printf("\nEnter the point Y coordinate:\n");
    printf("\nY = ");
    scanf("%d", &yp);

    printf("\nEnter the point X coordinate:\n");
    printf("\nX = ");
    scanf("%d", &xc);

    printf("\nEnter the point Y coordinate:\n");
    printf("\nY = ");
    scanf("%d", &yc);

    printf("\nEnter the radius of the circle:\n");
    printf("\nR = ");
    scanf("%d", &rs);

    distance = sqrt((xp - xc) * (xp - xc) + (yp - yc) * (yp - yc));

    if (distance <= rs)
    {
        printf("The point is inside the circle.\n");
    } 
    else 
    {
        printf("The point is outside the circle.\n");
    }

    return 0;
}