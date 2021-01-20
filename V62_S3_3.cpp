#include <iostream>

using namespace std;
void fibo(int n, long long v[30])
{
    long long a[100], j = 2;
    a[0] = 1;
    a[1] = 1;
    v[0] = 1;
    v[1] = 1;
    for (int i = 2; i < n * 3 + 2; i++)
    {
        a[i] = a[i - 1] + a[i - 2];
        if (a[i] % 2)
        {
            v[j] = a[i]; j++;
            
        }
        if (j == n)
            i = n * 4;
    }
}

int main()
{
    long long v[30];
    fibo(30, v);
    for (int i = 0; i < 30; i++)
        cout << v[i]<<" ";
    return 0;
}
