#include<bits/stdc++.h>
using namespace std;

void selectionSort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        int mn_index = i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[mn_index]){
                mn_index = j;
            }
        }
        swap(arr[i],arr[mn_index]);
    }
}

void print(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){

    int arr[] = {3,2,1,5,4};
    int n = sizeof(arr)/sizeof(int);
    print(arr,n);
    selectionSort(arr,n);
    print(arr,n);
    return 0;
}