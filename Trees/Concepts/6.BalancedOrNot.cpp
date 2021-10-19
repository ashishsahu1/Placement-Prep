#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int data){
        this->data = data;
        left = right = NULL;
    }
};

int checkBal(Node *root){
    if(root == NULL){
        return 1;
    }
    
    checkBal(root->right);
}
int main(){

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

    return 0;
}