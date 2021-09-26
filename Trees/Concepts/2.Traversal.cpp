#include <iostream>
#include <stack>
#include <queue>
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

/* INORDER TRAVERSAL USING RECURSION left--->root--->right */
void inOrderRec(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    inOrderRec(root->left);
    cout << root->data << " ";
    inOrderRec(root->right);
}

/* INORDER TRAVERSAL USING ITERATION */
void inOrderItr(Node *root)
{
    Node *curr = root;
    stack<Node *> s;
    while (true)
    {
        if (curr != NULL)
        {
            s.push(curr);
            curr = curr->left;
        }
        else
        {
            if (s.empty() == true)
                break;
            curr = s.top();
            s.pop();
            cout << curr->data << " ";
            curr = curr->right;
        }
    }
}

/* PREORDER TRAVERSAL USING RECURSION root--->left--->right */
void preOrderRec(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    cout << root->data << " ";
    preOrderRec(root->left);
    preOrderRec(root->right);
}

/* PREORDER TRAVERSAL USING ITERATION */
void preOrderItr(Node *root)
{
    if (root == NULL)
        return;

    stack<Node *> s;
    s.push(root);

    while (s.empty() == false)
    {
        Node *currTop = s.top();
        cout << currTop->data << " ";
        s.pop();
        if (currTop->right != NULL)
            s.push(currTop->right);
        if (currTop->left != NULL)
            s.push(currTop->left);
    }
}

/* POSTORDER TRAVERSAL USING RECURSION left--->right--->root */
void postOrderRec(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    postOrderRec(root->left);
    postOrderRec(root->right);
    cout << root->data << " ";
}

/* POSTORDER TRAVERSAL USING ITERATION */
void postOrderItr(Node *root)
{
    if (root == NULL)
        return;

    stack<Node *> s1, s2;
    s1.push(root);
    while (s1.empty() != true)
    {
        Node *curr = s1.top();
        s1.pop();
        s2.push(curr);
        if (curr->left != NULL)
            s1.push(curr->left);
        if (curr->right != NULL)
            s1.push(curr->right);
    }
    while (s2.empty() != true)
    {
        cout << s2.top()->data << " ";
        s2.pop();
    }
}

/* LEVEL ORDER TRAVERSAL USING ITERATION */
void levelOrder(Node *root)
{
    if (root == NULL)
        return;
    else
    {
        queue<Node *> q;
        Node *curr = root;
        q.push(curr);
        while (!q.empty())
        {
            Node *ptr = q.front();
            cout << ptr->data << " ";
            q.pop();

            if (ptr->left != NULL)
                q.push(ptr->left);

            if (ptr->right != NULL)
                q.push(ptr->right);
        }
    }
}

int main()
{
    /*
                     10
                   /   \
                20      30
               / \     /  \
            40   50   60   70
    */
    Node *root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);
    root->left->left = new Node(40);
    root->left->right = new Node(50);
    root->right->left = new Node(60);
    root->right->right = new Node(70);

    cout << "Inorder" << endl;
    inOrderRec(root);
    cout << endl;
    inOrderItr(root);
    cout << endl;

    cout << "Preorder" << endl;
    preOrderRec(root);
    cout << endl;
    preOrderItr(root);
    cout << endl;

    cout << "Postorder" << endl;
    postOrderRec(root);
    cout << endl;
    postOrderItr(root);
    cout << endl;

    cout << "Levelorder" << endl;
    levelOrder(root);
    cout << endl;

    return 0;
}