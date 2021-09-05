#include<bits/stdc++.h>
using namespace std;

int countPath(int s_i,int s_j,int e_i,int e_j){
    if(s_i == e_i-1 and s_j == e_j-1 ){
        return 1;
    }
    if(s_i>=e_i || s_j>=e_j){
        return 0;
    }
    return countPath(s_i + 1, s_j, e_i, e_j) + countPath(s_i, s_j+1, e_i, e_j);
}

int main(){

    int n,m;
    cin>>m>>n;
    cout<<countPath(0,0,m,n)<<endl;
    return 0;
}