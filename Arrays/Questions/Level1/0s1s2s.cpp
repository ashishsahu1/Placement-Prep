#include <bits/stdc++.h>
using namespace std;

int main()
{
    // code
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int one=0,two=0,three=n-1;

    while(n){
        
        if(arr[one]!=1){
            one++;
        }else{
            int temp = arr[one];
            arr[one] = arr[two];
            arr[two] = temp;
        }
        if(arr[two]!=2){
            two++;
        }
        n--;
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    return 0;
}