#include <iostream>
#include <fstream>
using namespace std;
ifstream f("bac.txt");
ofstream g("bac.txt", ios:: app);

int main()
{
	int n, i, a[100], j;
	f >> n;
	for (i = 0; i < n; i++)
		f >> a[i];

	f.close();
	
	for (i = 1; i < n; i++) 
	{
		for (j = i; j < n; j++)
			g << a[j] << " ";
		for (j = 0; j < i; j++)
			g << a[j] << " ";
		g << '\n';
	}
	return 0;
}

