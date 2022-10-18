#include <iostream>
#include <cmath>

using namespace std;

bool CzyPierwsza(int n)
{
    if (n==2) return 1;
    if (n%2==0) return 0;

    int pierwiastek = sqrt(n);
    for (int i=3; i<pierwiastek; i=i+2)
        if (n%i==0) return 0;
    return 1;
}

int main() {
    int liczba;
    cout << "Podaj liczbe: "; cin>>liczba;
    if (CzyPierwsza(liczba)==1)
        cout << "Liczba pierwsza" << endl;
    else
        cout << "Liczba zlozona" << endl;

    return 0;
}
