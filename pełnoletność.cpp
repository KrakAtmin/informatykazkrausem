#include <iostream>

using namespace std;

int main()
{
    int d,m,r;
    int cd,cm,cr;
    cd = 15;
    cm = 3;
    cr = 2022;
    cout << "Dzien:"; cin >> d;
    cout << "Miesiac:"; cin >> m;
    cout << "Rok:"; cin >> r; cout << endl;

    if (r<=cr-18) {
        if (m>=cm) {
            if (d>=cd) {
                cout << "Pelnoletni" << endl;
            }
        }
    }
    else {
        cout << "Niepelnoletni" << endl;
    }
    return 0;
}










