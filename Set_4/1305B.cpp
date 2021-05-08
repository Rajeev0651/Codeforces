//Jai Shree Ram
#include <bits/stdc++.h>
using namespace std;

#define l long
#define ll long long
#define FOR(i, a, b) for (auto i = a; i <= b; i++)
#define FOREV(i, a, b) for (auto i = a; i >= b; i--)

void solve()
{
  string S;
  cin >> S;
  int left = 0, right = S.length() - 1;
  int len = 0, a = 0, b = 0;
  while (left < right)
  {
    if (S[left] == '(')
      a = 1;
    if (S[right] == ')')
      b = 1;
    if (a == 1 && b == 1)
    {
      len++;
      a = 0;
      b = 0;
    }
    if (a == 0)
      left++;
    if (b == 0)
      right--;
  }
  if (len == 0)
  {
    cout << "0\n";
    return;
  }
  cout << 1 << "\n";
  cout << len * 2 << "\n";
  int x = S.length(), count = len;
  for (int i = 0; i < x; i++)
  {
    if (count == 0)
      break;
    if (S[i] == '(')
    {
      cout << i + 1 << " ";
      count--;
    }
  }
  count = len;
  vector<int> k;
  for (int i = x; i >= 0; i--)
  {
    if (count == 0)
      break;
    if (S[i] == ')')
    {
      k.push_back(i + 1);
      count--;
    }
  }
  sort(k.begin(), k.end());
  for (auto &i : k)
    cout << i << " ";
  cout << "\n";
}

int main()
{
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  solve();

  return 0;
}