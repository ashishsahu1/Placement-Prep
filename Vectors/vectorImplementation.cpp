#include <iostream>
#include "Vector.h"
using namespace std;

int main()
{
    Vector<int> v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    
    cout<<v.size()<<endl;
    cout<<v.capacity()<<endl;
    cout<<v.at(2)<<endl;
    v.pop_back();
    cout<<v.front()<<endl;
    cout<<v.isEmpty()<<endl;
    cout<<v.last()<<endl;
    cout<<"Our vector : "<<endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << endl;
    }

    // v.print();
}