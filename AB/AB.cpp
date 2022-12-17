#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    int a, b, temp;

    cout << "Введіть число a: ";
    cin >> a;
    cout << "Введіть число b: ";
    cin >> b;

    cout << "a = " << a << " " << "b = " << b << endl;

    if (a>b)
    {
        temp = a;
        a = b;
        b = temp;
    }

    cout << "a = " << a << " " << "b = " << b << endl;


}

