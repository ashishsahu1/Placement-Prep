#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool binarySearch1(vector<int> arr,int key){
    return binary_search(arr.begin(),arr.end(),key);
}

int binarySearch2(vector<int> arr, int key){
    int first = 0;
    int end = arr.size()-1;
    while(first<=end){
        int mid = first + (end-first)/2;
        if(arr[mid]==key){
            return mid;
        }
        if(arr[mid]<key){
            first = mid+1;
            continue;
        }
        if(arr[mid]>key){
            end = mid-1;
            continue;
        }
    }
    return -1;
}

    int main()
{
    vector<int> arr = {-2,-1,3,5,8,12,34,56,589,1000};
    int key = 11;
    cout<<binarySearch1(arr,key)<<endl;
    cout<<binarySearch2(arr,key)<<endl;
}