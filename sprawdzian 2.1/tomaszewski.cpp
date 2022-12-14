#include <iostream>

using namespace std;

int main() {
    int a;
    cout << "Podaj liczbe: ";
    cin >> a;

    if (a % 2 == 0) {
        cout << "Liczba parzysta" << endl;
    } else {
        cout << "Liczba nieparzysta" << endl;
    }
    if (a % 3 != 0 ) {
        cout << "Liczba niepodzielna przez 3";
    } else {
        cout << "Liczba podzielna przez 3";
    }


}
