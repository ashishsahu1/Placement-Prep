#include <bits/stdc++.h>
#define N 4
using namespace std;

void printSol(int board[N][N]){
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            cout<<board[i][j]<<" ";
        }
        cout<<endl;
    }
}

bool isSafe(int board[N][N],int row,int col){
    int i,j;

    //check row on left side
    for(i=0;i<col;i++){
        if(board[row][i]){
            return false;
        }
    }

    //check lower diagonal on left side
    for(i=row,j=col;j>=0 && i<N;i++,j--){
        if(board[i][j]){
            return false;
        }
    }

    //check upper diagonal on left side
    for(i=row,j=col;i>=0 && j>=0;i--,j--){
        if(board[i][j]){
            return false;
        }
    }
    return true;
}

bool solveNQutil(int board[N][N],int col){
    if(col>=N){
        return true;
    }
    for(int i=0;i<N;i++){
        if(isSafe(board,i,col))
        {
            //do
            board[i][col] = 1;

            //recurr
            if(solveNQutil(board,col+1))
                return true;
            
            //undo
            board[i][col] = 0;
        }
    }
    return false;
}

bool solveNQ(){
    int board[N][N] = {{0,0,0,0},{0,0,0,0},{0,0,0,0},{0,0,0,0}};
    if(solveNQutil(board,0)==false){
        cout<<"Unable to find positions"<<endl;
        return false;
    }
    printSol(board);
    return true; 
}

int main()
{
    solveNQ();
    return 0;
}