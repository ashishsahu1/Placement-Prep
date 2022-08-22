#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int val)
    {
        this->data = val;
        next = NULL;
    }
};

class LinkedList
{
private:
    Node *head;

    Node *createNode(int val)
    {
        Node *newNode = new Node(val);
        return newNode;
    }

public:
    LinkedList()
    {
        this->head = NULL;
    }
    int getHead()
    {
        return head->data;
    }

    void insert(int val)
    {
        Node *newNode = createNode(val);
        Node *temp = head;
        if (!head)
        {
            head = newNode;
            return;
        }
        while (temp->next != NULL)
            temp = temp->next;

        temp->next = newNode;
    }

    void insertR_util(int val, Node *curr)
    {
        if (head->next == NULL)
        {
            head->next = createNode(val);
            return;
        }
        insertR_util(val, curr->next);
    }

    void insertR(int val)
    {
        insertR_util(val, head);
    }

    void print_util(Node *curr)
    {
        if (curr == NULL)
        {
            return;
        }
        cout << curr->data << " ";
        print_util(curr->next);
    }

    void print()
    {
        print_util(head);
    }
};

int main()
{
    LinkedList ll;
    ll.insert(11);
    ll.insert(22);
    ll.insert(33);
    ll.insert(44);
    ll.insert(55);

    // ll.insertR(77);
    // ll.insertR(88);

    ll.print();

    return 0;
}