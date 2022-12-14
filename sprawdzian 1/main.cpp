#include <iostream>

using namespace std;

int main() {
    int iloscLiczb, suma, temp, i;
    cout << "Podaj ilosc liczb: ";
    cin >> iloscLiczb;
    for (i=0; i<iloscLiczb; i++) {
        cout << "Podaj cyfre: ";
        cin >> temp;
        suma = suma + temp;
    }
    cout << endl;
    cout << "Suma wynosi: ";
    cout << suma;
}
