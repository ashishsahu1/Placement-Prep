//given a list of n distinct elemetns write a function that lists all subsets of those elements
#include <bits/stdc++.h>
using namespace std;

void print(vector<int> lst, int first,int last){
    for(int i=first;i<=last;i++){
        cout<<lst[i]<<" ";
    }
    cout<<endl;
}

void subset(vector<int> lst,int first, int last){
    if(last == lst.size()){
        first++;
        last=first;
    }
    if(first == lst.size()){
        return;
    }
    print(lst,first,last);
    // cout<<first<<" "<<last<<endl;
    subset(lst,first,last+1);
}

int main()
{
    // code
    int n;
    cin>>n;
    vector<int> lst(n,0);
    for(int i=0;i<n;i++)
        cin>>lst[i];
    
    for(int i=0;i<n;i++)
        cout<<lst[i]<<" ";
    cout<<endl;

    subset(lst,0,0);
    return 0;
}