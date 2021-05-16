#include <iostream>
using namespace std;

int main()
{
    int n;

    cout<<"Enter the size of the array : ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cout<<"ENter number : ";
        cin>>arr[i];
    }
    int k;
    cout<<"ENter the key to search : ";
    cin>>k;

    for(int i=0;i<n;i++){
        if(arr[i]==k){
            cout<<"Key found at "<<i+1<<endl;
            break;
        }
    }
    
    return 0;
}