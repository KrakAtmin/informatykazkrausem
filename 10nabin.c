#include <iostream>

using namespace std;

int main() {
    int liczba, iloraz, cyfry[8]={0};

    cout <<"Podaj liczbe: "; cin>>liczba;

    cyfry[7] = liczba%2;
    iloraz = liczba/2;

    int i=1;

    while(iloraz>0) {
        cyfry[7-i] = iloraz%2;
        iloraz = iloraz/2
        i++
    }

    cout<<"Zapis binarny liczby "<<liczba<<" to: ";
    for(int i=0; i<=7: i++) cout << cyfry[i];
    cout << endl;

    return 0;

}
