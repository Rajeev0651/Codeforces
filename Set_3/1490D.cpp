#include <bits/stdc++.h>
using namespace std;
int solve(int A[], int N, int visited[], int ans[], int depth, int index)
{
  for (int i = index + 1; i < N; i++)
  {
  }
}
int main()
{
  int T;
  cin >> T;
  while (T--)
  {
    int N;
    cin >> N;
    int A[N], visited[N], ans[N], depth = 0;
    memset(visited, 0, sizeof(visited));
    for (int i = 0; i < N; i++)
      cin >> A[i];
    solve(A, N, visited, ans, depth, -1);
  }
}