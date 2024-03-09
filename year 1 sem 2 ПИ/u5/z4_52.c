#include <stdio.h>

int main()
{
    int N;
    int positive_num_count = 0;
    int negative_num_count = 0;

    printf("Enter value for N: ");
    scanf("%d", &N);

    for (int i = 0; i < N; i++)
    {
        float current_num;

        printf("Enter value for the current number: ");
        scanf("%f", &current_num);

        if (current_num > 0)
        {
            positive_num_count++;
        }
        else if (current_num < 0)
        {
            negative_num_count++;
        }
    }

    printf("Number of positive numbers: %d\n", positive_num_count);
    printf("Number of negative numbers: %d\n", negative_num_count);

    return 0;
}