#include<bits/stdc++.h>
using namespace std;

void print(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void insertSort(int arr[],int n){
    for(int i=1;i<n;i++){
        int curr = arr[i];
        int j=i-1;
        while(j>=0 && curr>arr[j]){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = curr;
    }
}

int main(){

    int arr[] = {5 ,4 ,1 ,3 ,2};
    int n = sizeof(arr)/sizeof(int);
    print(arr,n);
    insertSort(arr,n);    
    print(arr,n);
    return 0;
}