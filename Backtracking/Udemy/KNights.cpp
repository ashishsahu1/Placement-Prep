#include <bits/stdc++.h>
using namespace std;

#define N 8

//utility function to print the solution
void printSol(int sol[N][N])
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
            cout << sol[i][j] << "   ";
        cout << endl;
    }
}

//validate the current new index is valid or not. validate for out of board and is already filled or not
bool valid(int sol[N][N], int x, int y)
{
    return (x >= 0 && x < N && y >= 0 && y < N && sol[x][y] == -1);
}

//recursively backtracking for a feasible solution
bool solveKT(int sol[N][N], int currX, int currY, int dx[8], int dy[8], int mv)
{

    //base case
    if (mv == N * N)
    {
        return true;
    }

    for (int i = 0; i < 8; i++)
    {
        int newX = currX + dx[i];
        int newY = currY + dy[i];

        if (valid(sol, newX, newY))
        {
            sol[newX][newY] = mv;
            if (solveKT(sol, newX, newY, dx, dy, mv + 1) == 1)
                return true;
            else
                //backtracking step
                sol[newX][newY] = -1;
        }
    }
    return false;
}

int main()
{
    int sol[N][N];

    //assignment of solution 2D array
    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++)
            sol[i][j] = -1;
    /*
    possible next position for a knight at K
        * 1 * 1 *
        1 * * * 1
        * * K * *
        1 * * * 1
        * 1 * 1 *
    */
    int dx[] = {-2, -1, 1, 2, 2, 1, -1, -2};
    int dy[] = {1, 2, 2, 1, -1, -2, -2, -1};

    //first knight position
    sol[0][0] = 0;

    // solveKT(sol, 0, 0, dx, dy, 1);
    if (solveKT(sol, 0, 0, dx, dy, 1))
        printSol(sol);
    else
        cout << "No solution found" << endl;
    return 0;
}