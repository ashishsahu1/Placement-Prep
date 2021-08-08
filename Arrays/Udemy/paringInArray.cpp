#include <bits/stdc++.h>
using namespace std;

void pairPrint(vector<vector<int>> ans)
{
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i][0] << " " << ans[i][1] << endl;
    }
    cout << endl;
}

void pairGen(int arr[], int n)
{
    vector<vector<int>> ans;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            vector<int> temp;
            temp.push_back(arr[i]);
            temp.push_back(arr[j]);
            ans.push_back(temp);
        }
    }
    pairPrint(ans);
}

int main()
{

    int arr[] = {11, 12, 13, 14, 15, 16, 17};
    int n = sizeof(arr) / sizeof(int);

    pairGen(arr, n);
    return 0;
}