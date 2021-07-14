#include <bits/stdc++.h>
using namespace std;

class rectangle{
    public:
    int width;
    int height;

    rectangle(int w,int h){
        this->width = w;
        this->height = h;
    }

    int area(){
        return width*height;
    }
};

class circle{
    public:
    int radius;

    circle(int r){
        this->radius = r;
    }

    int area(){
        return 3.14*radius*radius;
    }
};

class triangle{
    public:
    int base;
    int height;

    triangle(int b,int h){
        this->base = b;
        this->height = h;
    }

    int area(){
        return 0.5*base*height;
    }
};

int main()
{
    // code
    rectangle r1(20,40);
    circle c1(70);
    triangle t1(20,40);

    cout<<r1.area()<<endl;
    cout<<c1.area()<<endl;
    cout<<t1.area()<<endl;
    return 0;
}