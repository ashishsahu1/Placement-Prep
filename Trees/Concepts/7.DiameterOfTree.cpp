#include <bits/stdc++.h>
using namespace std;

// Tree node
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

// naive method
int ht(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    return 1 + max(ht(root->left), ht(root->right));
}

void findDia1(Node *root, int &mx)
{
    if (root == NULL)
    {
        return;
    }
    mx = max(mx, ht(root->left) + ht(root->right));
    findDia1(root->left, mx);
    findDia1(root->right, mx);
}

// optimized solution
int findDia2(Node *root, int &mx)
{
    if (root == NULL)
    {
        return 0;
    }

    int lh = findDia2(root->left, mx);
    int rh = findDia2(root->right, mx);

    mx = max(mx, lh + rh);
    return 1 + max(lh, rh);
}

int main()
{

    /*
    - Longest path between 2 nodes of a tree
    - path does not need to pass via root
                 1
                /\
               2  3
                 / \
                4   6
               /     \
              5       7
             /         \
            9           8
    */

    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->right->left = new Node(4);
    root->right->left->left = new Node(5);
    root->right->left->left->left = new Node(9);
    root->right->right = new Node(6);
    root->right->right->right = new Node(7);
    root->right->right->right->right = new Node(8);

    int mx = INT_MIN;

    findDia2(root, mx);
    cout << mx << endl;

    return 0;
}