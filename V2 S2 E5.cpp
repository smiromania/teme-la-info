#include<iostream>
#include<string.h>
using namespace std;

int main()
{char s[21],n,i,nr=0;

cin>>s;
n=strlen(s);
i=0;
while (i<n)
{ if (s[i]>='a' && s[i]<='z')
{strcpy(s+i,s+i+1);
 nr++;}
    else
    i++;

}
 if (nr==n)
 cout<<"CUVANT VID";
 else
 cout<<s;
}
