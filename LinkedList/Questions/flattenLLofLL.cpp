#include <bits/stdc++.h>
using namespace std;

class mainNode{
    public:
    int data;
    mainNode *next;
    subNode *subLst;
    mainNode(int val){
        data = val;
        next = NULL;
        subLst = NULL;
    }
};

class mainLL{
    private:
    mainNode *mainHead = NULL;
    public:
    void insertMainNode(int val,subNode *sublst){
        mainNode *newnode = new mainNode(val);
        newnode->subLst = sublst;
        if(mainHead==NULL){
            mainHead = newnode;
        }else{
            mainNode *temp = mainHead;
            while(temp->next!=NULL){
                temp = temp->next;
            }
            temp->next = newnode;
        }
    }

    void print(){
        mainNode *temp = mainHead;
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp = temp->next;
        }
        cout<<endl;
    }
};

class subNode{
    public:
    int data;
    subNode *next;
    subNode(int val){
        data = val;
        next = NULL;
    }
};

class subLL{
    public:
    subNode *subHead = NULL;
    void insertSubNode(int val){
        subNode *newnode = new subNode(val);
        if(subHead==NULL){
            subHead = newnode;
        }else{
            subNode *temp = subHead;
            while(temp->next = NULL){
                temp = temp->next;
            }
            temp->next = newnode;
        }
    }
};

int main()
{
    // code
    subLL sub1,sub2,sub3;
    sub1.insertSubNode(10);
    sub1.insertSubNode(20);
    sub1.insertSubNode(30);
    sub2.insertSubNode(11);
    sub2.insertSubNode(21);
    sub2.insertSubNode(31);
    sub3.insertSubNode(12);
    sub3.insertSubNode(22);
    sub3.insertSubNode(32);

    mainLL main1,main2,main3;
    main1.insertMainNode(1,sub1.subHead);
    // main2.insertMainNode(2,sub2.subHead);
    // main3.insertMainNode(3,sub3.subHead);

    main1.print();
    main2.print();
    main3.print();

    return 0;
}