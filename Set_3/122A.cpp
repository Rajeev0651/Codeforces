#include <bits/stdc++.h>
using namespace std;
int main()
{
  int A[14] = {4, 7, 44, 47, 74, 77, 444, 447, 474, 477, 744, 747, 774, 777};
  int N;
  string ans = "NO";
  cin >> N;
  for (int i = 0; i < 14; i++)
  {
    if (N % A[i] == 0)
    {
      ans = "YES";
      break;
    }
  }
  cout << ans << "\n";
  return 0;
}
