#include <iostream>

using namespace std;
void fibo(int n, long v[30])
{
    v[0] = 1;
    v[1] = 1;
    for (int i = 2; i < n; i++)
        v[i] = v[i - 1] + v[i - 2];
}

int main()
{
    long v[30];
    fibo(30, v);
    for (int i = 0; i < 30; i++)
        cout << v[i]<<" ";
}
