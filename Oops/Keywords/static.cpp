#include <bits/stdc++.h>
using namespace std;

class Car{
    public:
    int maxSpeed;
    string brand;
    //static declaration
    static string country;

    Car(int m,string b){
        maxSpeed = m;
        brand = b;
    }

    void print(){
        cout<<maxSpeed<<" | "<<brand<<" | "<<country<<endl;
    }
};

//static defination
string Car::country = "India";

int main()
{
    // code
    Car c1(100,"Tata");
    Car c2(200,"Honda");
    Car c3(500,"Bugati");

    c1.print();
    c2.print();
    c3.print();
    return 0;
}