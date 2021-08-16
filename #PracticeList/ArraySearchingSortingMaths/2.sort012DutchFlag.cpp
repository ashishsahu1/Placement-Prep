#include<bits/stdc++.h>
using namespace std;

void sort0122(vector<int> &nums)
{
    sort(nums.begin(), nums.end());
    int n = nums.size();
    int mid = 0, low = 0, high = n - 1;
    while (mid <= high)
    {
        if (nums[mid] == 0)
        {
            swap(nums[mid], nums[low]);
            low++;
        }
        if (nums[mid] == 2)
        {
            swap(nums[mid], nums[high]);
            high--;
        }
        mid++;
    }
}

void sort012(vector<int>& arr,int n){
    int zeroP = 0,oneP = 0,twoP = n-1;
    while(twoP>=oneP){
        switch(arr[oneP]){
            case 0:
                swap(arr[zeroP],arr[oneP]);
                zeroP++;
                break;
            case 1:
                oneP++;
                break;
            case 2:
                swap(arr[oneP],arr[twoP]);
                twoP--;
                break;
        }
    }
}

void printVect(vector<int> arr){
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){

    vector<int> arr ={1,2,0,0,2,1,1,0,2,2,0};
    int n =arr.size();
    // printVect(arr);
    sort012(arr,n);  
    // sort0122(arr);
    printVect(arr);  
    return 0;
}