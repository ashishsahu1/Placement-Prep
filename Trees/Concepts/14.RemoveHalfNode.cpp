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
        left = right = NULL;
    }
};

bool isLeaf(Node *root)
{
    if (root->left == NULL and root->right == NULL)
    {
        return true;
    }
    return false;
}

bool isHalf(Node *root)
{
    if (root == NULL)
    {
        return false;
    }
    if (isLeaf(root))
    {
        return false;
    }
    if (root->left || root->right)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void removeHalf(Node *root)
{
    if (root == NULL || root->left == NULL || root->right == NULL)
    {
        return;
    }
    int n;
    queue<Node *> q,q1;
    q.push(root);
    while (!q.empty())
    {
        n = q.size();
        for (int i = 0; i < n; i++)
        {
            Node *curr = q.front();
            bool half = isHalf(curr);
            if (half)
            {
                // curr node is to be removed
                if(curr->left){
                    q1.front()->left
                }else{

                }
            }
            else
            {
                // good to go node
            }
            cout << curr->data << " " << isLeaf(curr) << endl;
            q1.push(curr);
            q.pop();
            if (curr->left)
                q.push(curr->left);
            if (curr->right)
                q.push(curr->right);
        }
    }
}

int main()
{
    Node *root = new Node(2);
    root->left = new Node(7);
    root->right = new Node(5);
    root->left->right = new Node(6);
    root->right->right = new Node(9);
    root->left->right->left = new Node(1);
    root->left->right->right = new Node(11);
    root->right->right->left = new Node(4);

    removeHalf(root);
    return 0;
}