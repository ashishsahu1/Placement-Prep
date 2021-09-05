#include<bits/stdc++.h>
using namespace std;

void printVec(vector<vector<int>> sq){
    for(int i=0;sq.size();i++){
        for(int j=0;j<sq[i].size();j++){
            cout<<sq[i][j]<<" ";
        }
        cout<<endl;
    }
}

void genMagic(vector<vector<int>> sq,int n,int row){
    if(row == n){
        return;
    }
    for(int col = 0;col<n;col++){
        sq[row][col]=
    }
}

int main(){

    /*
        - - -
        - - -
        - - -

        k==15
    */   

    int n;
    cin>>n;
    vector<vector<int>> sq(n,vector<int>(n,0));

    genMagic(sq,n,0);
    return 0;
}