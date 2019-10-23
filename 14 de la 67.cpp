#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    int c=0,l=0,s=0;
    char a[101];
    cin.get(a,102);
    for(int i = 0;i<=strlen(a)-1;i++)
        if(strchr("0123456789",a[i]))
        c++;
        else if((a[i]>='a'&&a[i]<='z')||(a[i]>='A'&&a[i]<='Z'))
            l++;
        else if(a[i] != ' ')
            s++;
        cout<<"cifre "<<c<<" litere "<<l<<" speciale (fara caracterul spatiu) "<<s;


    return 0;
}
