#include <bits/stdc++.h>
using namespace std;

void calcSum(int i,int arr[],int n,int t,vector<int>& curr, vector<vector<int>>& ans){
    if(i==n){
        if(t==0){
            ans.push_back(curr);
        }
    return;
    }
    
    //do
    if(arr[i]<=t){
        curr.push_back(arr[i]);
        calcSum(i,arr,n,t-arr[i],curr,ans);
        curr.pop_back();
    }    
    calcSum(i+1,arr,n,t,curr,ans);
}

vector<vector<int>> combSum(int arr[],int n,int target){
    vector<int> currCom;
    vector<vector<int>> ans;
    calcSum(0,arr,n,target,currCom,ans);
    return ans;
}

int main()
{
    // code
    int n = 4;
    int arr[n] = {2,4,6,8};
    int k = 8;
    vector<vector<int>> ans = combSum(arr,n,k); 
    cout<<ans.size()<<endl;
    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    return 0;
}