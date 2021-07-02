#include <bits/stdc++.h>
using namespace std;

vector<int> addVec(vector<int> lst,int start){
    vector<int> oneVec;
    int n = lst.size();
    while(n){
        if(start==lst.size()){
            start = 0;
        }
        // cout<<lst[start]<<endl;
        oneVec.push_back(lst[start]);
        start++;
        n--;
    }
    return oneVec;
}

vector<int> addVecRev(vector<int> lst,int start){
    vector<int> oneVec;
    int n = lst.size();
    while(n){
        if(start==-1){
            start = lst.size()-1;
        }
        // cout<<lst[start]<<endl;
        oneVec.push_back(lst[start]);
        start--;
        n--;
    }
    return oneVec;
}

int fac(int n){
    if(n==0 || n==1)
        return n;
    return n*(n-1);
}

void permute(vector<int> lst,vector<vector<int>>& finalAns,bool flag,int start){
    if(finalAns.size()==lst.size()){
        flag = false;
    }
    if(finalAns.size()== fac(lst.size())){
        return;
    }    
    if(flag==true){
        finalAns.push_back(addVec(lst,start));
        permute(lst,finalAns,flag,start+1);
    }else{
        finalAns.push_back(addVecRev(lst,start-1));
        permute(lst,finalAns,flag,start-1);
    }
    
}

int main()
{
    // code
    int n;
    cin>>n;
    vector<int> lst(n,0);
    for(int i=0;i<n;i++){
        cin>>lst[i];
    }
    vector<vector<int>> finalAns;
    permute(lst,finalAns,true,0);

    cout<<finalAns.size()<<endl;
    for(int i=0;i<finalAns.size();i++){
        for(int j=0;j<finalAns[i].size();j++){
            cout<<finalAns[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}