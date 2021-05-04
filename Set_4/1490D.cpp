//Jai Shree Ram
#include <bits/stdc++.h>
using namespace std;

#define l long
#define ll long long
#define FOR(i, a, b) for (auto i = a; i <= b; i++)
#define FOREV(i, a, b) for (auto i = a; i >= b; i--)

struct Node
{
  int data;
  struct Node *left, *right;
  Node(int data)
  {
    this->data = data;
    left = right = NULL;
  }
};
void fun(struct Node *node, int left, int right, int A[], int N)
{
  if (left > right)
    return;
  int val = *max_element(A + left, A + right + 1);
  int index = max_element(A + left, A + right + 1) - &A[0];
  node->data = val;
  if ((index - 1) >= left)
  {
    node->left = new Node(101);
    fun(node->left, left, index - 1, A, N);
  }
  if ((index + 1) <= right)
  {
    node->right = new Node(101);
    fun(node->right, index + 1, right, A, N);
  }
}

void level(struct Node *node, int ans[], int pos)
{
  if (node == NULL || node->data == 101)
  {
    return;
  }
  ans[node->data] = pos;
  level(node->left, ans, pos + 1);
  level(node->right, ans, pos + 1);
}
void solve()
{
  int N;
  cin >> N;
  int A[N], ans[101];
  FOR(i, 0, N - 1)
  cin >> A[i];
  struct Node *root = new Node(101);
  fun(root, 0, N - 1, A, N);
  level(root, ans, 1);
  for (int i = 0; i < N; i++)
  {
    cout << ans[A[i]] - 1 << " ";
  }
  cout << "\n";
  //cout << root->data << " " << root->left->data << " " << root->right->data << " ";
  //cout << root->left->left->data << " " << root->left->right->data << " " << root->right->left->data << " " << root->right->right->data << "\n";
}

int main()
{
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  int T;
  cin >> T;
  while (T--)
  {
    solve();
  }
  return 0;
}