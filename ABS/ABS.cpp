#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    int x;

    cout << "Введіть число: ";

    cin >> x;

    if (x<0)
    {
        cout << "|" << x << "| = " << x * (-1);
    }
    else
    {
        cout << "|" << x << "| = " << x;
    }
}

