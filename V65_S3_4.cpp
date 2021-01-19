#include <iostream>
#include <fstream>
using namespace std;
ifstream f("date.in");

int main()
{
    long x, y, z;
    int k = 0;
    f >> x >> y;
    while (f >> z)
    {
        if (y > z&& y > x)
            k++;
        x = y;
        y = z;
    }

        cout << k;

}

