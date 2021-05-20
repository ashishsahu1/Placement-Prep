#include <iostream>
using namespace std;

int main()
{
    /* code */
    int arr[5]={4,2,5,1,3};
    int min = INT_MAX;
    int x;
    for(int i=0;i<4;i++){
        for(int j=i;j<5;j++){
            if(arr[j]<min){
                min = arr[j];
                x = j;
            }
        }
        arr[x] = arr[i];
        arr[i] = min;
        min = INT_MAX;
        cout<<x<<" "<<arr[i]<<" "<<arr[x]<<endl;
    }
    cout<<endl;

    for(int i =0;i<5;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}