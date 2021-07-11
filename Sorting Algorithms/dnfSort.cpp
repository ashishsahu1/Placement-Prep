#include <bits/stdc++.h>
using namespace std;

int main()
{
    // code
    int arr[5] = {1,2,0,1,2};
    int zeros = 0,ones = 0,twos = 4;
    while(ones<=twos){
        if(arr[ones]==0){
            swap(arr[zeros],arr[ones]);
            zeros++;
            ones++;
            continue;
        }
        if(arr[ones]==2){
            swap(arr[ones],arr[twos]);
            twos--;
            ones++;
            continue;
        }
        if(arr[ones]==1){
            ones++;
            continue;
        }
    }
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}