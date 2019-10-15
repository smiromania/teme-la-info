#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    int v=0,c=0,i;
    char a[100],vocale[]="aeiou";
    cin.get(a,100);
      for(i=0;i<=strlen(a);i++)
      {
          if(strchr(vocale,a[i]))
            v++;
          else if (a[i]!=' '&&a[i]!='\n')
            c++;
      }
      cout<<"consoane "<<c<<" vocale "<<v;
    return 0;
}
