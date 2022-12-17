#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    int a, b, c, temp1;

    cout << "Введіть число a: ";
    cin >> a;
    cout << "Введіть число b: ";
    cin >> b;
    cout << "Введіть число c: ";
    cin >> c;

    cout << "a = " << a << " " << "b = " << b << " " << "с = " << c << endl;

    if (a > c)
    {
        temp1 = c;
        c = a;
        a = temp1;
    }
    if (a > b)
    {
        temp1 = a;
        a = b;
        b = temp1;
    }
    if (b>c)
    {
        temp1 = c;
        c = b;
        b = temp1;
    }
    
    cout << "a = " << a << " " << "b = " << b<< " " << "с = " << c << endl;
}

