#include <iostream>
#include <string>


using namespace std;

string Kolumnowy(int klucz, string jawny)
{
    int dl = jawny.length();
    string szyfrogram = "";

    for (int i=0; i<klucz; i++)
    {
        for (int j=i; j<dl; j=j+klucz)
            { szyfrogram = szyfrogram + jawny[j];
            }
    }

    return szyfrogram;
}

string Cezar(int klucz, string tekst)
{
    char kod;
    int dl = tekst.length();
    string szyfrogram = "";

    for (int i=0; i<dl; i++)
        {
        if (tekst[i] == ' ') kod = ' ';
        else
        {
            kod = tekst[i] + klucz;
            if (kod>'Z') kod = kod - 26;
        }
        szyfrogram = szyfrogram + kod;
    }
    return szyfrogram;

}
int main()
{
    string jawny;
    int klucz, tryb;

    cout << "Wybierz szyfrowanie:" << endl;
    cout << "[0] Cezar" << endl;
    cout << "[1] Kolumnowy" << endl;
    cin >> tryb; cout << endl;

    cout << "Podaj tekst: ";
    cin >> jawny;

    cout << "Podaj klucz: ";
    cin >> klucz;

    if (tryb != 1)
    {
        cout << "Szyfrogram: " << Cezar(klucz, jawny) << endl;
    } else
    {
        cout << "Szyfrogram: " << Kolumnowy(klucz, jawny) << endl;
    }


    return 0;
}
