#include<iostream>
#include "Stack.h"
using namespace std;

int main(){
    Stack<int> s1;
    s1.push(12);
    s1.push(23);
    s1.push(34);
    s1.pop();
    s1.push(56);
    // s1.print();
}