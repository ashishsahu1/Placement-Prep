#include<bits/stdc++.h>
using namespace std;

int firstOcc(int arr[],int n,int key,int i){
    if(i==n+1){
        return -1;
    }
    if(arr[i]==key){
        return i;
    }else{
        return firstOcc(arr,n,key,i+1);
    }
}

int main(){
    int arr[] = {1,2,2,4,3,4,5};
    int key = 7;
    int n = sizeof(arr)/sizeof(int);
    cout<<firstOcc(arr,n,key,0)<<endl;   
    return 0;
}