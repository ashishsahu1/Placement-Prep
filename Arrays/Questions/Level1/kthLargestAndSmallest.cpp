#include <bits/stdc++.h>
using namespace std;

int main()
{
    // code
    int n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int k;
    cin>>k;
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            int temp = arr[j];
            arr[j] = arr[j+1];
            arr[j+1] = temp;
        }
    }
    cout<<"kth Min : "<<arr[k-1]<<endl<<"kth Max : "<<arr[n-k]<<endl;
    return 0;
}