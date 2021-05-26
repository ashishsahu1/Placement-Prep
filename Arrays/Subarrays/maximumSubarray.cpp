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
    int max = 0;
    for(int i=0;i<n;i++){
        if(arr[i]>0){
            max+=arr[i];
        }else{
            max = 0;
        }
    }

    cout<<max;
    return 0;
}