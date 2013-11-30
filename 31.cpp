#include <algorithm>
#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <string>
#include <cstring>

using namespace std;

int dp[8][201];

int main()
{
 // ios::sync_with_stdio(false);
  memset(dp,0,sizeof dp);

  int a[] = {1,2,5,10,20,50,100,200};
  for(int i = 0; i < 8; i++)
  {
    for(int j = 0; j <= 200; j++)
    {
      for(int k = 0; k * a[i] <= j; k++)
      {
        if(j - a[i]*k == 0)
        {
          dp[i][j] += 1;
        }
        if(i > 0 && j-a[i]*k > 0)
        {
          dp[i][j] += dp[i-1][j-a[i]*k];
        }
      }
    }
  }/*
  for(int i = 0; i < 8; i++)
  {
    for(int j = 0; j <= 200; j++)
    {
      cout << i << ' ' << j << " " << dp[i][j] << endl;
    }
  }*/
  cout <<  dp[7][200] << endl;

  return 0;
}
