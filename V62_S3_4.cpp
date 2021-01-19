#include <iostream>
#include <fstream>
using namespace std;
ifstream f("date.in");
ofstream g("date.out");
int a[100];
int main()
{
    int x;
    while (f >> x) {
        a[x] = 1;
    }
    for (int i = 1; i <= 99; i = i + 2)
        if (a[i])
            g << i<<' ';
    g << endl;
    for (int i = 0; i <= 98; i = i + 2)
        if (a[i])
            g << i<<' ';

}
