#include <stdio.h>

int main() 
{
    int all_num_counter = 0;
    int even_num_counter = 0;
    int even_num_sum = 0;

    while (even_num_counter != 10)
    {
        int current_number;
        printf("Enter a number: ");
        scanf("%d", &current_number);

        if(current_number % 2 == 0)
        {
            even_num_sum += current_number;
            even_num_counter++;
        }
        
        all_num_counter++;
    }

    float avg_of_even_sum = even_num_sum / 10;
    
    printf("All entered numbers: %d\n", all_num_counter);
    printf("Average of even numbers: %f", avg_of_even_sum);

    return 0;
}