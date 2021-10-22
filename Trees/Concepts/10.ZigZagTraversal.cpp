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

void zigTrav(Node *root)
{
    if (root == NULL)
        return;
       
    queue<Node *> q;
    bool rightToLeft = false;
    q.push(root);
    while (q.empty() == false)
    {
        int currQSize = q.size();
        vector<Node *> vec;
        for (int i = 0; i < currQSize; i++)
        {
            vec.push_back(q.front());

            if (q.front()->left)
                q.push(q.front()->left);

            if (q.front()->right)
                q.push(q.front()->right);

            q.pop();
        }
        // cout<<vec.size()<<endl;
        if (rightToLeft)
        {
            for (int k = vec.size()-1; k >= 0; k--)
                cout << vec[k]->data << " ";
            rightToLeft = false;
        }
        else
        {
            for (int k = 0; k < vec.size(); k++)
                cout << vec[k]->data << " ";
            rightToLeft = true;
        }
        vec.clear();
    }
}

int main()
{
    // TEST CASE 1
    /*
               1
              / \
             2   3
            / \   \
           4   5   6

           Out: 1 3 2 4 5 6

    */

    // Node *root = new Node(1);
    // root->left = new Node(2);
    // root->right = new Node(3);
    // root->left->left = new Node(4);
    // root->left->right = new Node(5);
    // root->right->right = new Node(6);

    // TEST CASE 2
    /*
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

    zigTrav(root);
    return 0;
}