#include <iostream>
#include <string.h>
using namespace std;

int main()
{

  char s[256];
  int i, j, gasit;
  cin.get(s, 256);
  for (i = 0; i < strlen(s); i++)
    if (s[i] >= 'a' && s[i] <= 'z') {
      gasit = 0;
      for (j = 0; j < i; j++)
        if (s[i] == s[j])
          gasit = 1;
      if (!gasit)
        cout << s[i] << " ";
    }
}
