#include <iostream>
using namespace std;

int diviz(int n, int v[201])
{
    int k = 0;
    for (int i = 1; i < n; i++)
        for (int j = i + 1; j <= n; j++)
            if (v[i] % v[j] == 0 || v[j] % v[i] == 0)
                k++;
    return k;
}


int main()
{
    int v[] = { 0,4,8,3,9,4 };
    
    cout << diviz(5, v);
}
