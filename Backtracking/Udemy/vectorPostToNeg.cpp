#include<iostream>
#include<vector>
using namespace std;

void printVec(vector<int> arr,int n){
    for(auto i:arr){
        cout<<i<<" ";
    }
    cout<<endl;
}

void change(vector<int> &arr,int n,int i,int val){
    if(i==n){
        printVec(arr,n);
        return;
    }
    arr[i] = val;
    change(arr,n,i+1,val+1);
    arr[i] = -arr[i];
}

int main(){
    int n;
    cin>>n;
    vector<int> arr(n,0);
    change(arr,n,0,1);
    printVec(arr,n);
}
