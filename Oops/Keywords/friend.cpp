#include <bits/stdc++.h>
using namespace std;

class Car{
    int maxSpeed;
    string brand;
    friend void print(Car c);
};

void print(Car c){
    cout<<c.brand<<" | "<<c.maxSpeed<<endl;
}

int main()
{
    // code
    return 0;
}