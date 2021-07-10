#include <bits/stdc++.h>
using namespace std;

void merge(int arr[],int first,int mid,int last){
    int temp[last-first+1];
    int i=first;
    int j=mid+1;
    int k=0;
    while(i<=mid && j<=last){
        if(arr[i]<arr[j]){
            temp[k] = arr[i];
            i++;
        }else if(arr[i]>arr[j]){
            temp[k] = arr[j];
            j++;
        }else{
            temp[k] = arr[i];
            i++;
            j++;
        }
        k++;
    }
    while(i<=mid){
        temp[k] = arr[i];
        k++;
        i++;
    }
    while(j<=last){
        temp[k] = arr[j];
        k++;
        j++;
    }

    for(int i=0;i<k;i++){
        arr[first+i] = temp[i];
    }
}

void mergesort(int arr[],int first,int last){
    if(first<last){
        int mid = (first+last)/2;
        mergesort(arr,first,mid);
        mergesort(arr,mid+1,last);
        merge(arr,first,mid,last);
    }
}

int main()
{
    // code
    int n=5;
    int arr[] = {3,2,5,6,1};
    mergesort(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}