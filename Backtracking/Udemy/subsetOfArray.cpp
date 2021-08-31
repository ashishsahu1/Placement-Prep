#include<iostream>
#include<vector>
#include <iterator>
#include <algorithm>
using namespace std;

void getSub(vector<int> inp,vector<int> out,int i,int j){
    
    //base condition
    if(i==inp.size()){
        for(int i:out){
            cout<<i<<" ";
        }
        cout<<endl;
        return;
    }

    //rec stage
    out.push_back(inp[i]);
    getSub(inp,out,i+1,j+1);

    //backtrack stage
    out.pop_back();
    getSub(inp,out,i+1,j);
}

int main(){
    int n;
    cin>>n;
    vector<int> arr(n,0),out;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    getSub(arr,out,0,0);

}