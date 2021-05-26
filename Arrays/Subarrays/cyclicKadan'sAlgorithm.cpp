#include <bits/stdc++.h>
using namespace std;

int kadane(int arr[],int n){
    int maxN = INT_MIN;
    int sum = 0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
        if(sum<0){
            sum=0;
        }
        maxN = max(maxN,sum);
    }
    return maxN;
}

int main()
{
    // code
    int n;
    cin>>n;
    int arr[n],negArr[n];
    int sumT=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        sumT+=arr[i];
        negArr[i] = -arr[i];
    }
    int nonWrap = kadane(arr,n);
    int ans = sumT+kadane(negArr,n);
    cout<<max(nonWrap,ans)<<endl;
    return 0;
}   