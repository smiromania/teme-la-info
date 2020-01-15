#include <iostream>
#include <fstream>
#include <string.h>

using namespace std;

ifstream f("list.txt");

struct om
{
    char a[20];
    long long varsta;
    long long inaltime;
    long long greutate;
}list[101];

int main()
{
    int i;
    int m = 0, f = 0;
    float varmed = 0, varbar = 0, hemed = 0, hefem = 0, gremed = 0, gremedf = 0, gremedb = 0;
    for (i = 0; i <= 99; i++)
    {
        f >> list[i].a[20];

        f >> list[i].varsta >> list[i].inaltime >> list[i].greutate;
        if (strcmp(list[i].a, "b") == 0)
        {
            m++; varbar = varbar + list[i].varsta;
            gremedb = gremedb + list[i].greutate;
        }
        else {
            gremedf = gremedf + list[i].greutate;
            f++;
            hefem = list[i].inaltime + hefem;

        }
        varmed += list[i].varsta + varmed;
        hemed = list[i].inaltime + hemed;
        gremed = list[i].greutate + gremed;


    }
    ifstream g("list.txt");
    cout << f << "% femei \n";
    cout << m << "% barbati \n";
    varmed /= 100;
    varbar /= m;
    hemed /= 100;
    hefem /= f;
    gremed /= 100;
    gremedf /= f;
    gremedb /= m;
    cout << varmed << "<<varsta medie " << varbar << "<<varsta medie a barbatilor \n";
    cout << hemed << "<<inaltimea medie " << hefem << "<<inaltimea medie a femeilor \n";
    cout << gremed << "<<greutatea medie " << gremedf << "<<greutatea medie a femeilor " << gremedb << "<<greutatea medie a barbatilor \n";
    int fpv = 0, mpv = 0, fph = 0, mph = 0, fpg = 0, mpg = 0;
    for (i = 0; i <= 99; i++)
    {
        g >> list[i].a[20] >> list[i].varsta >> list[i].inaltime >> list[i].greutate;
        if (strcmp(list[i].a, "b") == 0)
        {
            if (list[i].varsta > varmed)
                mpv++;
            if (list[i].inaltime > hemed)
                mph++;
            if (list[i].greutate > gremed)
                mpg++;
        }
        else {
            if (list[i].varsta > varmed)
                fpv++;
            if (list[i].inaltime > hemed)
                fph++;
            if (list[i].greutate > gremed)
                fpg++;

        }

    }
    if (m > 0)
    {
        mpv = mpv * 100 / m;
        mph = mph * 100 / m;
        mpg = mpg * 100 / m;
    }
    if (f > 0)
    {
        fpv = fpv * 100 / f;
        fph = fph * 100 / f;
        fpg = fpg * 100 / f;
    }
    cout << mpv << "% barbati peste media varstei; " << mph << "% barbati peste media inaltimii; " << mpg << "% barbati peste media greutatii;\n" << fpv << "% femei peste media varstei; " << fph << "% femei peste media inaltimii; " << fpg << "% femei peste media greutatii; ";




}


