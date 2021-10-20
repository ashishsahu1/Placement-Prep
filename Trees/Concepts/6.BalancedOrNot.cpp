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

// Naive solution
int ht(Node *root)
{
    if (root == NULL)
        return 0;
    return 1 + max(ht(root->left), ht(root->right));
}

bool checkBal1(Node *root)
{
    if (root == NULL)
    {
        return true;
    }

    int leftHt = ht(root->left);
    int rightHt = ht(root->right);
    if (abs(leftHt - rightHt) > 1)
    {
        return false;
    }

    bool leftcheck = checkBal1(root->left);
    bool rightcheck = checkBal1(root->right);

    if (leftcheck == false || rightcheck == false)
    {
        return false;
    }

    return true;
}

//OPTIMIZED SOLUTION
int checkBal2(Node *root){
    if(root==NULL){
        return 0;
    }
    int lh = checkBal2(root->left);
    if(lh == -1)
        return -1;
    
    int rh = checkBal2(root->right);
    if(rh == -1)
        return -1;

    if(abs(lh-rh)>1)
        return -1;
    else
        return 1+max(lh,rh);                               
}

int main()
{

    /*
                 10
                /  \
               20  30
                  /  \
                 40  50
    */
    Node *root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);
    root->right->left = new Node(40);
    root->right->right = new Node(60);
    root->right->right->right = new Node(80);

    cout << checkBal2(root) << endl;
    return 0;
}