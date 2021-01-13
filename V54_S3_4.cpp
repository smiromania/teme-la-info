#include <iostream>
#include <fstream>
using namespace std;
ifstream f("date.in");
int main()

{

    int n, v[100], i, j, k, num = 0, ok;
    f >> n;
    for (i = 0; i < n; i++)
        f >> v[i];
    for (i = 0; i < n; i++)
    {
        ok = 0;
        for (j = 0; j < n; j++)
        {
            for (k = j + 1; k < n - 1; k++)
            {
                if (v[i] == v[j] + v[k])
                    ok = 1;
            }
        }
        if (ok == 1)
            num++;
    }
    cout << num;

    return 0;

}