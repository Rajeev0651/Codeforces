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
  {
    cin >> A[i];
  }
  int mxval = *max_element(A, A + N);
  int mnval = *min_element(A, A + N);
  int flag;
  if (mxval % 2 == mnval % 2)
  {
    flag = (mxval - mnval) / 2;
    for (int i = 0; i < N; i++)
    {
      if (A[i] != mxval && A[i] != mnval && A[i] != mnval + flag)
      {
        cout << "-1\n";
        return;
      }
    }
    cout << flag << "\n";
  }
  else
  {
    flag = mxval - mnval;
    for (int i = 0; i < N; i++)
    {
      if (A[i] != mxval && A[i] != mnval)
      {
        cout << "-1\n";
        return;
      }
    }
    cout << flag << "\n";
  }
}

int main()
{
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  solve();
  return 0;
}