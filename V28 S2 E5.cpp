#include <iostream>
#include <string.h>
using namespace std;

int main()
{
  char s[100], v[] = "aeiou";
  int i, j;
  cin >> s;

  for (i = 0; i < strlen(v); i++) {
        if (strchr(s, v[i]) == 0) {
                continue;
        }
        for (j = 0; j < strlen(s); j++) {
                if (s[j] != v[i]) {
                        cout << s[j];
                }

        }
        cout << endl;
  }

  return 0;
}
