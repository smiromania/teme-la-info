#include <iostream>
#include <fstream>
using namespace std;
ifstream f("SIR.TXT");
int main()
{
    long w,x,val=0;
    int i = 0, sirmax = 0;
    f >> w;
    i = 1;
    sirmax = 1;
    val = w;
    while (f >> x)
    {
        if (w != x)
        {
            i = 1;
        }
        else {
            i++;
        }
        if (i >= sirmax)
        {
            sirmax = i;
            val = x;
        }
        w = x;
    }
    cout << sirmax << " " << val;
}
