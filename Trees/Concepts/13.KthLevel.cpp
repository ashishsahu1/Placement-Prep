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

Node *buildTree()
{
    Node *root;
    int data;
    cin >> data;
    root = new Node(data);
    queue<Node *> q;
    q.push(root);
    while (!q.empty())
    {
        Node *curr = q.front();
        q.pop();
        int c1, c2;
        cin >> c1 >> c2;
        if (c1 != -1)
        {
            curr->left = new Node(c1);
            q.push(curr->left);
        }

        if (c2 != -1)
        {
            curr->right = new Node(c2);
            q.push(curr->right);
        }
    }
    return root;
}

vector<int> kthLevel(Node *root,int k){
    vector<int> ans;
    if(root == NULL)
        return ans;
    int lvl = 0;
    queue<Node *> q;
    q.push(root);
    while(!q.empty()){
        int s = q.size();
        while(s--){
            Node *curr = q.front();
            q.pop();
            if(lvl == k)
                ans.push_back(curr->data);
            if(curr->left)
                q.push(curr->left);
            if(curr->right)
                q.push(curr->right);
        }
        lvl++;
    }
    return ans;
}

void printVec(vector<int> v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

void inOrder(Node *root)
{
    if (root == NULL)
        return;

    inOrder(root->left);
    cout << root->data << " ";
    inOrder(root->right);
}

int main()
{
    /*
         10
         /\
      20   30
      /\   /\
    40 50 60 70

    10 20 30 40 50 60 70

    */

    Node *root = buildTree();
    inOrder(root);
    cout<<endl;
    vector<int> ans = kthLevel(root,2);
    printVec(ans);
    return 0;
}