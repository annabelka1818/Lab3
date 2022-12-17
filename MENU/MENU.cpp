#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    int choice;

    

    while (true)
    {
        system("cls");

        cout << "Працює інформаційна система факультету прикладної математики:" << endl;
        cout << "1. Новини дня" << endl;
        cout << "2. Анекдот тижня" << endl;
        cout << "3. Автора !!!" << endl;

        cin >> choice;
        
        switch (choice)
        {
        case 1:
            cout << "Об 11-й годині дня відбудеться відключення світла!" << endl;
            system("pause");
            break;
        case 2:
            cout << "Як завантажити С++?" << endl;
            system("pause");
            break;
        case 3:
            cout << "Авраменко Анна" << endl;
            system("pause");
            break;
        default:
            break;
        }
    }

    
}
