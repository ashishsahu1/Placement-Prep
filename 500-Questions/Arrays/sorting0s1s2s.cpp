#include <bits/stdc++.h>
using namespace std;

//returning a new array after generating it by the help of countings of 0s, 1s and 2s.
int* sortMethod1(int arr[],int n){
    int n0=0,n1=0,n2=0;
    for(int i=0;i<n;i++){
        if(arr[i] == 0)
            n0++;
        else if(arr[i] == 1)
            n1++;
        else
            n2++;
    }
    n2 = n1+n0+n2;
    n1= n1+n0;
    
    int* ans = new int[n];
    for(int i=1;i<=n;i++){
        if(i<=n0)
            ans[i] = 0;
        else if(i<=n1)
            ans[i] = 1;
        else
            ans[i] = 2;
    }
    return ans;

}

//printing 0s 1s and 2s after counting the numbers of the each
void sortMethod2(int arr[],int n){
    int n0=0,n1=0,n2=0;
    for(int i=0;i<n;i++){
        if(arr[i] == 0)
            n0++;
        else if(arr[i] == 1)
            n1++;
        else
            n2++;
    }
    n2 = n1+n0+n2;
    n1= n1+n0;

    for(int i=1;i<=n;i++){
        
        if(i>n1)
            cout<<"2"<<" ";
        else if(i>n0)
            cout<<"1"<<" ";
        else
            cout<<"0"<<" ";
    }
}

//swapping method to solvce this problem
void sortMethod3(int arr[],int n){
    int p0=0,p1=0,p2=n-1;
    // cout<<p0<<" "<<p1<<" "<<p2<<endl;
    while(p1<p2-1){
        if(arr[p1]==0){
            swap(arr[p1],arr[p0]);
            p0++;
        }
        if(arr[p1]==1){
            p1++;
        }
        if(arr[p1]==2){
            swap(arr[p1],arr[p2]);
            p2--;
        }
    }
}

int main()
{
    // code
    int arr[11] = {1,2,0,2,0,1,2,2,1,0,1};
    int n=11;

    //method 1
    int* ans = sortMethod1(arr,n);
    for(int i=1;i<=n;i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;

    //method 2
    sortMethod2(arr,n);
    cout<<endl;

    //method 3
    sortMethod3(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}