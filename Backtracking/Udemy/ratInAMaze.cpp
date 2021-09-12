#include <bits/stdc++.h>
using namespace std;

//util function to print a matrix
void printMat(vector<vector<int>> mat)
{
    for (int i = 0; i < mat.size(); i++)
    {
        for (int j = 0; j < mat[i].size(); j++)
            cout << mat[i][j] << " ";
        cout << endl;
    }
}

//util function to input a matrix
void inputMat(vector<vector<int>> &mat)
{
    for (int i = 0; i < mat.size(); i++)
    {
        for (int j = 0; j < mat[i].size(); j++)
            cin >> mat[i][j];
    }
}

//return true if the coordinate lies inside the maze and is allowed to move into
bool isSafe(vector<vector<int>> &mat, int x, int y)
{
    return (x >= 0 && y >= 0 && x <= mat.size() - 1 && y <= mat[0].size() - 1 && mat[x][y] == 1);
}

bool findPath(vector<vector<int>> &mat, int currX, int currY, int eX, int eY, vector<vector<int>> &sol, vector<int> d)
{
    //base case
    if (currX == mat.size() - 1 && currY == mat[0].size() - 1 && mat[currX][currY] == 1)
    {
        sol[currX][currY] = 1;
        return true;
    }

    if (isSafe(mat, currX, currY))
    {
        if (sol[currX][currY] == 1)
            return false;

        sol[currX][currY] = 1;

        for (int i = 0; i < d.size(); i++)
        {
            currX += d[i];
            if (findPath(mat, currX, currY, eX, eY, sol, d))
                return true;
            else
                currX -= d[i];

            currY += d[i];
            if (findPath(mat, currX, currY, eX, eY, sol, d))
                return true;
            else
                currY -= d[i];
        }
    }
    return false;
}

int main()
{
    //input of maze
    int n, m;
    cin >> n >> m;
    vector<vector<int>> mat(m, vector<int>(m, 0));
    inputMat(mat);

    vector<int> d = {1, -1};

    //solution vector
    vector<vector<int>> sol(m, vector<int>(n, 0));

    if (findPath(mat, 0, 0, m - 1, n - 1, sol, d))
        printMat(sol);
    else
        cout << "Not able to find path" << endl;

    return 0;
}