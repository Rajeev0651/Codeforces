//Jai Shree Ram
#include <bits/stdc++.h>
using namespace std;

#define l long
#define ll long long
#define FOR(i, a, b) for (auto i = a; i <= b; i++)
#define FOREV(i, a, b) for (auto i = a; i >= b; i--)

void solve()
{
  ll N, count = 0, flag = 0;
  set<int> st;
  cin >> N;
  if (N % 10 == 0)
  {
    count++;
    N += 1;
  }

  while (1)
  {
    if (N == 1 && flag == 1)
    {
      break;
    }
    if (N == 1)
      flag = 1;
    if (N % 10 != 0)
    {
      if (st.find(N) != st.end())
        break;
      //cout << N << "\n";
      st.insert(N);
      count++;
      N++;
    }
    else
    {
      while (N % 10 == 0)
      {
        //cout << N << "\n";
        N /= 10;
      }
    }
  }
  cout << count << "\n";
}

int main()
{
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  solve();
  return 0;
}