#include <iostream>
#include <string.h>
using namespace std;

int main()
{

  char s[256];
  int i, j, cacat;
  cin.get(s, 256);
  for (i = 0; i < strlen(s); i++)
    if (s[i] >= 'a' && s[i] <= 'z') {
      cacat = 0;
      for (j = 0; j < i; j++)
        if (s[i] == s[j])
          cacat = 1;
      if (!cacat)
        cout << s[i] << " ";
    }
}
