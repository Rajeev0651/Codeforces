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
  string ans = "YES";
  cin >> N;
  ll A[N], B[N];
  FOR(i, 0, N - 1)
  cin >> A[i];
  sort(A, A + N);
  if (A[N - 2] + A[N - 3] <= A[N - 1])
    cout << "NO\n";
  else
  {
    cout << "YES\n";
    cout << A[N - 2] << " " << A[N - 1] << " " << A[N - 3] << " ";
    for (int i = N - 4; i >= 0; i--)
      cout << A[i] << " ";
    cout << "\n";
  }
}

int main()
{
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  solve();

  return 0;
}