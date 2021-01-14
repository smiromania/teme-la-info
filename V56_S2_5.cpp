#include <iostream>
using namespace std;

int main() {

	int n, k, a[25][25], i, j;
	cin >> n >> k;

	for (i = 0; i < n; i++)
		for (j = 0; j < n; j++)
			if (i < k && j < k)
				a[i][j] = 1;
			else if (i < k)
				a[i][j] = 2;
			else if (j < k)
				a[i][j] = 3;
			else
				a[i][j] = 4;

	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++)
			cout << a[i][j] << " ";
		cout << '\n';
	}




	return 0;
}