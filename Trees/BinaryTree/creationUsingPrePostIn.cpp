#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;
    Node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};

class Tree
{
private:
    int search(vector<int> in, int start, int end, int val)
    {
        int i;
        for (int i = start; i <= end; i++)
        {
            if (in[i] == val)
                return i;
        }
    }

public:
    Node *createUsingInorderPreOrder(vector<int> in, vector<int> pre, int start, int end)
    {
        int i = 0;
        if (start > end)
        {
            return NULL;
        }

        Node *newnode = new Node(pre[i++]);
        if (start == end)
        {
            return newnode;
        }

        int inIndex = search(in, start, end, newnode->data);

        newnode->left = createUsingInorderPreOrder(in, pre, start, inIndex - 1);
        newnode->right = createUsingInorderPreOrder(in, pre, inIndex + 1, end);

        return newnode;
    }

    void inOrder(Node *root)
    {
        if (root == NULL)
        {
            return;
        }
        inOrder(root->left);
        cout << root->data << " ";
        inOrder(root->right);
    }

    void levelOrder(Node *root)
    {
        if (root == NULL)
        {
            cout << "Tree empty" << endl;
            return;
        }
        else
        {
            queue<Node *> q;
            q.push(root);
            while (!q.empty())
            {
                Node *ptr = q.front();
                cout << ptr->data << " ";
                q.pop();
                if (ptr->left != NULL)
                    q.push(q.front()->left);
                if (ptr->right != NULL)
                    q.push(q.front()->right);
            }
            cout << endl;
        }
    }
};

int main()
{
    /*
                 1
                / \
               2   3
              /\   /\
             4 5  6 7

    InOrder : 4 2 5 1 6 3 7
    PreOrder : 1 2 4 5 3 6 7
    PostOrder : 4 5 2 6 7 3 1
    */
    vector<int> inOrd = {4, 3, 5, 1, 6, 3, 7};
    vector<int> preOrd = {1, 2, 4, 5, 3, 6, 7};
    vector<int> postOrd = {4, 5, 2, 6, 7, 3, 1};

    Tree t1;
    Node *root = t1.createUsingInorderPreOrder(inOrd, preOrd, 0, inOrd.size() - 1);
    // t1.levelOrder(root);
    // cout << typeid(root).name() << endl;
    t1.inOrder(root);

    return 0;
}