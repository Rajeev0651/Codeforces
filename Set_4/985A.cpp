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
  N /= 2;
  int A[N];
  FOR(i, 0, N - 1)
  cin >> A[i];
  int val1 = 0, val2 = 0;
  sort(A, A + N);
  for (int i = 0, j = 1; i < N; i++, j += 2)
  {
    val1 += abs(j - A[i]);
  }
  for (int i = 0, j = 2; i < N; i++, j += 2)
  {
    val2 += abs(j - A[i]);
  }
  cout << min(val1, val2) << "\n";
}

int main()
{
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  int T;
  solve();

  return 0;
}