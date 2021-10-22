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

bool isIdentical(Node *root1, Node *root2)
{
    if (root1 == NULL && root2 == NULL)
        return true;

    if (root1 == NULL || root2 == NULL)
        return false;

    bool lCheck = isIdentical(root1->left, root2->left);
    bool rCheck = isIdentical(root1->right, root2->right);

    if (lCheck && rCheck && root1->data == root2->data)
        return true;
    else
        return false;
}

int main()
{

    Node *root1, *root2;

    // tree 1
    root1 = new Node(10);
    root1->left = new Node(20);
    root1->right = new Node(30);
    root1->right->left = new Node(40);
    root1->right->right = new Node(50);

    // tree 2
    root2 = new Node(10);
    root2->left = new Node(20);
    // root2->left->left = new Node(70);
    root2->right = new Node(30);
    root2->right->left = new Node(40);
    root2->right->right = new Node(60);

    cout << isIdentical(root1, root2);
    return 0;
}