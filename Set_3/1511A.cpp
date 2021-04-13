#include <bits/stdc++.h>
using namespace std;
int main()
{
  int T;
  cin >> T;
  while (T--)
  {
    int N, upvote = 0;
    cin >> N;
    int A[N];
    for (int i = 0; i < N; i++)
    {
      cin >> A[i];
    }
    for (int i = 0; i < N; i++)
    {
      if (A[i] == 1)
        upvote++;
      if (A[i] == 3)
        upvote++;
    }
    cout << upvote << "\n";
  }
  return 0;
}