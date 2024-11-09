#include <iostream>
#include <cmath>
using namespace std;

class triangle
{
private:
    float a, b, c;

public:
    triangle();
    triangle(float, float, float);
    float area();
    float perimeter();

    void show(const char *);
    ~triangle()
    {
        cout << "Destroying object!" << endl;
    }
};

triangle::triangle()
{
    do
    {
        cout << "\nEnter triangle sides:";
        cin >> a >> b >> c;
    } while (!((a > 0) && (b > 0) && (c > 0) && ((a + b) > c) && ((a + c) > b) && ((b + c) > a)));
}

triangle::triangle(float len1, float len2, float len3)
{
    a = len1;
    b = len2;
    c = len3;
}

float triangle::area()
{
    float p, s;
    p = (a + b + c) / 2;
    s = sqrt(p * (p - a) * (p - b) * (p - c));
    return s;
}

float triangle::perimeter()
{
    float p;
    p = a + b + c;
    return p;
}

void triangle::show(const char *name)
{
    cout << "\nTriangle " << name << " sides:" << endl;
    cout << "a=" << a << ", b=" << b << ", c=" << c;
}

int main()
{
    triangle tr1;
    triangle tr2(3, 4, 5);
    float s;
    float p;
    tr1.show("tr1");
    s = tr1.area();
    p = tr1.perimeter();
    cout << "\ns=" << s;
    cout << "\nperimeter= " << p << endl;

    return 0;
}