#include <iostream>
#include <fstream>
#include <algorithm>
using namespace std;
ifstream f("numere.txt");
int main()
{
    int x,v[1001];
    int i = 0;
    while (f >> x)
    {
        if (x % 2 == 0)
            v[i++] = x;
    }
    sort(v, v + i);
    for (int j = 0; j < i; j++)
        cout << v[j]<<" ";
}

