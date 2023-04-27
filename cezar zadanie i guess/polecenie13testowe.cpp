#include<iostream>
#include<string>

using namespace std;

int sprawdz(char znak)
{
    if(znak >= 'a' && znak <= 'z') return 0; //jesli jest mala litera
    if(znak >= 'A' && znak <= 'Z') return 1;//jesli jest duza litera
}

string szyfruj(int klucz, string &tekst)
{
    if(klucz >= 0 && klucz <= 26) {//sprawdzam czy klucz jest pomiedzy 0 a 26
    int rozmiar;
    char a, z;
    for(int i = 0; i < tekst.length(); i++)
    {
        rozmiar = sprawdz(tekst[i]);
        //ustalienie wielkosci litery
        if(rozmiar < 2)
        {
            if(rozmiar == 0){
                a = 'a', z = 'z';
            }else{
                a = 'A', z = 'Z';
            }
            if(klucz >= 0)
                if(tekst[i] + klucz <= z)
                    tekst[i] += klucz;
                else
                    tekst[i] = tekst[i] + klucz - 26;
        }
    }
}
}

int main()
{
    string tekst;
    int klucz;
    cout<<"Podaj zdanie do zaszyfrowania: ";
    getline(cin, tekst);
    cout<<"Podaj klucz: ";
    cin>>klucz;
    szyfruj(klucz,tekst); //szyfrowanie
    cout<<"Po zaszyfrowaniu: "<<tekst<<endl;

    return 0;
}
