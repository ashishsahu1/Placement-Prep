#include <bits/stdc++.h>
using namespace std;

void rev(int arr[],int i,int j){
    if(j>=i){
        return;
    }
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;

    rev(arr,i+1,j-1);

}

void print(int arr,int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

int main()
{
    // code
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int i=0,j=n-1;
    rev(arr,i,j);

    
    return 0;
}