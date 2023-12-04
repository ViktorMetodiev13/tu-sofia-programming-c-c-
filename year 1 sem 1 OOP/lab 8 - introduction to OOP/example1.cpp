#include <iostream>
#include <cmath>
using namespace std;
class triangle
{ // Начало на дефиницията на клас triangle
private:
    float a, b, c;

public:
    triangle();                    // Конструктор без аргументи
    triangle(float, float, float); // Конструктор с три аргумента
    float area();                  // Член-функция area()
    void show(const char *);     // Член-функция show()
    ~triangle()                    // Деструктор
    {
        cout << "Destroying object!" << endl;
    }
};                   // Край на декларацията на клас triangle
triangle::triangle() // Дефиниция на конструктор без аргументи
{
    do
    {
        cout << "\nEnter triangle sides:";
        cin >> a >> b >> c;
    } while (!((a > 0) && (b > 0) && (c > 0) && ((a + b) > c) && ((a + c) > b) && ((b + c) > a)));
}
triangle::triangle(float len1, float len2, float len3) // конструктор с 3 аргумента
{
    a = len1;
    b = len2;
    c = len3;
}
float triangle::area() // Дефиниция на член-функция area()
{
    float p, s;
    p = (a + b + c) / 2;
    s = sqrt(p * (p - a) * (p - b) * (p - c));
    return s;
}
void triangle::show(const char *name) // Дефиниция на член-функция show()
{
    cout << "\nTriangle " << name << " sides:" << endl;
    cout << "a=" << a << ", b=" << b << ", c=" << c;
}
// Край на дефиницията на клас triangle
int main() // Главна функция за тестуване на клас triangle
{
    triangle tr1;          // Обект tr1; извиква се конструкторът без аргументи
    triangle tr2(3, 4, 5); // Обект tr2; извиква се конструкторът с три аргумента
    float s;
    tr1.show("tr1");
    s = tr1.area(); // Извиква се член-функция area() за tr1
    cout << "\ns=" << s << endl;
    tr2.show("tr2");
    cout << "\ns=" << tr2.area() << endl; // Извиква се член-функции area() за tr2
    system("pause");
    return 0;
}
