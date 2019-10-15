#include <iostream>
using namespace std;

int nr(int n, int c){
    int t = 0;
    while(n>0){
        if(n%10 == c) t++;
        n=n/10;
    }
    return t;
}

int main(){
    int n, i, d = 0;
    cin>>n;
    for(i=0;i<=9;i++)
        if(nr(n, i)!=0)d++;
    cout<<d;
}
