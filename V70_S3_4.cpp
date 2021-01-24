#include <iostream>
#include <fstream>
using namespace std;
ifstream f("NUMERE.TXT");

int main()
{
    long x,maxv=0,w;
    f >> x;
    int max=0, i=1;
    f >> w;
    maxv = w;
    max = 1;
    while (f >> x)
    {
        if (w != x)
        {
            i = 1;
        }
        else {
            i++;
        }
        if (i > max)
        {
            max = i;
            maxv = x;
        }
        w = x;
    }
    cout << maxv << " "<<max;
}
