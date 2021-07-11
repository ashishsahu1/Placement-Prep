#include<bits/stdc++.h>
using namespace std;

int main(){
    //1 3 4 7 5 6 2
    //3 7 1 6 4 5 2
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    for(int i=1;i<n;i=i+2){
        if(arr[i]<arr[i-1]){
            swap(arr[i],arr[i-1]);
        }
    }
    for(int i=1;i<n;i=i+2){
        if(arr[i]<arr[i+1]){
            swap(arr[i],arr[i+1]);
        }
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}