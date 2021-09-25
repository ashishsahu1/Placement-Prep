#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node *left;
    Node *right;

    Node(int data){
        this->data = data;
        left = NULL;
        right = NULL;
    }
};

Node *buildTree(){
    int data;
    cin>>data;
    // cout<<data<<endl;

    if(data==-1){
        return NULL;
    }

    Node *newNode = new Node(data);
    newNode->left = buildTree();
    newNode->right = buildTree();
    // return newNode;
}

void printPreOrder(Node *root){
    if(root == NULL){
        return;
    }
    cout<<root->data<<" ";
    printPreOrder(root->left);
    printPreOrder(root->right);
}

int main(){

    Node *root = buildTree();
    printPreOrder(root);
    return 0;
}