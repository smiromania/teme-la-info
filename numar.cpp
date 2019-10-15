#include <iostream>

using namespace std;

void numar(int x,int &nrp)
{nrp=0;
    for(int i=2;i<=x;i++)
    {   int ok=0;
        for(int j=2;j<=i/2;j++)
            if(i%j==0)
            ok=1;
        if(!ok)
            nrp++;
    }
}


int main()
{
    int a,b,m,n;
    cin>>a>>b;
    int ok=0;
    for(int i=a;i<=b;i++)
        if(i%2)
        {numar(i,m),numar(i-1,n);
        if(m!=n)
    {   if(ok==0)
        cout<<"da";
        ok=1;
    }}
    if(!ok)
        cout<<"nu";
    return 0;
}
