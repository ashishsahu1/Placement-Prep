#include <bits/stdc++.h>
using namespace std;

//sum of even indexed numbers
int evenSum(int arr[],int n,int i){
    if(i>=n){
        return arr[i];
    }
    return arr[i] + evenSum(arr,n,i+2);
}

int evenSum2(int arr[],int n){
    if(n>0){
        if(arr[n-1]%2==0){
            return arr[n-1]+evenSum2(arr,n-1);
        }
        return evenSum2(arr,n-1);
    }
    return 0;
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
    int sum = evenSum(arr,n,1);
    cout<<sum<<endl;
    int sum1 = evenSum2(arr,n);
    cout<<sum1<<endl;
    return 0;
}