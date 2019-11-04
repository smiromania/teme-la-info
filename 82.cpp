#include <iostream>
#include <string.h>
using namespace std;

int main()
{

	char c[40],vocale[] = "aeiou";
	cin.get(c,40);
	int ok = 0,i,n = strlen(c);
	for (i = 0; i < n; i++) {
		if (strchr(vocale,c[i])) {
			cout<<c[i]<<" ";
			ok = 1;
		}
	}

	if (ok == 0)
		cout<<"fara vocale";

	return 0;
}
