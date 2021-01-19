#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char a[256];
    cin.get(a,256);
    for(int i=strlen(a)-1;i>=0;i--)
        if(strchr("aeiou ",a[i])==0)
        {
            cout<<a[i];
            break;
        }


    return 0;
}
