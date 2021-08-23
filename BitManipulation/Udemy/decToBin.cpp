#include<bits/stdc++.h>
using namespace std;

int decToBin(int n){
    int ans=0;
    int po=1;
    while(n){
        int x = n&1;
        ans+=(x*po);
        po = po*10;
        // po++;
        n = n>>1;
    }
    return ans;
}

int main(){

    int n;
    cin>>n;
    cout<<decToBin(n)<<endl;
    return 0;
}