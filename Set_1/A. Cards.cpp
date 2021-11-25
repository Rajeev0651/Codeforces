#include <bits/stdc++.h>
using namespace std;
int main()
{
  int N;
  string S;
  cin >> N >> S;
  int z = 0, e = 0, r = 0, o = 0, n = 0;
  for (int i = 0; i < N; i++)
  {
    if (S[i] == 'z')
      z++;
    if (S[i] == 'e')
      e++;
    if (S[i] == 'r')
      r++;
    if (S[i] == 'o')
      o++;
    if (S[i] == 'n')
      n++;
  }
  int one = 0, minm, zero = 0;
  minm = min(o, min(n, e));
  one = minm;
  o -= minm;
  e -= minm;
  minm = min(z, min(e, min(r, o)));
  zero = minm;
  for (int i = 1; i <= one; i++)
    cout << "1 ";
  for (int i = 1; i <= zero; i++)
    cout << "0 ";
  return 0;
}