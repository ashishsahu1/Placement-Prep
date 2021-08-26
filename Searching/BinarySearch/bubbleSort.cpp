#include<bits/stdc++.h>
using namespace std;

void bubbleSortIterative(vector<int> &arr,int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
}

void bubbleSortSemiRecursive(vector<int> &arr,int n,int i){
    if(i==n-1){
        return;
    }
    for(int j=0;j<n-i-1;j++){
        if(arr[j]>arr[j+1]){
            swap(arr[j],arr[j+1]);
        }
    }
    bubbleSortSemiRecursive(arr, n, i + 1);
}

void bubbleSortRecursive2(vector<int> &arr, int n, int i,int j)
{
    if (i == n - 1)
    {
        return;
    }
    if(j<n-i-1){
        if(arr[j]>arr[j+1]){
            swap(arr[j],arr[j+1]);
        }
        bubbleSortRecursive2(arr, n, i, j+1);
    }
    bubbleSortRecursive2(arr, n, i + 1,0);
}

void printArr(vector<int> arr){
    int n = arr.size();
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){

    vector<int> arr = {5,3,4,-6,1,2,-1};
    int n = arr.size();

    printArr(arr);
    bubbleSortIterative(arr,n);
    // bubbleSortSemiRecursive(arr,n,0);
    // bubbleSortRecursive2(arr, n, 0, 0);
    printArr(arr);
    return 0;
}