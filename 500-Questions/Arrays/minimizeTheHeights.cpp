#include <bits/stdc++.h>
using namespace std;
/*
Given an array arr[] denoting heights of N towers and a positive integer K,
you have to modify the height of each tower either by increasing or decreasing
them by K only once. After modifying, height should be a non-negative integer. 
*/

int minimizeHt(int arr[],int n,int k){
    for(int i=0;i<n;i++){
        if((arr[i]-k)<=0){
            arr[i]+=k;
        }else{
            arr[i]-=k;
        }
    }
    int minN= INT_MAX,maxN = INT_MIN;
    for(int i=0;i<n;i++){
        minN = min(minN,arr[i]);
        maxN = max(maxN,arr[i]);
    }
    cout<<maxN<<" "<<minN<<endl;

    return (maxN-minN);
}
7 1 8 9 2 7 5 8 7 6
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
    cout<<minimizeHt(arr,n,k)<<endl;
    return 0;

}