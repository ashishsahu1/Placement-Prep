#include <bits/stdc++.h>
using namespace std;

void merge(vector<int> &arr,int s,int e){
    int i=s;
    int mid = (s + e) / 2;
    int j=mid+1;
    int k;
    vector<int> temp;
    while(i<=mid && j<=e){
        if(arr[i]<arr[j]){
            temp.push_back(arr[i]);
            i++;
        }
        else{
            temp.push_back(arr[j]);
            j++;
        }
    }
    while(i<=mid){
        temp.push_back(arr[i]);
        i++;
    }
    while(j<=e){
        temp.push_back(arr[j]);
        j++;
    }

    //temp -> arr
    k=0;
    for(int i=s;i<=e;i++){
        arr[i] = temp[k];
        k++;
    }
    return;
}

void mergeSort(vector<int> &arr,int s,int e){
    if(s>=e){
        return;
    }
    int mid = (s+e)/2;
    mergeSort(arr,s,mid);
    mergeSort(arr,mid+1,e);
    merge(arr,s,e);
}

int main()
{

    vector<int> arr = {5, 1, 1, 2, 0, 0};
    int n = arr.size();

    mergeSort(arr,0, n - 1);

    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}