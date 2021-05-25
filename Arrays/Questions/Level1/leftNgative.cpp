#include <bits/stdc++.h>
using namespace std;

int main()
{
    // code
    int n=6;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int i=0,j=n-1;
    while(i<=j){
        if(arr[i]<0 && arr[i]<0){
            i++;
        }
        else if(arr[i]>0 && arr[j]<0){
            swap(arr[i],arr[j]);
        }
        else if(arr[i]<0 && arr[j]>0 || arr[i]>0 && arr[j]>0){
            j--;
        }  
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}