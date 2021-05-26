#include <bits/stdc++.h>
using namespace std;

bool find(int arr[],int n,int k){
    int low = 0,high = n-1;
    while(low<high){
        if(arr[low]+arr[high]==k){
            cout<<arr[low]<<" + "<<arr[high]<<endl;
            return true;
        }
        if(arr[low]+arr[high] > k){
            high--;
        }else if(arr[low]+arr[high] < k){
            low++;
        }
    }
    return false;
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
    int k;
    cin>>k;

    if(find(arr,n,k)){
        cout<<"Found"<<endl;
    }else{
        cout<<"Not Found"<<endl;
    }
    
    
    return 0;
}