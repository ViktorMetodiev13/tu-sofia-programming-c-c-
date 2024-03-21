#include <stdio.h>

int main() {
    printf("Da se sustavi programa za obrabotka na masiva D[M, M], kudeto dannite sa chisla v intervala [-999 - 999]. Da se nameri srednoto aritmetichno na vsichki elementi nad glavniq diagonal, koito sa kratni na R i lejat v [A-B]\n");

    int M, R, A, B;

    printf("Enter value for M: ");
    scanf("%d", &M);
    printf("Enter value for R: ");
    scanf("%d", &R);
    printf("Enter value for A: ");
    scanf("%d", &A);
    printf("Enter value for B: ");
    scanf("%d", &B);

    int sum = 0;
    int counter = 0;

    int D[M][M];

    printf("Enter elements: \n");
    for (int i = 0; i < M; i++)
    {
        for (int j = 0; j < M; j++)
        {
            do
            {
                printf("D[%d][%d] = ", i, j);
                scanf("%d", &D[i][j]);
            } while (!(D[i][j] >= -999 && D[i][j] <= 999));
        }  
    }

    for (int i = 0; i < M; i++)
    {
        for (int j = 0; j < M; j++)
        {
            printf("%d ", D[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < M; i++)
    {
        for (int j = 0; j < M; j++)
        {
            if(i < j && ((D[i][j] >= A && D[i][j] <= B) && D[i][j] % R == 0)) 
            {
                sum += D[i][j];
                counter++;
            }
        }
    }

    float avg = sum / counter;

    printf("Average = %0.2f", avg);

    return 0;
}