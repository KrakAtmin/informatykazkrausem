#include <iostream>

using namespace std;

int main()
{
    int f;
    cout << "Temperatura w skali Fahrenheita: ";
    cin >> f;
    cout << f << " stopni F to " << (f-32)*5/9;
    cout << " stopni C" << endl;
    return 0;


}
