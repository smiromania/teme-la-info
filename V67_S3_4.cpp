#include <iostream>
#include <fstream>

using namespace std;
ifstream f("numere.txt");
int main()
{
    long x, y;
    f >> x;
    f >> x;
    while (f >> y)
    {
        if (x != y)
            cout << x<<' ';
        x = y;
    }
    cout << x;
}

