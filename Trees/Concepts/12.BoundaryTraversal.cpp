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

void print(vector<int> ans){
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
}

bool isLeaf(Node *root){
    if(root->left== NULL and root->right == NULL){
        return true;
    }else{
        return false;
    }
}

void travLeft(Node *root,vector<int> &ans){
    if(isLeaf(root)){
        return;
    }
    ans.push_back(root->data);
    if(root->left)
        travLeft(root->left,ans);
    else
        travLeft(root->right,ans);
}

void travLeaf(Node *root,vector<int> &ans){
    if(root == NULL){
        return;
    }
    if(isLeaf(root)){
        ans.push_back(root->data);
    }
    travLeaf(root->left,ans);
    travLeaf(root->right,ans);
}

void revTravRight(Node *root, vector<int> &ans){
    vector<int> temp;
    Node *curr = root;
    while(curr){
        if(!isLeaf(curr))
            temp.push_back(curr->data);
        if(curr->right)
            curr = curr->right;
        else
            curr = curr->left;
    } 

    for(int i=temp.size()-1;i>=0;i--){
        ans.push_back(temp[i]);
    }
}

vector<int> boundTrav(Node *root)
{
    vector<int> ans;    
    if(root == NULL){
        return ans;
    }
    if(isLeaf(root) == false){
        ans.push_back(root->data);
    }
    travLeft(root->left,ans);
    travLeaf(root,ans);
    revTravRight(root->right,ans);

    return ans;

}

int main(){

    /*
           1
         /  \
        2    7
       /      \
      3        8
    /  \      /
   12   4    9
       / \  / \
      5  6 10 11

      1 2 3 4 5 6 10 11 9 8 7 1

   ANTI-CLOCKWISE
   - Left boundaries excluding leafs
   - leaf nodes
   - right boundaries in reverse excluding leafs

   CLOCKWISE
   - Right boundaries excluding leafs
   - leaf nodes
   - Left boundaries in reverse excluding leafs

   */

    Node *root = new Node(1);
    root->left = new Node(2);
    root->left->left = new Node(3);
    root->left->left->left = new Node(12);
    root->left->left->right = new Node(4);
    root->left->left->right->left = new Node(5);
    root->left->left->right->right = new Node(6);
    root->right = new Node(7);
    root->right->right = new Node(8);
    root->right->right->left = new Node(9);
    root->right->right->left->left = new Node(10);
    root->right->right->left->right = new Node(11);

    vector<int> ans = boundTrav(root);
    print(ans);

    return 0;
}