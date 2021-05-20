#include <iostream>
using namespace std;

int main()
{
    /* code */
    int arr[5]={4,2,5,1,3};
    int min = INT_MAX;
    int x;
    int n = 5;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            cout<<arr[i]<<" "<<arr[j]<<endl;
            if(arr[i]>arr[j]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
                
            }
        }
    }
    cout<<endl;

    for(int i =0;i<5;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}