#include <iostream>
#include <string>
using namespace std;

int main() {
    string login, login_baza="login";
    string haslo, haslo_baza="password";

    cout << "Login: "; cin >> login;
    cout << "Haslo: "; cin >> haslo; cout << endl;

    if (login==login_baza && haslo==haslo_baza)
        cout << "Logowanie prawidlowe." << endl;
    else
        cout << "Logowanie nieprawidlowe" << endl;

    return 0;

}
