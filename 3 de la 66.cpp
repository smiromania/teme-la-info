#include <iostream>
#include <cstring>
using namespace std;

int main()
{
char a[255],*p,c; int k=0;
cin>>c; cin.get();
cin.get(a,256);
p=strtok(a," ");
while(p!=NULL)
{
if(strchr(p,c))
{
    cout<<p<<endl;
    k++;


}

p=strtok(NULL," ");
}
cout<<k;



    return 0;
}
