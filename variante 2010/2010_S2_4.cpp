#include <iostream>
#include <fstream>
using namespace std;
ifstream f("BAC.TXT");

int main()
{
	long x, y, z;
	f >> x >> y;
	if (x != y)
		cout << x;
	while (f >> z)
	{
		if (y != x && z != y)
			cout << y<<" ";
		x = y;
		y = z;
	}
	if (x != y)
		cout << y;
}

