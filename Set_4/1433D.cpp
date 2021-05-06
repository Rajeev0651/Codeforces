//Jai Shree Ram
#include <bits/stdc++.h>
using namespace std;

#define l long
#define ll long long
#define FOR(i, a, b) for (auto i = a; i <= b; i++)
#define FOREV(i, a, b) for (auto i = a; i >= b; i--)

bool cmp(pair<int, int> &a, pair<int, int> &b)
{
  return a.second > b.second;
}
void solve()
{
  int N;
  cin >> N;
  int A[N], ans1[N], ans2[N];
  string res = "YES";
  set<int> st;
  FOR(i, 0, N - 1)
  {
    cin >> A[i];
    st.insert(A[i]);
  }
  if (st.size() == 1)
    res = "NO";
  if (res == "NO")
  {
    cout << "NO\n";
    return;
  }
  cout << "YES\n";
  int count = 0, val = A[0], next;
  for (int i = 1; i < N; i++)
  {
    if (A[i] != val)
    {
      next = i + 1;
      ans1[count++] = i + 1;
    }
  }
  for (int i = 0; i < count; i++)
    cout << 1 << " " << ans1[i] << "\n";
  count = 0;
  for (int i = 1; i < N; i++)
  {
    if (A[i] == val)
    {
      ans2[count++] = i + 1;
    }
  }
  for (int i = 0; i < count; i++)
  {
    cout << next << " " << ans2[i] << "\n";
  }
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