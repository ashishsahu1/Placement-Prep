#include <bits/stdc++.h>
using namespace std;

struct rectangle{
    int width;
    int height;

    rectangle(int width,int height){
        this->width = width;
        this->height = height;
    }

    int area(){
       return width*height;  
    }
};

int main()
{
    // code
    // struct rectangle r1;
    // r1.width = 100;
    // r1.height = 200;

    struct rectangle r1(130,200);

    // cout<<r1.width*r1.height<<endl;
    cout<<r1.area();
    return 0;
}