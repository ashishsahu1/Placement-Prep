#include<bits/stdc++.h>
using namespace std;

class Car{
    public:
    string color;
    int maxSpeed;

    //constructor
    Car(){
        cout<<"This is normal constructor"<<endl;
    }
    //parametrized constructor
    Car(int x){
        maxSpeed = x;
        cout<<"This parametrized cunstructor"<<endl;
    }

    //destructor
    ~Car(){
        cout<<"This is destructor"<<endl;
    }
    
    private:
};

int main(){

    //Tata object
    Car tata;
    tata.maxSpeed = 100;
    tata.color = "Red";
    cout<<"Tata | "<<tata.color<<" | "<<tata.maxSpeed<<endl;

    //honda object
    Car honda(200);
    honda.color = "White";
    cout<<"Honda | "<<honda.color<<" | "<<honda.maxSpeed<<endl;

    return 0;
}