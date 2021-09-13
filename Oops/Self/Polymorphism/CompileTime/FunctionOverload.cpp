#include <bits/stdc++.h>
using namespace std;

//Function overloading that is functions with same name but different number of arguments
class Car
{
private:
    int mil;
    string color;

public:
    void about()
    {
        cout << "This is car running" << endl;
    }

    void about(int mil, string color)
    {
        cout << "This is " << color << " car running with " << mil << " milaege" << endl;
    }
};

int main()
{
    Car car1, car2;
    car1.about();
    car1.about(18, "red");
    cout<<endl;
    car2.about();
    car2.about(20, "Blue");
    return 0;
}