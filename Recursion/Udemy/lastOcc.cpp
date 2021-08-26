#include<bits/stdc++.h>
using namespace std;

int lastOcc(int arr[],int n,int key){
    if(n==0){
        return -1;
    }
    if(arr[n]==key){
        return n;
    }else{
        return lastOcc(arr,n-1,key);
    }
}

int main(){

    int arr[] = {1,2,4,2,4,3,5,6,4,5,6,7};
    int n = sizeof(arr)/sizeof(int);
    int key = 4;
    cout<<lastOcc(arr,n-1,4)<<endl;
    return 0;
}