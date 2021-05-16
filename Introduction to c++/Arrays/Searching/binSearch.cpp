#include <iostream>
using namespace std;

int binSearch(int arr[],int first,int last,int k){
    int mid = last/2;
    if(arr[mid] == k){
        return mid+1;
    }
    else if(k<arr[mid]){
        binSearch(arr,first,mid-1,k);
    }
    else if(k>arr[mid]){
        binSearch(arr,mid+1,last,k);
    }
    else{
        return -1;
    }
}

int main()
{
    /* code */
    int n;
    cout<<"Enter size : ";
    cin>>n;

    //input array
    int arr[n];
    for(int i=0;i<n;i++){
        cout<<"ENter number : ";
        cin>>arr[i];
    }
    int k;
    cout<<"Enter the key to find : ";
    cin>>k;

    int first = 0,last = n-1;

    int ans = binSearch(arr,first,last,k);

    cout<<"Element is in "<<ans<<endl; 
    return 0;
}