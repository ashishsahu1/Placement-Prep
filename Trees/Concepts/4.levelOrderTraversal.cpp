#include<iostream>
#include<queue>
using namespace std;

class Node{
    public:
    int data;
    Node *left;
    Node *right;

    Node(int data){
        this->data = data;
        this->left = this->right = NULL;
    }
};

class Tree{
    private:
    Node *root;

    public:
    Tree(){
        root = build();
    }

    Node* build(){
        int data;
        cin >> data;

        if (data == -1)
            return NULL;

        Node *newnode = new Node(data);
        newnode->left = build();
        newnode->right = build();
        return newnode;        
    }

    void levelOrder(){
        queue<Node*> q;
        q.push(root);
        while(q.empty() == false){
            cout<<q.front()->data<<" ";
            
            if (q.front()->left != NULL)
                q.push(q.front()->left);

            if(q.front()->right !=NULL)
                q.push(q.front()->right);

            q.pop();
        }
        cout<<endl;
    }

    void levelOrderFormated()
    {
        queue<Node *> q;
        q.push(root);
        q.push(NULL);
        while (q.empty() == false)
        {
            if(q.front() == NULL){
                cout<<endl;
                q.pop();
                q.push(NULL);
            }

            cout << q.front()->data << " ";

            if (q.front()->left != NULL)
                q.push(q.front()->left);

            if (q.front()->right != NULL)
                q.push(q.front()->right);

            q.pop();
        }
        cout << endl;
    }
};

int main(){
    Tree t1;
    cout<<"Not Formatted : ";
    t1.levelOrder();
    cout<<"Formatted : "<<endl;
    t1.levelOrderFormated();
}