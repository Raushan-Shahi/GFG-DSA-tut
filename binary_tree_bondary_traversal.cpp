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

bool isleaf(node *root)
{

    if (root->left == NULL && root->right == NULL)
        return true;
    return false;
}

void addleftboundary(node *root, vector<int> &res)
{
    node *cur = root->left;
    while (cur)
    {
        if (!isleaf(cur))
            res.push_back(cur->data);
        if (cur->left)
            cur = cur->left;
        else
            cur = cur->right;
    }
}

void addrightboundary(node *root, vector<int> &res)
{
    node *cur = root->right;
    vector<int> tmp;
    while (cur)
    {
        if (!isleaf(cur))
            tmp.push_back(cur->data);
        if (cur->right)
            cur = cur->right;
        else
            cur = cur->left;
    }
    for (int i = tmp.size() - 1; i >= 0; --i)
    {
        res.push_back(tmp[i]);
    }
}

void addleaves(node *root, vector<int> &res)
{
    if (isleaf(root))
    {
        res.push_back(root->data);
        return;
    }
    if (root->left)
        addleaves(root->left, res);
    if (root->right)
        addleaves(root->right, res);
}

vector<int> printboundary(node *root)
{
    vector<int> res;
    if (!root)
        return res;
    if (!isleaf(root))
        res.push_back(root->data);

    addleftboundary(root, res);
    addleaves(root, res);
    addrightboundary(root, res);
    return res;
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

    vector<int> res = printboundary(root);
    for (int i = 0; i < res.size(); i++)
        cout << res[i] << " ";

    return 0;
}
