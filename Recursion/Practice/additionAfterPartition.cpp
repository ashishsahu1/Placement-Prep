#include <bits/stdc++.h>
using namespace std;

int partionSum(int arr[],int n,int first,int last){
    int mid = (first+last)/2;
    cout<<first<<" "<<mid<<" "<<last<<endl;
    if(first==last){
        return arr[first];
    }
    
    
    return arr[mid]+partionSum(arr,n,first,mid)+partionSum(arr,n,mid+1,last);
}

int main()
{
    // code
    int n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<partionSum(arr,n,0,n-1)<<endl;
    return 0;
}