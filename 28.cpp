#include <algorithm>
#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cctype>
#include <string>
#include <cstring>
#include <ctime>

using namespace std;

int main()
{
  int cul = 1;
  int res = 1;
  //cout << res << endl;
  for(int i = 1; i <= 500; i++)
  {
    int k = 2 * i;
    for(int j = 1; j <= 4; j++)
    {
      res += k;
      cul += res;
    }
  }
  cout << cul << endl;
  return 0;
}
