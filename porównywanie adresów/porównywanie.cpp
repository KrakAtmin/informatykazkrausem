#include <iostream>

using namespace std;

bool CzyPoprawnyAdres(string adres)
    {
        int dl = adres.length();

        int i = 0;
        while (adres[i]!='@' && i<dl-1) i++;
        if (adres[i]!='@' || i<2) return false;

        int j = dl-1;
        while (adres[j]!='@') j--;
        if (i!=j) return false;

        int k = dl-1;
        while (adres[k]!='.' && k>0) k--;
        if (adres[k]!='.'||!(k==dl-3||k==dl-4)) return false;

        if (k-i<=1) return false;

        return true;
    }

int main()
{
    string adres;
    cin >> adres;
    cout << CzyPoprawnyAdres(adres) << endl;
    if (CzyPoprawnyAdres(adres) == true) {
        cout << "Adres poprawny";
    } else {
        cout << "Adres niepoprawny";
    }
}
