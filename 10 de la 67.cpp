#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    int n,i=0,h=0;
    cin>>n; cin.get();
    char a[255],*p;
    cin.get(a,254); cout<<'\n'<<'\n'<<'\n';
    p=strtok(a," ");
    while(p)
    {i++;
     if(strlen(p)==n)
        {h++; cout<<i<<endl;}

     p=strtok(NULL," ");

    }
    cout<<'\n';
    cout<<"TOTAL"<<endl;
    cout<<"------------------------------------------------------------------------------------"<<endl;
    cout<<h<<" cuvinte";
    return 0;
}
