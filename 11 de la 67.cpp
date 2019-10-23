#include <iostream>
#include <string.h>

#include <stdlib.h>
using namespace std;

int main()
{
  char text[1000],sep[]=" ",*p; char max[100]="";
char min[100]=""; int c, d, k=0;
   cin.get(text,999);
  p=strtok(text,sep);
  strcpy(min,p);
        while(p)
        {
          k++;
         if(strlen(p)>strlen(max)) {strcpy(max,p); c=k;}
         if(strlen(p)<strlen(min)) {strcpy (min,p); d=k; }
         p=strtok(NULL,sep);
        }
   cout<<"cel mai lung cuvant: "<<max<<" al "<<c<<" lea cuvant"<<endl;
   cout<<"cel mai scurt cuvant: "<<min<<" al "<<d<<" lea cuvant";

}
