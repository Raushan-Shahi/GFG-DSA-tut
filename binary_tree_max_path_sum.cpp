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

int maxpathsum(node *root)
{
    if (root == NULL)
        return 0;
    int left_sum = maxpathsum(root->left);
    int right_sum = maxpathsum(root->right);

    return root->data + max(left_sum, right_sum);
}

int main()
{
    node *root = new node(-10);
    root->left = new node(9);
    root->right = new node(20);
    root->right->left = new node(15);
    root->right->right = new node(7);

    int res = maxpathsum(root);
    cout << res;
    return 0;
}