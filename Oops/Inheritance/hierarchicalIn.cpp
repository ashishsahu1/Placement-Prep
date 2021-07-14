#include <bits/stdc++.h>
using namespace std;

class Car{
    public:
    int maxSpeed;
    string brand;

    protected:
    int id;
    string owner;
};

class tata: public Car{
    public:
    string own;
    int fuel;
    tata(int id,int ms,string name,int f,int t){
        id = id;
        maxSpeed = ms;
        owner = name;
        own = owner;
        brand = "tata";
        fuel = f;
        torque = t;
    }

    private:
    int torque;
};

class honda: public Car{
    public:
    string own;
    int fuel;
    honda(int id,int ms,string name,int f,int t){
        id = id;
        maxSpeed = ms;
        owner = name;
        own = owner;
        brand = "honda";
        fuel = f;
        torque = t;
    }

    private:
    int torque;
};


int main()
{
    // code
    tata x(101,100,"ashish",12,30);
    tata y(102,60,"ash",16,20);

    honda z(201,200,"ram",10,40);

    cout<<x.brand<<" | "<<x.fuel<<" | "<<x.maxSpeed<<" | "<<x.own<<endl;
    cout<<y.brand<<" | "<<y.fuel<<" | "<<y.maxSpeed<<" | "<<y.own<<endl;
    cout<<z.brand<<" | "<<z.fuel<<" | "<<z.maxSpeed<<" | "<<z.own<<endl;

    
    return 0;
}