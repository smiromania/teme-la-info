#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char a[51];
    cin.get(a, 50);
    for (int i = 0; i < strlen(a); i++)
    {
        for (int j = 0; j <= i; j++)
            cout << a[j];
        cout << endl;
    }
}
