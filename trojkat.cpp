#include <iostream>

using namespace std;

int main()
{
    int a,b,c,p;
    cin >> a >> b >> c;

    if (a>b && a>c)
    {
        p = a;
        a = c;
        c = p;
    }
    else
        if (b>c)
        {
            p = b;
            b = c;
            c = p;
        }

    if (a+b>c)
        cout << "TAK" << endl;
    else
        cout << "NIE" << endl;
return 0;
}
