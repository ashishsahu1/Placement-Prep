#include <bits/stdc++.h>
using namespace std;

class Car
{
public:
    //data members
    string color;
    string name;
    int distanceTraveled;
    int mileage;

    //data function/data methods
    void start()
    {
        cout <<name<< " is starting" << endl;
    }
    void brake()
    {
        cout <<name<< " is braking" << endl;
    }
    void stop()
    {
        cout <<name<< " stopped" << endl;
    }
};

int main()
{

    Car car1, car2;

    //car 1
    car1.color = "red";
    car1.distanceTraveled = 1234;
    car1.mileage = 20;
    car1.name = "honda";

    //car 2
    car2.color = "blue";
    car2.distanceTraveled = 6789;
    car2.mileage = 15;
    car2.name = "audi";

    cout << car1.name << " " << car1.mileage << " " << car1.distanceTraveled << " " << car1.color << endl;
    cout << car2.name << " " << car2.mileage << " " << car2.distanceTraveled << " " << car2.color << endl;
    cout<<endl;
    
    car1.start();
    car1.brake();
    car1.stop();
    
    cout<<endl;
    
    car2.start();
    car2.brake();
    car2.stop();

    return 0;
}