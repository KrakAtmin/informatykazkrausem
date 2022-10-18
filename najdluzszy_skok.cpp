#include <iostream>

using namespace std;

int main() {
    float a,maks;

    maks=0;
    cout << "Podaj kolejne dlugosci skokow:" << endl;
    cin >> a;

    while (a!=0) {
            if (a>maks) maks = a;
            cin >> a;
    }
    cout << "\nNajdluzszy skok: " << maks << "m" <<endl;
    return 0;
}
