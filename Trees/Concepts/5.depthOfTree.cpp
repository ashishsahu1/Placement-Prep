#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *left,*right;

    Node(int data){
        this->data = data;
        left = right = NULL;
    }
};

int depth(Node *root){
    if(root==NULL){
        return 0;
    }
    return 1+max(depth(root->left),depth(root->right));
}

int main(){
    Node *root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);
    root->right->left = new Node(40);
    root->right->right = new Node(60);
    root->right->left->left = new Node(50);
    root->right->left->left->left = new Node(70);
    root->right->left->left->left->left = new Node(80);
    cout<< depth(root) << endl;
}