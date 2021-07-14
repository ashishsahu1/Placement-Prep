#include <bits/stdc++.h>
using namespace std;

class dob{
    public:
    int dd,mm,yy;
    dob(int d,int m,int y){
        this->dd = d;
        this->mm = m;
        this->yy = y;
    }
    private:
};

class student{
    public:
    string name;
    int roll;
    dob *d;
    student(string n,int r,dob *d){
        this->name = n;
        this->roll = r;
        this->d = d;
    }
    void print(){
        cout<<name<<" | "<<d->dd<<"."<<d->mm<<"."<<d->yy<<" | "<<roll<<endl;
    }
};

int main()
{
    dob d(2,4,1999);
    student s("ashish",428,&d);

    s.print();
    // code
    return 0;
}