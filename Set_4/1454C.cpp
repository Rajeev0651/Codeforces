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
  multiset<int> ms;
  set<int> st;
  int freq[200005];
  memset(freq, 0, sizeof(freq));
  FOR(i, 0, N - 1)
  {
    cin >> A[i];
    ms.insert(A[i]);
    st.insert(A[i]);
  }
  for (int i = 0; i < N - 1; i++)
  {
    if (A[i] == A[i + 1])
    {
      freq[A[i]]++;
    }
  }
  int ans = INT_MAX, val;
  for (auto i = st.begin(); i != st.end(); i++)
  {
    int x = *i;
    val = ms.count(x) + 2 - freq[x];
    if (A[0] == x)
      val--;
    if (A[N - 1] == x)
      val--;
    ans = min(ans, val);
  }
  cout << ans - 1 << "\n";
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