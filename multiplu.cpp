#include <iostream>
using namespace std;

int multiplu(int a, int k)
{

	if (a>0)
		return (((a-1)/k)+1)*k;
	else
		return (a/k)*k;
}


int main()
{


	int x,y,z;
	cin>>x>>y>>z;

	int intre=multiplu(x,z);

	if (intre<=y)
		cout<<"DA";
	else
		cout<<"NU";


	return 0;
}
