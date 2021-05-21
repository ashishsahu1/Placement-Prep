#include <bits/stdc++.h>
using namespace std;

int main()
{
    // code
    int arr[3] = {1,2,2},sum=0,final = 0;
    int n = 3,i,j;
    for(i=0;i<n;i++){
        sum = 0;
        for(j=i;j<n;j++){
            sum=sum+arr[j];
            final = final+sum;
            cout<<sum<<endl;
        }  
        // cout<<" fi : "<<final<<"  Sum :"<<sum<<endl;
    }
    cout<<"FInal sum : "<<final;
    return 0;
}