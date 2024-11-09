#include <iostream>
#define N 100 // definition of a constant
using namespace std;
// functions prototypes
void display(int x[], int nx);
float aver(int x[], int nx);
int max_elem(int x[], int nx);
/* ************* Function main() ************* */
int main()
{
    int a[N];
    int b[N];
    int na, nb, i, j;
    float av_a, av_b;
    do
    {
        printf("Enter na (na<100) ="); // a validity check to na
        cin >> na;
    } while (na <= 0 || na >= 100);
    for (i = 0; i < na; i++) // elements of the array a
    {
        printf("\nEnter element %d = ", i);
        cin >> a[i];
    }
    j = 0; // counter for the elements of the array b
    for (i = 0; i < na; i++)
    {
        if (a[i] < 0) // negative elements from the array a to the array b
        {
            b[j] = a[i];
            j++;
        }
    }
    nb = j; // final count of the elements in b
    printf("\n Array A:");
    display(a, na); // a function call
    printf("\n Array B:");
    display(b, nb);     // a function call
    av_a = aver(a, na); // a function call using an assignment operation
    printf("\n Average of the array a = %.3f", av_a);
    av_b = aver(b, nb); // a function call using an assignment operation
    printf("\n Average of the array b = %.3f", av_b);
    // a function call using a printing
    printf("\n Max element in array a = %d", max_elem(a, na));
    printf("\n Max element in array b = %d", max_elem(b, nb));

    system("pause");
    return 0;
}
/* ************* Functions definitions ************* */
/* A comment block:
Name: display()
Description: A function that displays the elements of an integer array
Parameters: int x[] – array of integers
int nx – count of the array elements
Returns: no returned value
*/
void display(int x[], int nx)
{
    int k;
    for (k = 0; k < nx; k++)
    {
        printf("\n Element [%d] = %d", k, x[k]);
    }
}
/* A comment block:
Name: aver()
Description: A function that calculates and displays the average of the elements
of an integer array
Parameters: int x[] – array of integers
int nx – count of the array elements
Returns: the average value
*/
float aver(int x[], int nx)
{
    int sum = 0;
    int k;
    float av;
    for (k = 0; k < nx; k++)
    {
        sum += x[k];
    }
    if (nx)
        av = (float)sum / nx;
    return av;
}
/* A comment block:
Name: max_elem()
Description: A function that calculates and displays the maximal element of an
integer array
Parameters: int x[] – array of integers
int nx – count of the array elements
Returns: the maximal element
*/
int max_elem(int x[], int nx)
{
    int max;
    int k;
    max = x[0];
    for (k = 0; k < nx; k++)
    {
        if (x[k] > max)
        {
            max = x[k];
        }
    }
    return max;
}
