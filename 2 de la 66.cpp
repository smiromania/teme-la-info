#include <iostream>
#include <cstring>
using namespace std;
char b[255];
int main()
{
    char a[255],*p,c[255]; int k=0;
    cin.get(a,256); strcpy(c,a);
    p=strtok(a," ");

    while(p!=NULL)
    {
        k++;
        p=strtok(NULL," ");

    }
    cout<<k<<endl;
    strcpy(a,c);
    p=strtok(a," ");

        while(p!=NULL)
    {
        cout<<p<<endl;
        strcpy(b+strlen(b),p);
        strcpy(b+strlen(b)," ");

        p=strtok(NULL," ");

    }

cout<<b;
    return 0;
}
