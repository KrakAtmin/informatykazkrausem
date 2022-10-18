#include <iostream>

using namespace std;

int main()
{
    int f;
    cout << "Temperatura w C: ";
    cin >> f;
    cout << f << " stopni C to " << (f+32)*5/9;
    cout << " stopni w skali Fahrenheita" << endl;
    return 0;


}
