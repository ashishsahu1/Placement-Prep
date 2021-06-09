#include <bits/stdc++.h>
using namespace std;

//kadane's algorithm
int subarraySumMethod2(int arr[],int n){
    int maxSum = INT_MIN;
    int currSum = 0;
    for(int i=0;i<n;i++){
        currSum+=arr[i];
        if(currSum<0){
            currSum=0;
        }
        maxSum = max(currSum,maxSum);
    }
    return maxSum;
}

//using iteration method
int subarraySumMethod1(int arr[],int n){
    int maxSum=INT_MIN;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            int sum=0;
            for(int k=i;k<=j;k++){
                sum+=arr[k];
            }
            maxSum = max(sum,maxSum);
            sum=0;
        }
        cout<<endl;
    }
    return maxSum;
}

//using Kadane algorithm


int main()
{
    // code
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    //method 1
    cout<<subarraySumMethod1(arr,n)<<endl;
    cout<<subarraySumMethod2(arr,n)<<endl;
    return 0;
}