#include <iostream>
#include <fstream>
using namespace std;
ifstream f("date.in");
int dist(long a)
{
    if(a%2==0)
        while(a)
    {
        if(a%2==1)
            return 0;
        a=a/10;
    }
    else while(a)
    {
        if(a%2==0)
            return 0;
        a=a/10;
    }
    return 1;
}

int main()
{
    int n; int h=0;
    f>>n;
    while(f>>n)
    {
        if(dist(n))
        {cout<<n; h++;}

    }
    if(h==0)
        cout<<"-1";
    return 0;
}
