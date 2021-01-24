#include <iostream>
#include <fstream>
using namespace std;
ifstream f("NUMERE.TXT");

void inv(long x)
{
    while (f >> x)
        inv(x);
    if (x % 2)
        cout << x<<" ";
}

int main()
{
    long x;
    f >> x;
    while (f >> x)
        if (x % 2 == 0)
            cout << x << " ";
    f.close();
    f.open("NUMERE.TXT");
    inv(x);
}
