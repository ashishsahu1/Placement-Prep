#include <bits/stdc++.h>
using namespace std;

int main()
{
    // code

    int n;
    cin>>n;

    int arr[n];
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }
    int maxSum = INT_MIN,currSum = 0;
    bool w = false;
    int i=0;
    while(i<n){
        currSum+=arr[i];
        if(currSum<0){
            currSum = 0;
        }
        maxSum = max(currSum,maxSum);
        i++;
        if(i==n){
            i=0;
            w=true;
        }
        if(w==true && arr[i]<0){
            break;
        }
        
    }
   cout<<maxSum<<endl;
    return 0;
}