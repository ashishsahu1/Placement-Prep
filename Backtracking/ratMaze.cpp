#include <bits/stdc++.h>
using namespace std;

void findPath(int n,int maze[][4],int i,int j){
    if()
}

int main()
{
    // code
    int n;
    cin>>n;
    int maze[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            maze[i][j]=0;
        }
    }

    maze[0][0]=1;
    maze[1][0]=1;
    maze[3][0]=1;
    maze[1][1]=1;
    maze[2][1]=1;
    maze[3][1]=1;
    maze[3][2]=1;
    maze[1][3]=1;
    maze[3][3]=1;

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<maze[i][j]<<" ";
        }
        cout<<endl;
    }   

    findPath(n,maze,0,0); 
    
    return 0;
}