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

void travBound(Node *root, vector<int> &ans, bool opp)
{
    if (root == NULL)
    {
        return;
    }
    queue<Node *> q;
    q.push(root);
    while (q.empty() == false)
    {
        Node *curr = q.front();
        ans.push_back(curr->data);
        q.pop();
        if (opp)
        {
            if (curr->left)
                q.push(curr->left);
            if (curr->right)
                q.push(curr->right);
        }
        else
        {
            if (curr->right)
                q.push(curr->right);
            if (curr->left)
                q.push(curr->left);
        }
    }
}
void antiClockBoundary(Node *root)
{
    vector<int> ans;
    // root
    ans.push_back(root->data);

    // left subtree level order
    travBound(root->left, ans, true);

    // right subtree level order
    vector<int> temp;
    travBound(root->right, temp, false);
    for (int i = temp.size() - 1; i >= 0; i--)
        ans.push_back(temp[i]);

    for (int i = 0; i < ans.size(); i++)
        cout << ans[i] << " ";
    cout << endl;
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

       1 2 3 4 5 6 10 11 9 8 7 1

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

    antiClockBoundary(root);

    return 0;
}