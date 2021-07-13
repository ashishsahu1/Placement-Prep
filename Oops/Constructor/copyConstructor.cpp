#include<bits/stdc++.h>
using namespace std;

class Car{
    public:
    int maxSpeed;
    string color;

    //default constructor
    Car(){
        cout<<"THis is default constructor"<<endl;
    }

    //copy constructor
    Car(Car &obj){
        color = obj.color;
        maxSpeed = obj.maxSpeed; 
        cout<<"This is copy constructor"<<endl;
    }
};

int main(){
    Car obj1;
    Car obj2(obj1);
}