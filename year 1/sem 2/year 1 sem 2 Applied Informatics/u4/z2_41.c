#include <stdio.h>

int main()
{
    int n;

    printf("Enter value for n: ");
    scanf("%d", &n);

    if (n % 5 == 0) 
    {
        printf("The number is dividable by 5 without a remainder.");
    } 
    else
    {
        if(n % 5 == 1)
        {
            printf("The closest number is %d.", n + 4);
        }
        else if(n % 5 == 2)
        {
            printf("The closest number is %d.", n + 3);
        }
        else if(n % 5 == 3)
        {
            printf("The closest number is %d.", n + 2);
        }
        else if(n % 5 == 4)
        {
            printf("The closest number is %d.", n + 1);
        }
    }
    
    return 0;
}