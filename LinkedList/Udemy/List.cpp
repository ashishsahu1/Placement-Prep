#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int val)
    {
        this->data = val;
        this->next = NULL;
    }
};

class List
{
private:
    int noOfNodes;
    Node *head;

public:
    //List constructor
    List()
    {
        this->head = NULL;
        this->noOfNodes = 0;
    }

    //returing the size of LL
    int size(){
        return this->noOfNodes;
    }

    //insert at the begining
    void insert(int val)
    {
        Node *newnode = new Node(val);
        if (head != NULL)
        {
            newnode->next = head;
            head = newnode;
        }
        head = newnode;
        noOfNodes += 1;
    }

    //insert at a given position
    void insert(int val, int pos)
    {
        Node *newnode = new Node(val);
        if (head == NULL)
        {
            head = newnode;
        }
        else
        {
            int c = 2;
            Node *temp = head;
            while (c != pos)
            {
                temp = temp->next;
                c++;
            }
            newnode->next = temp->next;
            temp->next = newnode;
        }
        noOfNodes += 1;
    }

    void print()
    {
        Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main()
{
    List l1;
    l1.insert(12);
    l1.insert(22);
    l1.insert(32);
    l1.insert(42);
    
    l1.insert(52, 2);
    l1.insert(62, 2);
    l1.print();
    l1.insert(72, l1.size()+1);
    
    l1.insert(82, l1.size() + 1);
    l1.print();
    cout << l1.size() << endl;
}