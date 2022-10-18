#include <iostream>

using namespace std;

int main() {
    float nota,min,maks,suma;
    cout << "Podaj noty za skok" << endl;
    cin >> nota;
    min = nota;
    maks = nota;
    suma = nota;

    for (int i=1; i<=4; i++) {
        cin >> nota;
        suma = suma + nota;
        if (min>nota) min = nota;
        if (maks<nota) maks = nota;
    }

    suma = suma - min - maks;
    cout << "\nOdrzucone noty: " << min << " i " << maks << endl;
    cout << "Suma za skok: " << suma << endl;
}
