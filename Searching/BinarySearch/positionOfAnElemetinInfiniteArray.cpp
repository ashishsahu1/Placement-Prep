#include<bits/stdc++.h>
using namespace std;

int binSearch(vector<int> arr,int key){
    int start = 0;
    int gap = 2;
    int end = start+gap;

    //finding start and end in exponential time
    while(true){
        if(arr[start] == key){
            return start;
        }
        if(arr[end]==key){
            return end;
        }
        if (arr[start] < key && arr[end] > key){
            break;
        }
        gap = pow(gap, 2);
        start = end+1;
        end = start+gap;
    }

    while(start<=end){
        int mid = start+(end-start)/2;
        if(arr[mid]<key){
            start = start+1;
        }else if(arr[mid]>key){
            end = end-1;
        }else{
            return mid;
        }
    }
    return -1;
}

int main(){

    vector<int> arr = {2,3,4,5,6,7,8,10,13,15,16,18,19,20,22,24,25,26,28,29,30};
    int key = 22;
    cout<<binSearch(arr,key)<<endl;   
    return 0;
}