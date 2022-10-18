#include <iostream>

using namespace std;

int main()
{
    int d,m,r;
    int cd,cm,cr;
    cd = 15;
    cm = 03;
    cr = 2022;
    cout << "Dzieñ:"; cin >> d;
    cout << "Miesi¹c:"; cin >> m;
    cout << "Rok:"; cin >> r; cout << endl;

    if (d>=cd && m>=cm && r>=cr)
        cout << "Pe³noletni" << endl;
    else
        cout << "Niepe³noletni" << endl;










}
