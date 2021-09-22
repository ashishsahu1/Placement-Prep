#include<iostream>
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

class Tree{

};

void inLineprint(Node * root){
    if(root == NULL){
        return;
    }
    cout<<root->data<<endl;
    inLineprint(root->left);
    inLineprint(root->right);
}

int main(){
    Node *root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);
    inLineprint(root);
}