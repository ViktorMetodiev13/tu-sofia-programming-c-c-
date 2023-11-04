#include <iostream>
using namespace std;

int main()
{
    int price, quantity;

    double total = 0;
    double discount = 0.0;

    printf("quantity: ");
    cin >> quantity;
    printf("price: ");
    cin >> price;

    if (1000 < quantity)
    {
        discount = 10;
    }
    else if (100 < quantity)
    {
        discount = 5;
    }
    else if (10 < quantity)
    {
        discount = 2.5;
    }
    else
    {
        discount = 0.0;
    }

    total = (1 - 0.01 * discount) * price * quantity;

    cout << "Total: " << total;

    return 0;
}