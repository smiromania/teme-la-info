#include <iostream>
using namespace std;
long sum;
long primul;
int main()
{
    long n, k,ok=0;
    cin >> n>>k;
    while ((primul + primul + k - 1) * k / 2 <= n)
        if ((primul + primul + k - 1) * k / 2 == n)
        {for (int i = 0; i < k; i++)
            
                cout << primul + i << " ";
    primul++;
    ok = 1;
            }
        else primul++;
    if (ok == 0)
        cout << "nu exista";
            
}
