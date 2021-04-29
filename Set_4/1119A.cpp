//Jai Shree Ram
#include <bits/stdc++.h>
using namespace std;

#define l long
#define ll long long
#define FOR(i, a, b) for (auto i = a; i <= b; i++)
#define FOREV(i, a, b) for (auto i = a; i >= b; i--)

void solve()
{
  int N;
  cin >> N;
  int A[N];
  FOR(i, 0, N - 1)
  cin >> A[i];
  int dis = 0, left = 0, right = N - 1;
  int flag = 0;
  while (left < right)
  {
    if (A[left] != A[right])
    {
      dis = right - left;
      break;
    }
    else
      left++;
  }
  left = 0;
  while (left < right)
  {
    if (A[left] != A[right])
    {
      dis = max(right - left, dis);
      break;
    }
    else
      right--;
  }
  cout << dis << "\n";
}

int main()
{
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  solve();
  return 0;
}