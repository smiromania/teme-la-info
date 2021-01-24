#include <iostream>
#include <fstream>
using namespace std;
ifstream f("m.txt");

int main()
{
    int n,a[51][51];
    bool ok = true;
    cin >> n;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
        {
            f >> a[i][j];
            if (i > j&& a[i][j] != 0)
                ok = false;
        }
    if (ok)
        cout << "Este triunghiulară superior";
    else cout << "Nu este triunghiulară superior";
}
