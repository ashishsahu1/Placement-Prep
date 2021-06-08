#include <bits/stdc++.h>
using namespace std;

int findDuplicate(int arr[],int n){
    int index[n];
    for(int i=0;i<n;i++){
        index[i]=0;
    }
    for(int i=0;i<n;i++){
        index[arr[i]-1]++;
    }
    int max = 0;
    for(int i=0;i<n;i++){
        if(index[max]<index[i]){
            max = i;
        }
    }
    return arr[max];
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

    int ans = findDuplicate(arr,n);
    cout<<ans;

    return 0;
}