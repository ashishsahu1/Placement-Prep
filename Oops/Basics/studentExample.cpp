#include <bits/stdc++.h>
using namespace std;

class student{
    public:
    int id;
    string name;
    int age;

    void insert(int id,string name,int age){
        id = id;
        name = name;
        age = age;
    }

    void print(){
        cout<<id<<" "<<name<<" "<<age<<endl;
    }
}

int main()
{
    // code
    int n;
    cout<<"Enter the numbe rof student : ";
    cin>>n;
    student a[n];
    
    return 0;
}