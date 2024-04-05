#include <stdio.h>

int main()
{
    printf("Да се състави програма за обработка на масив А[6][5] от реални числа в интервал [0, 99.9].");
    printf("Action: да се образува нов масив B, съдържащ сумите от А[i][j] < 0 по колони");
    printf("Produces by Viktor Metodiev - 361223016");

    float A[6][5];

    printf("Elements:\n");
    for (int r = 0; r < 6; r++)
    {
        for (int c = 0; c < 5; c++)
        {
            do
            {
                printf("A[%d][%d] = ", r, c);
                scanf("%f", &A[r][c]);
            } while (!(A[r][c] >= 0 && A[r][c] <= 99.9));
            
        }
        
    }
    

    return 0;
}