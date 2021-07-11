#include <bits/stdc++.h>
using namespace std;

void swap(int *a, int *b){
    int temp  = *a;
    *a = *b;
    *b = temp;
}

int qSort(int arr[],int first,int last){
    int i=first+1;
    int pivot = arr[first];
    for(int j=first+1;j<=last;j++){
        if(arr[j]<pivot){
            swap(&arr[i],&arr[j]);
            i+=1;
        }
    }
    swap(&arr[first],&arr[i-1]);
    return i-1;
}

void quickSort(int arr[],int first,int last){
    if(first<last){
        int pos = qSort(arr,first,last);
        cout<<pos<<endl;
        quickSort(arr,first,pos-1);
        quickSort(arr,pos+1,last);
    }
}

int main()
{
    // code
    int n = 8;
    int arr[n] = {4,6,2,5,7,9,1,3};
    quickSort(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}