
#include <iostream>

using namespace std; //no to chyba wiesz

bool CzyPoprawnyAdres(string adres) //tworzenie nowej funkcji
    {
        int dl = adres.length(); //zapisanie d³ugoœci adresu i zapisanie w zmiennej dl

        if (adres.find("@")<2 || adres.find("@")>dl)
            return false;
        int i = adres.find("@");

        int j = adres.rfind("@");
        if (i!=j) return false;

        if (adres.rfind(".")>dl) return false;
        int k = adres.rfind(".");
        if (!(k==dl-3 || k==dl-4)) return false;

        if (k-i<=1) return false;

        return true;
    }

int main()
{
    string adres;
    cin >> adres;
    cout << CzyPoprawnyAdres(adres); //wyrzuca wartoœc 0(false) lub 1(true)
    if (CzyPoprawnyAdres(adres) == true) { //if sprawdza czy funkcja CzyPoprawnyAdres zwraca wartoœæ true
        cout << "Adres poprawny";
    } else {
        cout << "Adres niepoprawny";
    }
}
