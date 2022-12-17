#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    int a,b;

    cout << "Введіть число a: ";
    cin >> a;
    cout << "Введіть число b: ";
    cin >> b;

    cout << "a = " << a << " " << "b = " << b << endl;

    int max = a > b ? a : b;

    cout << "Max (значення " << a << " , значення " << b << ") = " << max;


}

