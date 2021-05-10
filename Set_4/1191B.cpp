//Jai Shree Ram
#include <bits/stdc++.h>
using namespace std;

#define l long
#define ll long long
#define FOR(i, a, b) for (auto i = a; i <= b; i++)
#define FOREV(i, a, b) for (auto i = a; i >= b; i--)

void solve()
{
  string S[3];
  cin >> S[0] >> S[1] >> S[2];
  //koutsu
  int count1 = 1;
  for (int i = 0; i < 2; i++)
  {
    for (int j = i + 1; j < 3; j++)
    {
      if (S[i] == S[j])
      {
        count1++;
        break;
      }
    }
  }
  //shuntsu
  int f1[10], f2[10], f3[10];
  memset(f1, 0, sizeof(f1));
  memset(f2, 0, sizeof(f2));
  memset(f3, 0, sizeof(f3));
  for (int i = 0; i < 3; i++)
  {
    if (S[i][1] == 'p')
    {
      f1[S[i][0] - 48] = 1;
    }
    else if (S[i][1] == 'm')
    {
      f2[S[i][0] - 48] = 1;
    }
    else if (S[i][1] == 's')
    {
      f3[S[i][0] - 48] = 1;
    }
  }
  int c = 0, val;
  for (int i = 1; i <= 9; i++)
  {
    if (f1[i] == 1)
      val = 1;
    if (f2[i] == 1)
      val = 1;
    if (f3[i] == 1)
      val = 1;
  }
  c = max(c, val);
  for (int i = 1; i <= 8; i++)
  {
    if ((f1[i] == f1[i + 1]) && f1[i] == 1)
      val = 2;
    if ((f2[i] == f2[i + 1]) && f2[i] == 1)
      val = 2;
    if ((f3[i] == f3[i + 1]) && f3[i] == 1)
      val = 2;
  }
  c = max(c, val);
  for (int i = 1; i <= 7; i++)
  {
    if ((f1[i] == f1[i + 2]) && f1[i] == 1)
      val = 2;
    if ((f2[i] == f2[i + 2]) && f2[i] == 1)
      val = 2;
    if ((f3[i] == f3[i + 2]) && f3[i] == 1)
      val = 2;
  }
  c = max(c, val);
  for (int i = 1; i <= 7; i++)
  {
    if ((f1[i] == f1[i + 1]) && (f1[i] == f1[i + 2]) && (f1[i] == 1))
      val = 3;
    if ((f2[i] == f2[i + 1]) && (f2[i] == f2[i + 2]) && (f2[i] == 1))
      val = 3;
    if ((f3[i] == f3[i + 1]) && (f3[i] == f3[i + 2]) && (f3[i] == 1))
      val = 3;
  }
  c = max(c, val);
  cout << min(3 - c, 3 - count1) << "\n";
}

int main()
{
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  solve();
  return 0;
}