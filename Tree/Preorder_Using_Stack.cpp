#include <bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    node *left, *right;
    node(int val)
    {
        data = val;
        left = right = NULL;
    }
};
vector<int>Preorder(node *root)
{
    vector<int> ans;
    stack<node *> s;
    s.push(root);
    while (!s.empty())
    {
        node *temp = s.top();
        s.pop();
        ans.push_back(temp->data);
        if (temp->right)
            s.push(temp->right);
        if (temp->left)
            s.push(temp->left);
    }
    return ans;
}
int main()
{
    node *root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    root->left->right = new node(5);
    vector<int> result = Preorder(root);
    for (auto i : result)
        cout << i << " ";
    return 0;
}
