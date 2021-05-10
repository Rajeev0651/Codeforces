//Jai Shree Ram
#include <bits/stdc++.h>
using namespace std;

#define l long
#define ll long long
#define FOR(i, a, b) for (auto i = a; i <= b; i++)
#define FOREV(i, a, b) for (auto i = a; i >= b; i--)

void solve()
{
  int N, M, H;
  cin >> N >> M >> H;
  int A[N][M];
  int front[M], left[N];
  for (int i = 0; i < M; i++)
    cin >> front[i];
  for (int i = 0; i < N; i++)
    cin >> left[i];
  reverse(left, left + N);
  for (int i = 0; i < N; i++)
  {
    for (int j = 0; j < M; j++)
      cin >> A[i][j];
  }
  for (int i = 0; i < M; i++)
  {
    for (int j = 0; j < N; j++)
    {
      if (A[N - j - 1][i] != 0)
      {
        A[N - j - 1][i] = min(front[i], left[j]);
      }
    }
  }
  for (int i = 0; i < N; i++)
  {
    for (int j = 0; j < M; j++)
    {
      cout << A[i][j] << " ";
    }
    cout << "\n";
  }
}

int main()
{
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  solve();
  return 0;
}