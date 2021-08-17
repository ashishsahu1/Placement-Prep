#include <iostream>
using namespace std;

class Vector
{
    //data members
private:
    int *arr;
    int cs;
    int cap;

    //constructors
public:
    Vector()
    {
        cs = 0;
        cap = 1;
        arr = new int[0];
    }

    //functions
    void push_back(int val)
    {
        // cout<<cap<<" "<<cs<<endl;
        if (cs == cap)
        {
            // cap = cap*2;
            cap*=2;
            int *oldArr = arr;
            arr = new int[cap];
            for (int i = 0; i < cs; i++)
            {
                oldArr[i] = arr[i];
                cout<<oldArr[i]<<" "<<arr[i]<<endl;
            }
            delete[] oldArr;
        }
        arr[cs] = val;
        cs++;
    }

    void pop_back()
    {
        if (cs >= 0)
        {
            cs--;
        }
    }

    bool isEmpty()
    {
        if (cs == 0)
        {
            return true;
        }
        return false;
    }

    int last()
    {
        return arr[cs - 1];
    }

    int front()
    {
        return arr[0];
    }

    int at(int i)
    {
        return arr[i];
    }

    int capacity()
    {
        return cap;
    }

    int size()
    {
        return cs;
    }

    void print()
    {
        for (int i = 0; i < cs; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main()
{
    Vector v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    
    cout<<v.size()<<endl;
    cout<<v.capacity()<<endl;
    cout<<v.at(4)<<endl;
    // for (int i = 0; i < v.size(); i++)
    // {
    //     cout << v.at(i) << endl;
    // }

    // v.print();
}