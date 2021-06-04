#include <bits/stdc++.h>
using namespace std;

int kMax(int arr[],int n,int k){
    //Sorting the array
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            swap(arr[i],arr[j]);
        }
    }
    return arr[n-k];
}

int kmaxOnly2(int arr[],int n,int k){
    int Kmax = INT_MIN,maxN = INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>Kmax){
            if(arr[i]>maxN){
                Kmax = maxN; 
                maxN = arr[i];
            }else{
                Kmax = arr[i];
            }
        }
    }
    return Kmax;
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
    int k;
    cin>>k;

    int maxN = kmaxOnly2(arr,n,k);
    int maxN2 = kMax(arr,n,k);

    cout<<maxN<<endl;
    cout<<maxN2<<endl;

    
    return 0;
}