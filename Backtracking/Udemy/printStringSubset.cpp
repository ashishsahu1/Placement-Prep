#include<iostream>
#include<vector>
using namespace std;

void getSub(string inp,string out,int i){
    //base case
    if(i==inp.length()){
        if(out.empty())
            cout<<"_"<<endl;
        else
            cout<<out<<endl;
        return;    
    }

    //recursion case
    //including the ith letter  
    getSub(inp,out+inp[i],i+1);

    //not including ith letter (actual backtracking code)
    getSub(inp,out,i+1);
}

int main(){
    string s,out="";
    getline(cin,s);
    getSub(s,out,0);
}