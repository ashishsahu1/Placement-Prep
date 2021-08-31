#include<iostream>
using namespace std;

void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void change(int arr[],int n,int i,int val){
    if(i==n){
        printArray(arr, n);
        return;
    }
    //recursive code
    arr[i] = val;
    change(arr,n,i+1,val+1);
    //backtracking code
    arr[i] = -arr[i];
}

int main(){
    int n;
    cin>>n;

    int arr[n];
    change(arr,n,0,1);
    printArray(arr,n);
}