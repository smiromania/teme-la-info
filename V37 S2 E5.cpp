#include <iostream>
#include <string.h>

using namespace std;
int main()
 {
  char a[255];
  int i;
  cin.get(a, 255);
  a[0] = a[0] - 32;
  a[strlen(a) - 1] -= 32;
  for (i = 1; i <= strlen(a) - 2; i++)
    if (a[i] != ' ' && (a[i - 1] == ' ' || a[i + 1] == ' '))
      a[i] -= 32;
  cout << a;
}
