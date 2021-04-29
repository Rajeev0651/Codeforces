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
void printInorder(struct Node *node)
{
  if (node == NULL)
    return;
  printInorder(node->left);
  cout << node->data << ' ';
  printInorder(node->right);
}
void printPreorder(struct Node *node)
{
  if (node == NULL)
    return;
  cout << node->data << ' ';
  printPreorder(node->left);
  printPreorder(node->right);
}
void printPostorder(struct Node *node)
{
  if (node == NULL)
    return;
  printPostorder(node->left);
  printPostorder(node->right);
  cout << node->data << ' ';
}
int searc(int a[], int b, int N)
{
  for (int i = 0; i < N; i++)
    if (a[i] == b)
      return i;
  return -1;
}
void postorder(int in[], int pre[], int N)
{
  int root_index = searc(in, pre[0], N);
  if (root_index != 0)
    postorder(in, pre + 1, root_index);
  if (root_index != N - 1)
    postorder(in + root_index + 1, pre + root_index + 1, N - root_index - 1);
  cout << pre[0] << " ";
}
void solve()
{
  int inorder[6] = {4, 2, 5, 1, 3, 6};
  int preorder[6] = {1, 2, 4, 5, 3, 6};
  postorder(inorder, preorder, 6);
}

int main()
{
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  solve();
  return 0;
}