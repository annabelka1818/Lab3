#include <iostream>
#include <windows.h>
#include <cstdlib>
using namespace std;


int main()
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    int x, y, r, xA, yA;

    x = rand();
    y = rand();
    r = rand();

    cout << "Введіть координати точки:" << endl;
    cout << "X: ";
    cin >> xA;
    cout << "Y: ";
    cin >> yA;

    if (((x - xA) * (x - xA) + (y - yA) * (y - yA) <= r * r))
    {
        cout << "Точка в колі." << endl;
    }
    else
    {
        cout << "Точка не в колі." << endl;
    }
}
