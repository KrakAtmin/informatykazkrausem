#include <iostream>

using namespace std;


int main() {
    int procent, ocena;

    cout << "Podaj procentowy wynik testu: ";
    cin >> procent;
    cout << "Podaj ocene na swiadectwie: ";
    cin >> ocena;

    if (procent > 90 || ocena >= 5) {
        cout << "klasa zaawansowana";

    } else {
        cout << "klasa podstawowa";
    }


}
