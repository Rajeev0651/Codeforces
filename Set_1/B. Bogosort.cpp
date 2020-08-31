#include <bits/stdc++.h>
using namespace std;
int main()
{
  int T;
  cin >> T;
  while (T--)
  {
    int N, x;
    cin >> N;
    vector<int> A;
    for (int i = 0; i < N; i++)
    {
      cin >> x;
      A.push_back(x);
    }
    sort(A.begin(), A.end(), greater<int>());
    for (auto i : A)
      cout << i << " ";
    cout << "\n";
  }
  return 0;
}