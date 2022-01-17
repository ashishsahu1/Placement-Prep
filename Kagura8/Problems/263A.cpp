#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n = 5;
    int mid = 2;
    int x, y;

    vector<vector<int>> arr(n, vector<int>(n, 0));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
            if (arr[i][j] == 1)
            {
                x = i;
                y = j;
            }
        }
    }
    cout << abs(x - mid) + abs(y - mid) << endl;

    return 0;
}