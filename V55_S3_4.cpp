#include <iostream>
using namespace std;
int inv(int n)
{
    int ogl = 0;
    while (n)
    {
        
        ogl = ogl * 10 + n % 10;
        n = n / 10; 
        
    }return ogl;
}
int main()
{
    int n, a[101],b[101];
    long c[101];
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    for (int i = 1; i <= n; i++)
        cin >> b[i];
    for (int i = 1; i <= n; i++)
        if (a[i] < b[i])
        {
            c[i] = a[i];
            int y = inv(b[i]);
            //cout << y << endl;
            while (y)
            {
                c[i] = c[i] * 10 + y % 10;
                y = y / 10;
                //cout << c[i] << " ";
            }
            //cout << endl;
        }
        else {
            c[i] = b[i];
            int y = inv(a[i]);
            //cout << y << endl;
            while (y)
            {
                c[i] = c[i] * 10 + y % 10;
                y =  y / 10;
                //cout << c[i] << " ";
            }//cout << endl;
        }
    for (int i = 1; i <= n; i++)
        cout << c[i] << " ";
    
}
