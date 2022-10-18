#include <iostream>

using namespace std;

bool CzyPoprawnyAdres(string adres)
    {
        int dl = adres.length();

        int i = 0; //sprawdzanie index znaku @
        while (adres[i]!='@' && i<dl-1) i++;
        if (adres[i]!='@' || i<2) return false;

        int j = dl-1; //sprawdzanie index znaku @ od tylu i porównywanie do i
        while (adres[j]!='@') j--;
        if (i!=j) return false;

        int k = dl-1; //sprawdzanie index kropki od tyłu
        while (adres[k]!='.' && k>0) k--;
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
