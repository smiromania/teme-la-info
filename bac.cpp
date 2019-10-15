#include <iostream>
#include <fstream>



using namespace std;

ifstream f("BAC.IN");
ofstream g("BAC.OUT");

int p(long n, int c){
    int d = 1, x = 0, t;
    while(n>0){
        t = n%10;
        if(t!=c){
            x = x + d*t;
            d = d * 10;

        }n=n/10;
    }
    return x;
}
int main()
{
    int x;
    while(f>>x)
    {
        for(int i=1;i<=9;i=i+2)
            x=p(x,i);
        if(x) g<<x<<" ";
    }
}
