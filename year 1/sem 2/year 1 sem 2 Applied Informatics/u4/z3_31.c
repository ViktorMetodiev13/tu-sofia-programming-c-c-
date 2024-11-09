#include <stdio.h>
#include <math.h>

int main()
{
    float AB;
    int xA;
    int yA;

    float BC;
    int xB;
    int yB;

    float AC;
    int xC;
    int yC;

    float perimeter;

    printf("Enter value for A:\n");
    printf("\nX = ");
    scanf("%d", &xA);
    printf("\nY = ");
    scanf("%d", &yA);

    printf("Enter value for B:\n");
    printf("\nX = ");
    scanf("%d", &xB);
    printf("\nY = ");
    scanf("%d", &yB);

    printf("Enter value for C:\n");
    printf("\nX = ");
    scanf("%d", &xC);
    printf("\nY = ");
    scanf("%d", &yC);

    AB = (float)sqrt((xB - xA) * (xB - xA) + (yB - yA) * (yB - yA));
    BC = (float)sqrt((xC - xB) * (xC - xB) + (yC - yB) * (yC - yB));
    AC = (float)sqrt((xC - xA) * (xC - xA) + (yC - yA) * (yC - yA));

    perimeter = AB + BC + AC;

    printf("Perimeter = %0.2f", perimeter);

    return 0;
}