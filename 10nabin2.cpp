#include <iostream>

using namespace std;

int calc() {
    int liczba, iloraz, cyfry[16]={0};

    cout <<"Podaj liczbe: "; cin>>liczba;
    if (liczba>512) {
        cout << "Niepoprawna wartosc" << endl;
        return 1;
    }
    cyfry[9] = liczba%2;
    iloraz = liczba/2;

    int i=1;

    while(iloraz>0) {
        cyfry[9-i] = iloraz%2;
        iloraz = iloraz/2;
        i++;
    }

    cout<<"Zapis binarny liczby "<<liczba<<" to: ";
    for(int i=0; i<=9; i++) cout << cyfry[i];
    cout << endl;

}
int main(){
    while(true) {
        calc();
    }
}
