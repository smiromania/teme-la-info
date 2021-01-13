#include <iostream>
#include <fstream>
using namespace std;
ifstream f("date.in");
bool mult(int n, long a[1000])
{
    for (int i = 1; i < n; i++)
        for (int j = i + 1; j <= n; j++)
            if (a[i] == a[j])
                return false;
    return true;
}
int main()
{
    int k = 0, ok = 1; 
    long a[1000];
    while (ok)
    {
        f >> a[k + 1];
        if (mult(k + 1, a))
            k++;
        else ok = 0;
    }
    cout << k;
}
