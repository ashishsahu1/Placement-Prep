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
        this->left = NULL;
        this->right = NULL;
    }
};

class Tree
{
public:
    void levelOrder(Node *root)
    {
        if (root == NULL)
            return;

        queue<Node *> q;
        q.push(root);
        while (q.empty() == false)
        {
            Node *ptr = q.front();
            cout << ptr->data << " ";
            q.pop();

            if (ptr->left != NULL)
                q.push(ptr->left);

            if (ptr->right != NULL)
                q.push(ptr->right);
        }
        cout << endl;
    }

    void insert(Node *root, int val)
    {
        if (root == NULL)
        {
            return;
        }
        else
        {
            Node *newnode = new Node(val);
            queue<Node *> q;
            q.push(root);
            while (!q.empty())
            {
                Node *ptr = q.front();
                q.pop();
                if (ptr->left == NULL)
                {
                    ptr->left = newnode;
                    return;
                }
                else
                {
                    q.push(ptr->left);
                }

                if (ptr->right == NULL)
                {
                    ptr->right = newnode;
                    return;
                }
                else
                {
                    q.push(ptr->right);
                }
            }
        }
    }
};

int main()
{
    Node *root;
    Node *n1, *n2, *n3, *n4, *n5;
    n1 = new Node(10);
    n2 = new Node(20);
    n3 = new Node(30);
    n4 = new Node(40);
    n5 = new Node(50);

    root = n1;
    n1->left = n2;
    n1->right = n3;
    n2->left = n4;
    n3->right = n5;

    Tree t1;
    t1.levelOrder(root);
    cout << endl;
    t1.insert(root, 100);
    t1.levelOrder(root);
    cout << endl;
    t1.insert(root, 150);
    t1.levelOrder(root);
    cout << endl;
    return 0;
}