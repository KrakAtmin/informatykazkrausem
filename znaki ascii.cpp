#include <iostream>

using namespace std;

int main() {

    char znak;

    for (int i=32; i<=47; i++){
        znak = i;
        cout << znak << " ";
        if (i%16 == 15)
            cout << endl;
    }
    cout << endl;
    return 0;
}
