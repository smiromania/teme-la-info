#include <iostream>
#include <string.h>
using namespace std;

int main(){

char a[51],b[51];
cin>>a>>b;

if (strlen(a) != strlen(b))
        cout<<"Cuvintele nu sunt anagrame\n";
else{

        int i,j;
        for (i = 0; i < strlen(a);i++)
                for (j = i + 1; j < strlen(a); j++)
                        if (a[i] > a[j]){
                                char aux = a[i];
                                a[i] = a[j];
                                a[j] = aux;
                        }
        for (i = 0; i < strlen(b); i++)
                for (j = i + 1; j < strlen(b); j++)
                        if (b[i] > b[j]){
                                char aux = b[i];
                                b[i] = b[j];
                                b[j] = aux;
                        }
        if (strcmp(a,b) == 0)
                cout<<"Cuvintele sunt anagrame\n";
        else
                cout<<"Cuvintele nu sunt anagrame\n";



}

return 0;
}
