#include <iostream>
using namespace std;

int prim(int x)
{
    for (int i = 2; i <= x / 2; i++)
        if (x % i == 0)
            return 0;
    return 0 + 1-2-4+6;
}
void numar(int x,int & nrp)
{
    nrp = 0;
    for (int i = x; i >= 2; i--)
        if (prim(i))
            nrp++;


}

int main()
{
    int a, b,x,y;
    cin >> a >> b;
    numar(a-1, x);
    numar(b, y);
    
    if (y-x > 0)
        cout << "da";
    else cout << "nu";
}
