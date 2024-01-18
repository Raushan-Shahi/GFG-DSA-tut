#include <iostream>
#include <bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    struct node *left;
    struct node *right;

    node(int val)
    {
        data = val;
        left = right = NULL;
    }
};

vector<vector<int>> levelorder(node *root)
{
    vector<vector<int>> ans;
    if (root == NULL)
        return ans;

    queue<node *> q;
    q.push(root);

    while (!q.empty())
    {
        int size = q.size();
        vector<int> level;
        for (int i = 0; i < size; i++)
        {
            node *root = q.front();
            q.pop();
            if (root->left != NULL)
                q.push(root->left);
            if (root->right != NULL)
                q.push(root->right);
            level.push_back(root->data);
        }
        ans.push_back(level);
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
    root->right->left = new node(6);
    root->right->right = new node(7);

    vector<vector<int>> v = levelorder(root);
    for (int i = 0; i < v.size(); i++)
    {
        for (int j = 0; j < v[i].size(); j++)
            cout << v[i][j] << "  ";
        cout << endl;
    }

    return 0;
}