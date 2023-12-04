#include <iostream>
#include <cmath>
using namespace std;

class circle
{
private:
    int radius;

public:
    circle();
    circle(int);

    float perimeter();
    float area();

    void show(const char *);
};

circle::circle()
{
    do
    {
        cout << "\nEnter circle radius:";
        cin >> radius;
    } while (radius <= 0);
}

circle::circle(int r)
{
    radius = r;
}

float circle::perimeter()
{
    float p;
    p = 2 * M_PI * radius;
    return p;
}

float circle::area()
{
    float s;
    s = M_PI * radius * radius;
    return s;
}

void circle::show(const char *name)
{
    cout << "\nCircle " << name << " radius:" << radius << endl;
}

int main()
{
    circle cr1;
    circle cr2(4);
    float s;
    float p;
    cr1.show("cr1");
    s = cr1.area();
    p = cr1.perimeter();
    cout << "\nArea: " << s;
    cout << "\nPerimeter: " << p;

    return 0;
}