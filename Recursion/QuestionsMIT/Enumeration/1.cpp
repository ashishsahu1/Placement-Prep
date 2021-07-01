//given a list of n distinct elemetns write a function that lists all subsets of those elements
#include <bits/stdc++.h>
using namespace std;

vector<int> addVec(vector<int> lst, int first,int last){
    vector<int> sbst;
    for(int i=first;i<=last;i++){
        // cout<<lst[i];
        sbst.push_back(lst[i]);
    }
    // cout<<sbst.size()<<endl;
    return sbst;
}

void subset(vector<int> lst,int first, int last,vector<vector<int>>& finalAns){
    if(last == lst.size()){
        first++;
        last=first;
    }
    if(first == lst.size()){
        return;
    }

    finalAns.push_back(addVec(lst,first,last));
    // cout<<finalAns.size()<<endl;
    subset(lst,first,last+1,finalAns);

}

int main()
{
    // code
    int n;
    cin>>n;
    vector<int> lst(n,0);
    vector<vector<int>> finalAns;
    for(int i=0;i<n;i++)
        cin>>lst[i];
    
    // for(int i=0;i<n;i++)
    //     cout<<lst[i]<<" ";
    // cout<<endl;

    subset(lst,0,0,finalAns);
    // cout<<finalAns.size()<<endl;

    for(int i=0;i<finalAns.size();i++){
        for(int j=0;j<finalAns[i].size();j++){
            cout<<finalAns[i][j]<<"  ";
        }
        cout<<endl;
    }
    return 0;
}