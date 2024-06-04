#include <iostream>
#include <queue>
using namespace std;
class Node {
public:
  int data;
  Node *left, *right;
  Node(int value) {
    data = value;
    left = right = NULL;
  }
};
Node *Binarytree() {

  int x;
  cin >> x;
  if (x == -1)
    return NULL;
  Node *temp = new Node(x);
  cout << "Enter the left child of " << x << endl;
  temp->left = Binarytree();
  cout << "Enter the right child of " << x << endl;
  temp->right = Binarytree();
  return temp;
}

void preorder(Node *root) {
  if (root == NULL)
    return;
  cout << root->data << " ";
  preorder(root->left);
  preorder(root->right);
}
void inorder(Node *root) {
  if (root == NULL)
    return;

  inorder(root->left);
  cout << root->data << " ";
  inorder(root->right);
}
void postorder(Node *root) {
  if (root == NULL)
    return;

  postorder(root->left);
  postorder(root->right);
  cout << root->data << " ";
}
vector<int> levelorder(Node *root) {
  vector<int> ans;
  queue<Node *> q;
  q.push(root);
  Node *temp;
  while (!q.empty()) {
    temp = q.front();
    q.pop();
    ans.push_back(temp->data);
    if (temp->left)
      q.push(temp->left);
    if (temp->right)
      q.push(temp->right);
  }
  return ans;
}

int main() {

  cout << "enter the root node ";
  Node *root;
  root = Binarytree();
  cout << "preorder traversal is :";
  preorder(root);
  cout << endl;
  cout << "inorder traversal is :";
  inorder(root);
  cout << endl;
  cout << "postorder traversal is :";
  postorder(root);
  vector<int> v;
  cout << "levelorder traversal is :";
  v = levelorder(root);
  for (int i = 0; i < v.size(); i++)
    cout << v[i] << " ";
}
