#include <iostream>
#include <cstring>
using namespace std;

char a[201], * p;
int k = 0;

int main()
{
    cin.get(a, 200);
    p = strtok(a, " ");

    while (p)
    {
        if (strchr("AEIOUaeiou", p[0]))
        {
            if (strchr("AEIOUaeiou", p[strlen(p) - 1]))
                k++;

        }

        p = strtok(NULL, " ");
    }
    if (k == 0)
        cout << "Nu exista";
    else
    cout << k;
}
