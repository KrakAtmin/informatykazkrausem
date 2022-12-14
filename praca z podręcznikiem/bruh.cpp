#include <iostream>
#include <string>

using namespace std;


int main() {

    string s;
    char znak;

    cin >> s;

    for (int i = 0; i < s.length(); i++) {

        if (s[i] >= 'A' && s[i] <= 'Z') {
            cout << s[i];
        }
    }





}
