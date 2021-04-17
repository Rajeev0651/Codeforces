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
    int A[N];
    for (int i = 0; i < N; i++)
      cin >> A[i];
    for (int i = 0; i < N; i++)
    {
      if (A[i] % 2 == 0)
        cout << A[i] << " ";
    }
    for (int i = 0; i < N; i++)
    {
      if (A[i] % 2 == 1)
        cout << A[i] << " ";
    }
    cout << "\n";
  }
  return 0;
}