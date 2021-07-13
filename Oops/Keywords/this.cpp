#include <bits/stdc++.h>
using namespace std;

class Car{
    public:
    int maxSpeed;
    string brand;

    Car(int maxSpeed,string brand){
        cout<<maxSpeed<<" | "<<brand<<endl;
        this->maxSpeed = maxSpeed;
        this->brand = brand;
    }
};

int main()
{
    // code
    Car c1(100,"Tata");
    // Car c2(200,"Honda");
    return 0;
}