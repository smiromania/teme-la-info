#include <iostream>
#include <string.h>
using namespace std;


int main()
{

char a[100];
cin.get(a,100);
int h=0;
for(int i=0;i<strlen(a);i++)
{

    if(a[i]>='a'&&a[i]<='z')
    a[i]-=32;
else if(a[i]>='A'&&a[i]<='z')
    a[i]+=32;
else h++;
}
cout<<a<<'\n'<<h;

}
