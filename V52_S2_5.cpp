#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    int n, ok = 0;
    char a[31];
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a;
        int k = 0;
        for (int j = 0; j < strlen(a); j++)
            if (strchr("qwrtypsdfghjklzxvbnm", a[j]))
                k++;
        if (!k)
            ok++;
        
    }
    cout << ok;
}
