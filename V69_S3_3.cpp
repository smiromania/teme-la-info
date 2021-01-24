#include <iostream>
using namespace std;
int calcul(long n) {
    int impar = 0, par = 0;
    while (n)
    {
        if (n % 2)
            impar++;
        else par++;
        n = n / 10;
    }
    if (impar > par)
        return impar - par;
    return par - impar;

}
int main()
{
    
    long n;
    cin >> n;
    while (calcul(n) != 0)
        n++;
    cout << n;
}
