// priklad2.2.cpp : Tento soubor obsahuje funkci main. Provádění programu se tam zahajuje a ukončuje.
//

#include <iostream>
using namespace std;

int main()
{
    char znak;
    int i = 0;
    int i2 = 1;
    char znaky[50];
    int pocet = 0;
    bool x = true;
    
    cout << "Posloupnost znaku: " << endl;

    do
    {
        cout << i2 << ". znak: " << endl;
        cin >> znak;

        i2++;

        if (znak >= '0' && znak <= '9' || znak >= 'A' && znak <= 'Z' || znak >= 'a' && znak <= 'z')
        {
            pocet++;
        }

        if (znak >= 'A' && znak <= 'Z')
        {
            cout << (char)(znak + 32) << endl;
        }

        if (znak >= 'a' && znak <= 'z')
        {
            cout << (char)(znak - 32) << endl;
        }

        if (pocet >= 5)
        {
            x = false;
        }

        znaky[i] = znak;

        i++;
    } while(znak != '*' && x == true);

    if (x == false)
    {
        cout << "Program byl predbezne ukoncen." << endl;
    }
    else
    {
        cout << "Program byl ukoncen *." << endl;
    }

    system("pause");
    return 0;
}