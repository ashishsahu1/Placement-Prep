#include <bits/stdc++.h>
using namespace std;

int main()
{
    // code
    int n;
    cin>>n;
    //to print prime number till n
    bool arr[n] = {false};
    
    for(int i=2;i<=n;i++){
        if(arr[i]==false){
            for(int j=i+i;j<n;j+=i){
                arr[i] = true;
            }
        }
    }

    for(int i=2;i<=n;i++){
        if(arr[i]==false){
            cout<<i<<" ";
        }
    }
    cout<<endl;

    return 0;
}