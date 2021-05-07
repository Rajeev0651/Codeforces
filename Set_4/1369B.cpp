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
  string S;
  cin >> S;
  int left = N, right = N;
  for (int i = 0; i < N; i++)
  {
    if (S[i] == '1')
    {
      left = i;
      break;
    }
  }
  for (int i = N - 1; i > left; i--)
  {
    if (S[i] == '0')
    {
      right = i;
      break;
    }
  }
  //cout << left << " " << right << "\n";
  if (left < N && right < N)
  {
    string P;
    P += S.substr(0, left);
    P += "0";
    P += S.substr(right + 1);
    cout << P << "\n";
  }
  else
    cout << S << "\n";
}

int main()
{
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  int T;
  cin >> T;
  while (T--)
  {
    solve();
  }
  return 0;
}