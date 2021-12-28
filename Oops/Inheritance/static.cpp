#include<bits/stdc++.h>
using namespace std;

class test{
    public:
    static int x;
    test(){
        x++;
    }
    static void run(){
        cout<<"THis is running"<<endl;
    }
};

int test::x = 0;

int main(){
    test t1,t2,t3,t4,t5;
    cout<<"curr x : "<<test::x<<endl;
}