#include<bits/stdc++.h>
using namespace std;

class vehicle{
    private:
    int pin;
    public:
    void run(){
        cout<<"Vehicle is running"<<endl;
    }
};

class car : public vehicle{
    public:
    void color(){
        cout<<"car is red"<<endl;
    }
};

int main(){
    vehicle v;
    v.run();

    car c;
    c.run();
    c.color();
}