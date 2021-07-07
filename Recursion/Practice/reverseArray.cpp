#include <bits/stdc++.h>
using namespace std;

void rev( int arr[],int n,int first,int last){
    if(first>=last){
        return;
    }
    swap(arr[first],arr[last]);
    rev(arr,n,first+1,last-1);
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

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    rev(arr,n,0,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    return 0;
}