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

//Optimized approach
int maxPath(Node *root,int &mx){
    if(root== NULL){
        return 0;
    }

    int lh = max(0,maxPath(root->left,mx));
    int rh = max(0,maxPath(root->right,mx));

    mx = max(mx,root->data+lh+rh);

    return root->data+max(lh,rh);
    
}

int main()
{

    /*
            -10
            / \
           9  20
             /  \
            15   7
        To find : Maximum path sum
    */

    Node *root = new Node(-10);
    root->left = new Node(9);
    root->right = new Node(20);
    root->right->left = new Node(15);
    root->right->right = new Node(7);

    int mx = INT_MIN;

    maxPath(root,mx);
    cout<<mx<<endl;
    return 0;
}