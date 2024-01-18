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

// preorder -> Root, Left, Right
void preorder(node *root)
{
    if (root == NULL)
    {
        return;
    }
    cout << root->data << "  ";
    preorder(root->left);
    preorder(root->right);
}

// inorder -> Left, Root, Right
void inorder(node *root)
{
    if (root == NULL)
        return;

    inorder(root->left);
    cout << root->data << "  ";
    inorder(root->right);
}


// postorder-> Left, Right, Root
void postorder(node* root){
    if(root == NULL)
        return;
    
    postorder(root->left);
    postorder(root->right);
    cout << root->data << "  ";
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

    preorder(root);
    cout << endl;
    inorder(root);
    cout << endl;
    postorder(root);
    return 0;
}