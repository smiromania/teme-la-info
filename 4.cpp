#include <iostream>
#include <string.h>
using namespace std;

int main() {

	char c[201],d[201],vocale[]="aeiou";
	cin.getline(c,200);
	cin.getline(d,200);

	int i,n = strlen(c);

	for (i = 0; i < n; i++)

		if ((strchr(vocale,c[i]) || NULL) ^
				(strchr(vocale,d[i]) || NULL)) {

			cout<<'?';
		} else {
			if (strchr(vocale,c[i]))
				cout<<'*';
			else
				cout<<'#';
		}

	return 0;
}
