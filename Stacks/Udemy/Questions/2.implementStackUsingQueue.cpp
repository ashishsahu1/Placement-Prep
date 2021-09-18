/* Implement stack using queue data struture */
#include<iostream>
#include<queue>
using namespace std;

class stackQ{
    private:
    queue<int> q;

    void insertFront(int data){
        int n = q.size();
        q.push(data);
        while(n--){
            int x = q.front();
            q.pop();
            q.push(x);
        }
    }

    public:
    void push(int data){
        insertFront(data);
    }

    void pop(){
        q.pop();
    }

    int peek(){
        return q.front();
    }

    int size(){
        return q.size();
    }
};

int main(){
    stackQ sq;
    sq.push(10);
    sq.push(20);
    sq.push(30);
    sq.push(40);
    sq.push(50);

    cout<<sq.size()<<endl;
    cout<<sq.peek()<<endl;
    sq.pop();

    cout << sq.size() << endl;
    cout << sq.peek() << endl;
}