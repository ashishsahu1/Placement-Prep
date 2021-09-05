#include<bits/stdc++.h>
using namespace std;

class School{
    private:
    string name;
    int noT;

    public:
    //getter for name
    string getName(){
        return name;
    }

    //setter for name
    void setName(string nm){
        name = nm;
    }

    //getter for number of teacher
    int getNOT(){
        return noT;
    }

    //setter for number of teacher
    void setNOT(int n){
        noT = n;
    }
};

class Teacher{
    private:
    string name;
    int age;

    public:
    string getName(){
        return name;
    }

    void setName(string nm){
        name = nm;
    }

    int getAge(){
        return age;
    }

    void setAge(int n){
        age = n;
    }

};

int main(){

    School akm;
    akm.setName("Akol kusdfn mujghd");
    akm.setNOT(3);
    return 0;
}