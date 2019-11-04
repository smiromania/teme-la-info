#include <iostream>
#include <string.h>

using namespace std;

int main()
{

	char s[21],vocale[] = "aeiou",doarVocale[20];
	cin.get(s,20);

	int i,n = strlen(s),index = 0;
	for (i = 0; i < n; i++) {
		if (strchr(vocale,s[i])) {
			doarVocale[index] = s[i];
			index++;
		}
	}
	doarVocale[index] = '\0';
	cout<<doarVocale;

	return 0;
}
