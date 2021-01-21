#include <iostream>
#include <fstream>
using namespace std;
ifstream f("A.txt");
ifstream g("B.txt");

int main()
{
    long m, x;
    g >> x;
    m = x;
    while (g >> x)
        if (m > x)
            m = x;
    int k = 0;
    while (f >> x)
        if (m > x)
            k++;
    cout << k;
}
