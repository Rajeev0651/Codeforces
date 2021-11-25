#include <bits/stdc++.h>
using namespace std;
int main()
{
  int N;
  string S;
  cin >> N >> S;
  string K[10];
  K[2] = "2";
  K[3] = "3";
  K[4] = "322";
  K[5] = "5";
  K[6] = "53";
  K[7] = "7";
  K[8] = "7222";
  K[9] = "7332";
  string P;
  for (int i = 0; i < N; i++)
  {
    if (S[i] != '0' && S[i] != '1')
    {
      P = P +K[S[i]-48];
    }
  }
  sort(P.begin(), P.end(), greater<int>());
  cout<<P;
  return 0;
}