template<typename t>
class Node
{
public:
    t data;
    Node<t> *next;

    Node(t data)
    {
        this->data = data;
        this->next = NULL;
    }
};


template<typename t>
class Stack
{
private:
    Node<t> *top;

public:
    Stack()
    {
        this->top = NULL;
    }

    void push(t data)
    {
        Node<t> *newnode = new Node<t>(data);
        if (top != NULL)
        {
            newnode->next = top;
        }
        top = newnode;
    }

    void pop()
    {
        if (top != NULL)
        {
            Node<t> *temp = top;
            top = top->next;
            delete temp;
        }
        // else
        // {
        //     cout << "stack underflow" << endl;
        // }
    }

    // void print()
    // {
    //     Node<t> *temp = top;
    //     while (temp != NULL)
    //     {
    //         cout << temp->data << " ";
    //         temp = temp->next;
    //     }
    //     cout << endl;
    // }
};