#include <bits/stdc++.h>
using namespace std;

class School
{
private:
    string name;
    int numberOfTeachers, numberOfStudents, numberOfClassroom;
    string mobile;

public:

    //Default Constructor
    School(){
        name = "DAV  PUblic School";
        numberOfTeachers = 100;
        numberOfStudents = 1000;
        numberOfClassroom = 200;
    }

    //parameterized costructor
    School(string nm,int noT,int noS,int noC){
        name = nm;
        numberOfTeachers = noT;
        numberOfStudents = noS;
        numberOfClassroom = noC;
    }

    //copy constructor
    School(School &obj){
        name = obj.name;
        numberOfTeachers = obj.numberOfTeachers;
        numberOfStudents = obj.numberOfStudents;
        numberOfClassroom = obj.numberOfClassroom;
    }

    School(string nm,int noT){
        name = nm;
        numberOfTeachers = noT;
    }

    void number_Of_Teachers()
    {
        cout << "Number of Teachers " << numberOfTeachers << endl;
    }

    void number_Of_Students()
    {
        cout << "total students " << numberOfStudents << endl;
    }

    void schoolName()
    {
        cout << name << endl;
    }
};

int main()
{

    //constructor overloading
    School dav;
    dav.number_Of_Teachers();
    dav.number_Of_Students();
    dav.schoolName();

    cout<<endl;

    School cps("Central Public School",80,2500,150);
    cps.number_Of_Teachers();
    cps.number_Of_Students();
    cps.schoolName();
    
    cout << endl;
    
    School cps2(cps);
    cps2.number_Of_Students();
    cps2.number_Of_Teachers();
    cps2.schoolName();

    return 0;
}