#include <iostream>
using namespace std;
void cifra(double x, int &y)
{
    y = (int)x;
    y = y % 10;
}
int main()
{
    double x, y; int m, n;
    cin >> x >> y;
    cifra(x, m);
    cifra(y, n);
    if (m == n)
        cout << "Da";
    else cout << "Nu";
    
}
