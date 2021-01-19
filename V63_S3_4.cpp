#include <iostream>
#include <fstream>
using namespace std;
ifstream f("date.in");
int main()
{
    long x, y, z,ok=0;
    f >> x;
    f >> y;
    while (f >> z)
    {
        if (x + z > y)
            ok++;
        cout << x << " " << y << " " << z << endl;
        x = y;
        y = z;
    }
    cout << ok;
}
