#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char a[51];
    cin.get(a, 50);
    for (int i = strlen(a) - 1; i > -1; i--)
        cout << a + i<<endl;
}

