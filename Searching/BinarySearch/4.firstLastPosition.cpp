#include<iostream>
#include<vector>
using namespace std;

int solve(vector<int> arr,int key){
    int first = 0;
    int last = arr.size() - 1;
    while (first <= last)
    {
        int mid = first + (last - first) / 2;
        if (arr[mid] < key)
        {
            first = mid + 1;
            continue;
        }
        if (arr[mid] > key)
        {
            last = mid - 1;
            continue;
        }
        if (arr[mid] == key)
        {
        }
    }
}

vector<int> firstLastPos(vector<int> arr,int key){
    vector<int> ans;
    
}

int main(){
    vector<int> arr ={5,7,7,8,8,10};
    int key = 7;
    vector<int> ans = firstLastPos(arr,key);
}