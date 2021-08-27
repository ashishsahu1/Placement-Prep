#include<bits/stdc++.h>
using namespace std;

void generateUtil(vector<string> ans,string st, int n, int k)
{
    if(k==n){
        st[k] = '\0';
        ans.push_back(st);
        cout<<st<<endl;
        return;
    }
    if(st[k-1]=='1'){
        st[k] = '0';
        generateUtil(ans,st,n,k+1);
    }
    if(st[k-1]=='0'){
        st[k]='0';
        generateUtil(ans,st, n, k + 1);
        st[k]='1';
        generateUtil(ans,st, n, k + 1);
    }
}

void generateAll(int n){
    vector<string> ans;
    if(n<=0){
        return;
    }
    char st[n];
    st[0]='0';
    generateUtil(ans,st,n,1);
    st[0] = '1';
    generateUtil(ans,st,n,1);
}

int main(){
    int n;
    cin>>n;
    generateAll(n);   
    return 0;
}