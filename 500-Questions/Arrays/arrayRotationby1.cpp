#include <bits/stdc++.h>
using namespace std;

//best approach
void rotateMethod1(int arr[],int n){
    int temp = arr[n-1];
    for(int i=n-1;i>0;i--){
        arr[i] = arr[i-1];
    }
    arr[0] = temp;
}

//not a better approach
void rotateMethod2(int arr[],int n,int k){
    int start=0,last = n-1;
    int temp=last;
    last = (last+k)-temp;
    start+=(k+1);

    while(start!=last){
        cout<<arr[start]<<" ";
        if(start==n-1){
            start=0;
        }else{
            start++;
        }    
    }
    cout<<arr[start]<<endl;
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
    rotateMethod1(arr,n);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    rotateMethod2(arr,n,1);
    return 0;
}