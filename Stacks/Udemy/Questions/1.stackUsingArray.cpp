/* Implement stack using arrays */
#include<iostream>
using namespace std;

class stackArr{
    private:
    int arr[10], n = 10, top = -1, count = 0;

    public:
    void push(int data){
        if(top==n)
            cout<<"Stack Overflow"<<endl;
        else{
            top++;count++;
            arr[top] = data;
        }
    }

    void pop(){
        if(top==-1)
            cout<<"Stack underflow"<<endl;
        else
            top--;count--;
    }

    int size(){
        return count;
    }

    int peek(){
        return top;
    }
};

int main(){
    stackArr s;
    for(int i=1;i<7;i++){
        s.push(i*10);
    }

    cout<<s.size()<<endl;
    cout<<s.peek()<<endl;

    s.pop();
    s.pop();

    cout<<s.size()<<endl;

}