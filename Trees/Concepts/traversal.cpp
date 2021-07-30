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

class TreeRec
{
public:
    // Node *root = NULL;

    //inorder using recursion
    void inorderRec(Node *root)
    {
        if (root == NULL)
        {
            return;
        }
        inorderRec(root->left);
        cout << root->data << " ";
        inorderRec(root->right);
    }

    //preorder using recursion
    void preorderRec(Node *root)
    {
        if (root == NULL)
        {
            return;
        }
        cout << root->data << " ";
        preorderRec(root->left);
        preorderRec(root->right);
    }

    //postorder using recursion
    void postorderRec(Node *root)
    {
        if (root == NULL)
        {
            return;
        }
        postorderRec(root->left);
        postorderRec(root->right);
        cout << root->data << " ";
    }

    void levelOrder(queue<Node *> q)
    {
        if (q.empty())
        {
            return;
        }
        q.push(q.front()->left);
        q.push(q.front()->right);

        cout << q.front()->data << " ";
        q.pop();

        levelOrder(q);
    }
};

class TreeItt
{
public:
    void inorderItt(Node *root)
    {
        Node *curr = root;
        stack<Node *> tempStack;
        while (curr != NULL || tempStack.empty() == false)
        {
            while (curr != NULL)
            {
                tempStack.push(curr);
                curr = curr->left;
            }

            curr = tempStack.top();
            tempStack.pop();
            cout << curr->data << " ";

            curr = curr->right;
        }
    }

    void preorderItt(Node *root)
    {
        Node *curr = root;
        stack<Node *> tempStack;
        while (curr != NULL || tempStack.empty() == false)
        {
            while (curr != NULL)
            {
                cout << curr->data << " ";
                tempStack.push(curr);
                curr = curr->left;
            }
            curr = curr->right;
        }
    }
};

int main()
{
    // code

    /*
                  10
                /    \
              20      30
             /  \    /  \
            40  50  60  70  
    */

    //creation of tree
    Node *root = NULL;
    Node *n1 = new Node(10);
    Node *n2 = new Node(20);
    Node *n3 = new Node(30);
    Node *n4 = new Node(40);
    Node *n5 = new Node(50);
    Node *n6 = new Node(60);
    Node *n7 = new Node(70);
    root = n1;
    n1->left = n2;
    n1->right = n3;
    n2->left = n4;
    n2->right = n5;
    n3->left = n6;
    n3->right = n7;

    /*  USING RECURSION  */
    cout << " ***  USING RECURSION  ***" << endl;
    TreeRec t1;
    //inorder
    cout << "Inorder : ";
    t1.inorderRec(root);
    cout << endl;

    //preorder
    cout << "Postorder : ";
    t1.postorderRec(root);
    cout << endl;

    //postorder
    cout << "Preorder : ";
    t1.preorderRec(root);
    cout << endl;

    /*  Level order  */
    queue<Node *> q;
    q.push(root);
    cout << "Level Order : ";
    t1.levelOrder(q);
    cout << endl;

    /*  USING ITERATION AND STACK  */
    cout << " ***  USING ITERATION AND STACK  *** " << endl;
    TreeItt t2;
    cout << "InOrder : ";
    t2.inorderItt(root);

    return 0;
}