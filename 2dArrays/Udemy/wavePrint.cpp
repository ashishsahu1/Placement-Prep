#include <bits/stdc++.h>
using namespace std;

vector<int> WavePrint(int m, int n, vector<vector<int>> arr)
{
    // your code goes here
    vector<int> ans;
    int nCol = n - 1;
    int nRow = m - 1;
    bool down = true;
    int i = nCol;
    
    while (i >= 0)
    {
        if (down == true)
        {
            for (int j = 0; j <= nRow; j++)
            {
                ans.push_back(arr[j][i]);
                down = false;
            }
        }
        else
        {
            for (int j = nRow; j >= 0; j--)
            {
                ans.push_back(arr[j][i]);
                down = true;
            }
        }
        i-=1;
    }
    return ans;
}

int main()
{
    int n;
    int m;
    cin >> m >> n;
    vector<vector<int>> v(m,vector<int>(n,0));

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> v[i][j];
        }
    }

    vector<int> ans = WavePrint(m, n, v);

    for (int i = 0; i < ans.size(); i++)
    {
        cout<<ans[i]<<" ";
    }
    cout<<endl;

    return 0;
}