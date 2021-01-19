#include <iostream>
#include <cstring>
#include <fstream>
using namespace std;
ifstream f("text.in");
int vc[5][5];
char v[] = "aeiou";
int main()
{

    char x, y;
    f >> x;

    while (f.get(y))
    {
        if (strchr(v, x) && strchr(v, y))
            vc[strchr(v, x) - v][strchr(v, y) - v]++;
        x = y;
    }

    int i, j, max = 0;

    for (i = 0; i <= 4; i++) {
        for (j = 0; j <= 4; j++) {
            if (vc[i][j] > max) {
                max = vc[i][j];
            }
        }
    }

    for (i = 0; i <= 4; i++) {
        for (j = 0; j <= 4; j++) {
            if (vc[i][j] == max) {
                cout << v[i] << v[j] << endl;
            }
        }
    }
}

