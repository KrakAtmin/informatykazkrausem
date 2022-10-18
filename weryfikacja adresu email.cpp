#include <iostream>

using namespace std;

int main() {
    const string INF_OK =
        "Haslo do serwisu wysalismy na adres: ";
    const string INF_BLAD =
        "Podane adresy e-mail sa rozne!!!";

    string imie, nazwisko, adres_1, adres_2;
    cout << "Podaj imie: ";
    cin >> imie;
    cout << "Podaj nazwisko: ";
    cin >> nazwisko;
    cout << "Podaj adres e-mail: ";
    cin >> adres_1;
    cout << "Powtorz adres e-mail: ";
    cin >> adres_2;
    cout << endl;

    if (adres_1 == adres_2)
        cout << INF_OK + adres_1 << endl;
    else
        cout << INF_BLAD << endl;

    return 0;


}
