#include<iostream>
#include<vector>
using namespace std;

int partition(vector<int> &arr,int s,int e){
    int pivot = arr[e];
    // int i=s-1,j=i+1;
    // while(j<e){
    //     if(arr[j]>pivot){
    //         j++;
    //         continue;
    //     }
    //     if(arr[j]<pivot){
    //         i++;
    //         swap(arr[i],arr[j]);
    //         j++;
    //         continue;
    //     }
    // }
    
    // if(j==pivot){
    //     i++;
    //     swap(arr[i],arr[e]);
    // }

    // return i;

    int i=s-1;
    for(int j=s;j<e;j++){
        if(arr[j]<pivot){
            i++;
            swap(arr[i],arr[j]);
        }
    }
    
    swap(arr[i+1],arr[e]);
    return i+1;
}

void quickSort(vector<int> &arr,int s,int e){
    if(s>=e){
        return;
    }
    int p = partition(arr,s,e);
    quickSort(arr,s,p-1);
    quickSort(arr,p,e);
}

int main(){
    vector<int> arr = {10,5,2,0,7,6,4};
    quickSort(arr,0,arr.size()-1);

    for(auto i:arr){
        cout<<i<<" ";
    }
    cout<<endl;
}