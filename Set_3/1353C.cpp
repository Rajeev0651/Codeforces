#include <bits/stdc++.h>
using namespace std;
int main()
{
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  int T;
  cin >> T;
  while (T--)
  {
    long long int N, ans = 0;
    cin >> N;
    int step = N / 2;
    for (int i = N - 2; i >= 1; i -= 2)
    {
      long long int k = i * 4 + 4;
      ans += k * step--;
    }
    cout << ans << "\n";
  }
  return 0;
}