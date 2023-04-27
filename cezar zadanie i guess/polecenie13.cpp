#include <iostream>
#include <string>


using namespace std;


string cezar(int klucz, string tekst) {
    char kod;
    int dl = tekst.length();
    string szyfrogram = "";




    for (int i=0; i<dl; i++) {

        if (tekst[i] == ' ') kod = ' ';
        else if (tekst[i] >= 65 && tekst[i] < 91){
            while (tekst[i] + klucz > 'Z') tekst[i] = tekst[i] - 26;
            kod = tekst[i] + klucz;
        } else if (tekst[i] >= 97 && tekst[i] < 123) {
            while (tekst[i] + klucz > 'z') tekst[i] = tekst[i] - 26;
            kod = tekst[i] + klucz;
        } else {
            cout << "Musisz podac litere";
            break;
        }
        szyfrogram = szyfrogram + kod;
    }
    return szyfrogram;

}
int main() {
    string szyfr;
    int i;

    cout << "Podaj tekst: ";
    getline(cin,szyfr);
    cout << "Podaj klucz: ";
    cin >> i;
    cout << cezar(i, szyfr) << "    Klucz: " << i << endl;
}
