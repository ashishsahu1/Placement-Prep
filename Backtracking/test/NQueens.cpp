#include<bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool check(vector<vector<int>> &board, int row, int col)
    {
        //straight up
        int i, j;
        for (i = row; i <= 0; i--)
        {
            if (board[i][col] == 1)
            {
                return false;
            }
        }

        //primary diagonal
        for (i = row, j = col; i >= 0 && j >= 0; i--, j--)
        {
            if (board[i][j] == 1)
            {
                return false;
            }
        }

        //sec diagonal
        for (i = row, j = col; i >= 0 && j <= board.size() - 1; i--, j++)
        {
            if (board[i][j] == 1)
            {
                return false;
            }
        }

        return true;
    }

    void clear(vector<vector<int>> &board)
    {
        for (int i = 0; i < board.size(); i++)
        {
            for (int j = 0; j < board[i].size(); j++)
            {
                board[i][j] = 0;
            }
        }
    }

    void solveNQ(vector<vector<string>> &ans, vector<vector<int>> &board, int n, int row)
    {
        cout<<"here"<<endl;
        //base case
        if (row == n)
        {
            string temp;
            for (int i = 0; i < board.size(); i++)
            {
                for (int j = 0; j < board[i].size(); j++)
                {
                    if (board[i][j] == 1)
                    {
                        temp += 'Q';
                    }
                    else
                    {
                        temp += '.';
                    }
                }
            }
            ans.push_back(temp);
            clear(board);
            return;
        }

        for (int col = 0; col < n; col++)
        {
            if (check(board, row, col))
            {
                board[row][col] = 1;
                solveNQ(ans, board, n, row + 1);
                board[row][col] = 0;
            }
        }
    }
    vector<vector<string>> solveNQueens(int n)
    {
        vector<vector<string>> ans;
        vector<vector<int>> board(n, vector<int>(n, 0));

        solveNQ(ans, board, n, 0);
        // cout<<ans.size()<<endl;

        return ans;
    }
};

int main(){
    int n;
    cin>>n;
    Solution s;
    vector<vector<string>> ans = s.solveNQueens(n);

    cout<<ans.size()<<endl;
}