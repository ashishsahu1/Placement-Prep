#include <bits/stdc++.h>
using namespace std;

//pointer method
void method1(int arr[],int n){
    int border=0,itrtr=0;
    while(itrtr<n){
        if(arr[itrtr]<0){
            swap(arr[border],arr[itrtr]);
            border++;
        }
        itrtr++;
    }
}

int main()
{
    // code
    int n;
    cin>>n;
    int arr[n];
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }

    method1(arr,n);

    for(int i =0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    return 0;
}