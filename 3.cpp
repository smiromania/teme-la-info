#include <iostream>

#include <string.h>

using namespace std;

int main()

{

char text[255], voc[]="aeiou", *p;

int cuvinte=0, cuvinte_cu_vocale=0;

cout<<"TEXT:"; cin.get(text,255);

p=strtok(text," ");

while(p!=NULL)

{

 cuvinte++;

 if(strchr(voc,p[0]))

  cuvinte_cu_vocale++;

 p=strtok(NULL," ");

}

cout<<cuvinte<<' '<<cuvinte_cu_vocale;

return 0;

}
