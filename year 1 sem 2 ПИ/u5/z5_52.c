#include <stdio.h>

int main()
{
    int N;

    printf("Enter value for N: ");
    scanf("%d", &N);

    int F_0_2 = 0;
    int F_0_1 = 1;

    printf("%d", F_0_2);
    printf(" %d", F_0_1);

    for (int i = 0; i < N; i++)
    {
        int Fi = F_0_2 + F_0_1;

        F_0_2 = F_0_1;
        F_0_1 = Fi;

        printf(" %d", Fi);
    }

    return 0;
}