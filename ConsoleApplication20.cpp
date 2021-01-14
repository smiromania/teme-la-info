
#include <iostream>
using namespace std;

void radical(int a, int &x)
{
    
    for (int i = a; i >= 0; i--)
        if (i * i <= a)
            x = i, i = -1;
}

int main()
{
    int a, x;
    a = 16;
    radical(a, x);
    cout << x;
}

