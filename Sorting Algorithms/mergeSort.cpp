#include <bits/stdc++.h>
using namespace std;

void merge(int arr[],int first,int mid,int last){
    
    //forming of two different input array
    int n1 = (mid-first)+1;
    int n2 = (last-mid);

    int temp1[n1];
    int temp2[n2];

    for(int i=0;i<n1;i++)
        temp1[i]=arr[first+i];
    for(int i=0;i<n2;i++)
        temp2[i]=arr[mid+1+i];

    //merging two arrays now    
    int i=0;
    int j=0;
    int k=first;

    while(i<n1 && j<n2){
        if(temp1[i]<=temp2[j]){
            arr[k]=temp1[i];
            i++;
        }else{
            arr[k] = temp2[j];
            j++;
        }k++;
    }
    while(i<n1){
        arr[k]=temp1[i];
        k++;i++;
    }
    while(j<n2){
        arr[k]=temp2[j];
        k++;j++;
    }
}

void print(vector<int> arr){
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void mergeSort(int arr[],int first,int last){
    int mid;
    if(first<last){
        int mid = (first+last)/2;
        mergeSort(arr,first,mid);
        mergeSort(arr,mid+1,last);
        merge(arr,first,mid,last);
    }
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
    mergeSort(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}