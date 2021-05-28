// hw2_PhoneBook.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>
#include "PhoneBook.h"
using namespace std;

int main()
{
    int size = 10;
    cout << "Enter size of ur PhoneBook: ";
    cin >> size;
    PhoneBook* book1 = new PhoneBook[size];
    cout << "\n\n";
    cout << "Creating ur PhoneBook: " << endl;
    for (int i = 0;i < size;i++)
    {
        char a[100], b[100], c[100], d[100], e[100];
        cout << "Enter " << i + 1 << " FIO: ";
        cin >> a;
        cout << "Enter " << i + 1 << " HomeNumber: ";
        cin >> b;
        cout << "Enter " << i + 1 << " WorkNumber: ";
        cin >> c;
        cout << "Enter " << i + 1 << " MobNumber: ";
        cin >> d;
        cout << "Enter " << i + 1 << " DiffInfo: ";
        cin >> e;
        PhoneBook bookx{ a,b,c,d,e };
        book1[i].setFIO(a);
    }

    cout << "\n\n";
    system("pause");
    cout << "\n\n";
    return 0;
}