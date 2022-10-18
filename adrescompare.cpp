#include <iostream>

using namespace std; //no to chyba wiesz

bool CzyPoprawnyAdres(string adres) //tworzenie nowej funkcji
    {
        int dl = adres.length(); //zapisanie długości adresu i zapisanie w zmiennej dl

        int i = 0; //sprawdzanie index znaku @
        while (adres[i]!='@' && i<dl-1) i++; //pętla while sprawdza czy i jest różne od @ i czy zmienna i jest mniejsza od zmiennej dl-1, dodaje do zmiennej i liczbę 1 (i++)
        if (adres[i]!='@' || i<2) return false; //sprawdzanie czy index @ jest różny od i lub czy i jest większe od 2, jeżeli tak to kontynuuje pętlę

        int j = dl-1; //sprawdzanie index znaku @ od tylu i porównywanie do j
        while (adres[j]!='@') j--; //pętla while sprawdza czy index @ jest różny od zmiennej j, odejmuje od j wartość 1 (j--)
        if (i!=j) return false; //sprawdza czy i jest różne od j, Jeżeli tak to kontynuuje pętlę

        int k = dl-1; //sprawdzanie index kropki od tyłu
        while (adres[k]!='.' && k>0) k--; //pętla while sprawdza czy wartość k jest różna od indeksu . i czy k jest większe od 0, odejmuuje od k wartość 1 (k--)
        if (adres[k]!='.'||!(k==dl-3||k==dl-4)) return false;

        if (k-i<=1) return false; //sprawdzanie czy kropka jest po @

        return true;
    }

int main()
{
    string adres;
    cin >> adres;
    cout << CzyPoprawnyAdres(adres);
    if (CzyPoprawnyAdres(adres) == true) {
        cout << "Adres poprawny";
    } else {
        cout << "Adres niepoprawny";
    }
}
