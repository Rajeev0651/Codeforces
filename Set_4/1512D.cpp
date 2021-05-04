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
  N += 2;
  ll A[N];
  FOR(i, 0, N - 1)
  cin >> A[i];
  ll sum = 0;
  sort(A, A + N);
  for (int i = 0; i < N - 2; i++)
  {
    sum += A[i];
  }
  if (sum == A[N - 2])
  {
    for (int i = 0; i < N - 2; i++)
      cout << A[i] << " ";
    cout << "\n";
    return;
  }
  sum = 0;
  for (int i = 0; i < N - 1; i++)
  {
    sum += A[i];
  }
  for (int i = 0; i < N - 1; i++)
  {
    if ((sum - A[i]) == A[N - 1])
    {
      for (int j = 0; j < N - 1; j++)
      {
        if (j == i)
          continue;
        cout << A[j] << " ";
      }
      cout << "\n";
      return;
    }
  }
  cout << "-1\n";
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