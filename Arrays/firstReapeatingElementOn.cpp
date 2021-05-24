#include <bits/stdc++.h>
using namespace std;

int main()
{
    // code
    int n,N=INT_MAX;
    cin>>n;

    int arr[n], index[N];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }  
    for(int i=0;i<N;i++){
        index[i]=-1;
    }    

    int minIndex = INT_MAX;
    for(int i=0;i<n;i++){
        if(index[arr[i]]!=-1){
                minIndex = min(index[arr[i]],minIndex);   
        }
        index[arr[i]] = i;
    }
    minIndex+=1;

    cout<<minIndex<<endl;

    return 0;
}