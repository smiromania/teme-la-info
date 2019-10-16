#include <iostream>

using namespace std;

int main()
{
    int n,v[100],i,j,h=1;
    cin>>n;
    for(i=1;i<=n;i++)
        cin>>v[i];
    for(i=1;i<=n;i++)
        for(j=1;j<=n;j++)
        if(i!=j&&v[i]==v[j])
        h=0;
    if(h)
        cout<<"Da";
    else cout<<"Nu";
    return 0;
}
