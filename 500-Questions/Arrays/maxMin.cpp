#include <bits/stdc++.h>
using namespace std;

int minArray(int arr[],int n){
    int minA = INT_MAX;
    for(int i=0;i<n;i++){
        if(arr[i]<minA)
            minA = arr[i];
    }
    return minA;
}

int maxArray(int arr[],int n){
    int maxA = INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>maxA)
            maxA = arr[i];
    }
    return maxA;
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

    cout<<"MInimim : "<<minArray(arr,n)<<endl;
    cout<<"Maximum : "<<maxArray(arr,n)<<endl;

    return 0;
}