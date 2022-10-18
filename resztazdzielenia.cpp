#include <iostream>

using namespace std;

int ResztaZDzielenia(int a, int b)
{
    return a % b;
}

int main() {
    int liczba;
    cout << "Podaj liczbe: "; cin>>liczba;
    cout << "Reszta z dzielenia liczby " << liczba;
    cout << " przez 2, 3, 5, 7: ";
    cout << "wynosi odpowiednio: " << endl;
    cout << ResztaZDzielenia(liczba, 2) << endl;
    cout << ResztaZDzielenia(liczba, 3) << endl;
    cout << ResztaZDzielenia(liczba, 5) << endl;
    cout << ResztaZDzielenia(liczba, 7) << endl;

    return 0;
}
