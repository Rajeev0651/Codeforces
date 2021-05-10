//Jai Shree Ram
#include <bits/stdc++.h>
using namespace std;

#define l long
#define ll long long
#define FOR(i, a, b) for (auto i = a; i <= b; i++)
#define FOREV(i, a, b) for (auto i = a; i >= b; i--)

void solve()
{
  int N, M, c;
  cin >> N >> M;
  vector<int> A;
  FOR(i, 0, N - 1)
  {
    cin >> c;
    A.push_back(c);
  }
  vector<int> B;
  B.assign(A.begin(), A.begin() + 1);
  int presum[N];
  memset(presum, 0, N - 1);
  presum[0] = A[0];
  for (int i = 1; i < N; i++)
  {
    presum[i] = presum[i - 1] + A[i];
  }
  int sum, count = 0;
  int ans[N];
  for (int i = 0; i < N; i++)
  {
    count = 0;
    if (presum[i] > M)
    {
      sum = presum[i];
      vector<int> B;
      B.assign(A.begin(), A.begin() + i);
      sort(B.begin(), B.end(), greater<int>());
      for (auto &j : B)
      {
        sum -= j;
        count++;
        if (sum <= M)
        {
          ans[i] = count;
          break;
        }
      }
    }
    else
      ans[i] = count;
  }
  for (int i = 0; i < N; i++)
  {
    cout << ans[i] << " ";
  }
  cout << "\n";
}

int main()
{
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  solve();

  return 0;
}