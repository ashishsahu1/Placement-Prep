#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int data)
    {
        this->data = data;
        left = NULL;
        right = NULL;
    }
};

void leftBound(Node *root)
{
    if(root->left->left == NULL || root->left->right == NULL){
        return;
    }
    leftBound(root->left);
    leftBound(root->right);
}
void antiClockBoundary(Node *root)
{
    // Left boundary without leaf

    // leaf nodes

    // right boundary in reverse without leaf
}

int main()
{

    /*
            1
          /  \
         2    7
        /      \
       3        8
        \      /
         4    9
        / \  / \
       5  6 10 11

    ANTI-CLOCKWISE
    - Left boundaries excluding leafs
    - leaf nodes
    - right boundaries in reverse excluding leafs

    CLOCKWISE
    - Right boundaries excluding leafs
    - leaf nodes
    - Left boundaries in reverse excluding leafs

    */

    Node *root = new Node(1);
    root->left = new Node(2);
    root->left->left = new Node(3);
    root->left->left->right = new Node(4);
    root->left->left->right->left = new Node(5);
    root->left->left->right->right = new Node(6);
    root->right = new Node(7);
    root->right->right = new Node(8);
    root->right->right->left = new Node(9);
    root->right->right->left->left = new Node(10);
    root->right->right->left->right = new Node(11);

    return 0;
}