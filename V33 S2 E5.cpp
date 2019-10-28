#include <iostream>
#include <string.h>
using namespace std;
int nrCuv(char s[])
{
    int k=0;
    char *p;
    p=strtok(s," ");
    while(p)
    {
        k=k+1;
        p=strtok(NULL," ");
    }
    return k;
}
void afisCons(char s[])
{
    int v[26]={0},n=strlen(s);
    char voc[]="AEIOU ";
    for(int i=0;i<n;i++)
        if(!strchr(voc,s[i]))
            v[s[i]-65]++;
    for(int i=0;i<26;i++)
        if(v[i]>0)
            cout<<(char)(i+65)<<' ';
}
int main()
{
    char s1[256],s2[256];
    cin.get(s1,256);
    strcpy(s2,s1);
    cout<<nrCuv(s1)<<endl;
    strcpy(s1,s2);
    afisCons(s1);
    return 0;
}
