#include <bits/stdc++.h>
using namespace std;

int main()
{
    // code
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int maxSum = INT_MIN,currSum=0;
    for(int i =0;i<n;i++){
        currSum+=arr[i];
        if(currSum<0){
            currSum=0;
        }
        if(currSum>maxSum){
            maxSum = currSum;
        }
    }

    cout<<maxSum<<endl;

    return 0;
}