#include <bits/stdc++.h>
using namespace std;
int main()
{
  int T;
  cin >> T;
  while (T--)
  {
    int N, input, x = 0, y = 0;
    vector<int> A;
    cin >> N;
    int flag1[N + 1];
    memset(flag1, 0, sizeof(flag1));
    for (int i = 0; i < N; i++)
    {
      cin >> input;
      if (flag1[input] == 0)
        A.push_back(input);
      else
        A.push_back(-1);
      flag1[input] = 1;
    }
    set<int> s1, s2;
    for (int i = 1; i <= N; i++)
    {
      if (flag1[i] == 0)
      {
        s1.insert(i);
        s2.insert(i);
      }
    }
    for (int i = 0; i < N; i++)
    {
      if (A[i] == -1)
      {
        auto k = s1.begin();
        cout << *k << " ";
        s1.erase(*k);
      }
      else
        cout << A[i] << " ";
    }
    cout << "\n";
    for (int i = 0; i < N; i++)
    {
      if (A[i] == -1)
      {
        auto k = --s2.lower_bound(A[i - 1]);
        cout << *k << " ";
        A[i] = *k;
        s2.erase(*k);
      }
      else
        cout << A[i] << " ";
    }
    cout << "\n";
  }
  return 0;
}