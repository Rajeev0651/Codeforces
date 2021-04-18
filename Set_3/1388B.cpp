#include <bits/stdc++.h>
using namespace std;
int main()
{
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  int T;
  cin >> T;
  while (T--)
  {
    int N;
    cin >> N;
    vector<char> C(N, '9');
    int K = N / 4, count = N - 1;
    for (int i = N - 1, j = K; i >= 0, j > 0; i--, j--)
    {
      C[i] = '8';
      count = i - 1;
    }
    int x = N % 4;
    if (x != 0)
    {
      C[count] = '8';
    }
    for (int i = 0; i < N; i++)
      cout << C[i];
    cout << "\n";
  }

  return 0;
}