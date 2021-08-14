#include<bits/stdc++.h>
using namespace std;

void print(vector<vector<int>> arr){
    for(int i=0;i<arr.size();i++){
        for(int j=0;j<arr[i].size();j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}

void printSpiral(vector<vector<int>> arr){
    int n = arr.size();
    int m = arr[0].size();
    int strtRow,strtCol, endRow,endCol;
    strtRow = 0;
    strtCol=0;
    endRow=n-1;
    endCol=m-1;

    while(strtCol <=endCol && strtRow<=endRow){
        for(int col=strtCol;col<=endCol;col++){
            cout<<arr[strtRow][col]<<" ";
        }
        
        for(int row=strtRow+1;row<=endRow;row++){
            cout<<arr[row][endCol]<<" ";
        }
        
        for(int col=endCol-1;col>=strtCol;col--){
            if(strtCol==endCol){
                break;
            }
            cout<<arr[endRow][col]<<" ";
        }
       
        for(int row = endRow-1;row>strtRow;row--){
            if(strtRow == endRow){
                break;
            }
            cout<<arr[row][strtCol]<<" ";
        }
        

        strtRow++;
        strtCol++;
        endRow--;
        endCol--;
    }


    
    
}

int main()
{
    int n;
    int m;
    cin>>n>>m;
    vector<vector<int>> arr(n,vector<int> (m,0));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }   

    // print(arr); 
    cout<<endl;
    printSpiral(arr);
    return 0;
}