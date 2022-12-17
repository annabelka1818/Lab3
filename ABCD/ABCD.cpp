#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    int a, b, c, d, temp1;

    cout << "Введіть число a: ";
    cin >> a;
    cout << "Введіть число b: ";
    cin >> b;
    cout << "Введіть число c: ";
    cin >> c;
    cout << "Введіть число d: ";
    cin >> d;

    cout << "a = " << a << " " << "b = " << b << " " << "с = " << c << " " << "d = " << d << endl;

    if (a > b)
    {
        temp1 = b;
        b = a;
        a = temp1;
    }
    if (b > c)
    {
        temp1 = c;
        c = b;
        b = temp1;
    }
    if (c > d)
    {
        temp1 = d;
        d = c;
        c = temp1;
    }
    if (a > b)
    {
        temp1 = b;
        b = a;
        a = temp1;
    }
    if (b > c)
    {
        temp1 = c;
        c = b;
        b = temp1;
    }
    if (a > b)
    {
        temp1 = b;
        b = a;
        a = temp1;
    }

    cout << "a = " << a << " " << "b = " << b << " " << "с = " << c << " " << "d = " << d << endl;
}

