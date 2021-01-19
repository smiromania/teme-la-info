#include <iostream>
#include <cstring>
using namespace std;
char b[256],c[512];
int main()
{
	char a[256];
	int j = -1;
	cin.get(a, 255);
	for (int i = 0; i < strlen(a); i++)
	{
		if(a[i]>='a'&&a[i]<='z')
		if (!b[a[i]])
		{
			c[++j] = a[i];
			c[++j] = ' ';
			b[a[i]]++;
		}
	}
	c[j] = NULL;
	cout << c;

}
