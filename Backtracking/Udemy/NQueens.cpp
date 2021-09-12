#include<bits/stdc++.h>
using namespace std;

int isSafe(int n,vector<vector<int>> board,int row,int col){

    /*same column 
        - - - -
        - - - -
        * * Q *
        - - - -
    */
    for(int i=0;i<n;i++){
        if(board[i][col] == 1){
            return 0;
        }
    }

    /* primary diagonal ('\ diaganal')
        * - - -
        - * - -
        - - Q -
        - - - -
    */
    for(int i=row,j=col;i>=0 && j>=0;i--,j--){
        if(board[i][j]==1){
            return 0;
        }
    }
    
    /* secondary diagonal ('/ diagonal')
        - - - -
        - - - *
        - - Q -
        - - - -
    */
    for(int i=row,j=col;i>=0 && j<=n;i--,j++){
        if(board[i][j]==1){
            return 0;
        }
    }

    return 1;
}

//printing board when base case reaches
void printVect(vector<vector<int>> &board){
    for(int i=0;i<board.size();i++){
        for(int j=0;j<board[i].size();j++){
            cout<<board[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}

// Backtracking logic for NQueens problem
void NQueens(int n,vector<vector<int>> &board,int row){

    /*
    BASE CASE
    if N queens solution is found successfully print the solution
    */
    if(row == n){
        printVect(board);
        return;
    }

    //looping thorugh each columns 
    for(int col=0;col<n;col++){
        
        //checking if current place is safe
        if(isSafe(n,board,row,col)){
            board[row][col] = 1;
            NQueens(n,board,row+1);
            
            //backtracking step
            board[row][col] = 0;
        }
    }
}

int main(){
    int n;
    cin>>n;
    vector<vector<int>> board(n,vector<int> (n,0));
    NQueens(n,board,0);

    return 0;
}