#include <iostream>
using namespace std;

void inv(long a, long& b)
{
	b = 0;
	while (a)
	{
		b = b * 10 + a % 10;
		a = a / 10;
	}
}

int main()
{
	long a, b,n;
	cin >> n;
	a = n;
	long ainv, binv;
	b = n;
	inv(a, ainv);
	inv(b, binv);
	if (a == ainv)
		cout << a;
	else
	while(a!=ainv&&b!=binv) {
		a--;
		b++;
		inv(a, ainv);
		inv(b, binv);
		if (a == ainv)
			cout << a;
		else if (b == binv)
			cout << b;

	}


}
