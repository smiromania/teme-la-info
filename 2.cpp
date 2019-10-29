#include <fstream>
#include <string.h>
#include <iostream>
using namespace std;
ofstream fout("t.in");
int main()
{
  char s[255];
  int i, k = 0;
  char v[] = "AEIOUaeiou";
  cin.get(s, 255);
  fout << s << endl;
  fout.close();
  ifstream fin("t.in");
  while (fin >> s) {
    if (strchr(v, s[0]) && strchr(v, s[strlen(s) - 1]))
      k++;
  }
  cout << k;
  fin.close();
}
