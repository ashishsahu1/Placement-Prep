#include<bits/stdc++.h>
using namespace std;

class test{
    public:
    void run(){
        cout<<"We are in test"<<endl;
    }
};

class test2 : public test{
    public:
    void run(){
        cout<<"We are in test 2"<<endl;
    }
};

int main(){
    test2 t;
    t.run();
    test &t2 = t;
    t2.run();
}