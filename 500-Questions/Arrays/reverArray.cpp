#include <bits/stdc++.h>
using namespace std;

int* method1(int arr[],int n){
    //using extra space
    int* ans = new int[n];
    int j=0;
    for(int i=n-1;i>=0;i--){
        ans[j] = arr[i];
        j++; 
    }
    return ans;
}

void method2(int arr[],int n){
    int i=0,j=n-1;
    while(i<=j){
        // swap(arr[i],arr[j]);
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }

}

void print(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
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

    int* ans = method1(arr,n);
    print(ans,n);

    method2(arr,n);
    print(arr,n);
    
    return 0;
}