#include <iostream>
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


Node* buildPre(){
    int data;
    cin>>data;

    if(data == -1){
        return NULL;
    }

    Node *newnode = new Node(data);
    newnode->left = buildPre();
    newnode->right = buildPre();

    return newnode;
}

void preOrder(Node *root){
    if(root == NULL){
        return;
    }
    cout<<root->data<<" ";
    preOrder(root->left);
    preOrder(root->right);
}

int main()
{
    Node *root = buildPre();

}