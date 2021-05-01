//Jai Shree Ram
#include <bits/stdc++.h>
using namespace std;

#define l long
#define ll long long
#define FOR(i, a, b) for (auto i = a; i <= b; i++)
#define FOREV(i, a, b) for (auto i = a; i >= b; i--)

void solve()
{
  ll N, G;
  cin >> N >> G;
  ll A[N][2], B[N];
  for (int i = 0; i < N; i++)
  {
    cin >> A[i][0] >> A[i][1];
  }
  for (int i = 0; i < N; i++)
  {
    B[i] = A[i][0] * 60 + A[i][1];
  }
  ll h, m;
  if (B[0] >= G + 1)
  {
    h = 0, m = 0;
    cout << h << " " << m << "\n";
    return;
  }
  ll x, flag = 0;
  for (int i = 1; i < N; i++)
  {
    x = B[i - 1] + 2 + (G * 2);
    if (x <= B[i])
    {
      flag = 1;
      h = (B[i - 1] + 1 + G) / 60;
      m = (B[i - 1] + 1 + G) % 60;
      break;
    }
  }
  if (flag == 1)
    cout << h << " " << m << "\n";
  else
    cout << (B[N - 1] + 1 + G) / 60 << " " << (B[N - 1] + 1 + G) % 60 << "\n";
}

int main()
{
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  solve();

  return 0;
}