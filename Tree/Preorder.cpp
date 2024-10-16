#include <bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    node *left, *right;
    node(int val)
    {
        data = val;
        left = right = nullptr;
    }
};
void preorder(node *root, vector<int> &ans)
{
    if (root == nullptr)
        return;
    ans.push_back(root->data);
    preorder(root->right, ans);
    preorder(root->left, ans);
}
vector<int> preOrder(node *root)
{
    vector<int> ans;
    preorder(root, ans);
    return ans;
}
int main()
{
    node *root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    root->left->right = new node(5);
    vector<int> result = preOrder(root);
    for (auto it : result)
    {
        cout << it << " ";
    }
    return 0;
}
