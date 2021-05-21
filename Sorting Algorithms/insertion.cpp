#include <iostream>
using namespace std;

int main()
{
    /* code */
    int temp;
    int arr[8] = {4,2,5,3,1,8,2,5}, n =8;
    int j;
    int key;
    
    for(int i=1;i<n;i++){
        j = i-1;
        key = arr[i];
        while(j>=0 && arr[j]>key){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}