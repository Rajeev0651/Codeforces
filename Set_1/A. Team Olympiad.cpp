#include <bits/stdc++.h>
using namespace std;
int main()
{
  int N, d;
  cin >> N;
  vector<pair<int, int>> A;
  for (int i = 1; i <= N; i++)
  {
    cin >> d;
    A.push_back(make_pair(d, i));
  }
  sort(A.begin(), A.end());
  int x = 0, y = 0, z = 0;
  for (int i = 0; i < N; i++)
  {
    if (A[i].first == 1)
    {
      x = i;
      break;
    }
  }
  for (int i = 0; i < N; i++)
  {
    if (A[i].first == 2)
    {
      y = i;
      break;
    }
  }
  for (int i = 0; i < N; i++)
  {
    if (A[i].first == 3)
    {
      z = i;
      break;
    }
  }
  int a = x, b = y, c = z, count = 0;
  while (A[x].first == 1 && A[y].first == 2 && A[z].first == 3)
  {
    count++;
    x++;
    y++;
    z++;
    if (x > N || y > N || z > N)
      break;
  }
  cout << count << "\n";
  while (count--)
  {
    cout << A[a++].second << " " << A[b++].second << " " << A[c++].second << "\n";
  }
  return 0;
}