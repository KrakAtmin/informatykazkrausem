#include <iostream>

using namespace std;

int main () {
    /* nie rozumiem co książka ma na myśli gdy mówi o specyfikacji problemu, więc napiszę że użyłem zmiennej double zamiast int żeby
    móc operować na ułamkach | kod ma problem z wyświetlaniem dużych liczb ale to już chyba problem biblioteki*/
    double akd,pln,dol;
    akd = 4.27;

    cout << "Wartosc w zlotowkach: "; cin >> pln; cout << endl;
    dol = pln/akd;
    cout << pln << "zl to " << dol << "$" << endl;
    return 0;







}
