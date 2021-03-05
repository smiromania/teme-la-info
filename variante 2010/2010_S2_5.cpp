#include <iostream>
#include <cstring>
using namespace std;


int main()
{
    char a[101];
    int im, k;
    cin.get(a, 100);
    for (int i = 0; i < strlen(a); i++)
    {
        bool ok = false;
        if (strchr("0123456789", a[i]))
        {
            im = i;
            k = 1;
            i++;
            while (a[i] != ' ' && a[i] != NULL)
            {

                if (a[i] == '.')
                    ok = true;
                k++;
                i++;
            }

        }
        if (ok)
        {
            strcpy(a + im, a + im + k);
        }
    }
    cout << endl;
    cout << a;

}
