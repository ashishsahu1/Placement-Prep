#include <bits/stdc++.h>
using namespace std;

//O(n^2)---- brute force method: iterating through each of the elements
void searchMethod1(vector<vector<int>> v, int key)
{
    for (int i = 0; i < v.size(); i++)
    {
        for (int j = 0; j < v[0].size(); j++)
        {
            if (v[i][j] == key)
            {
                cout << "Found at " << i << " and " << j << endl;
            }
        }
    }
}

//o(n*log(n))----- binary searching each row for the required key
void searchMethod2(vector<vector<int>> v, int key)
{
    int found_i, found_j;
    for (int i = 0; i < v.size(); i++)
    {
        int first = 0;
        int last = v[i].size() - 1;
        int mid;
        while (first <= last)
        {
            mid = (first + last) / 2;
            if (v[i][mid] == key)
            {
                found_i = i;
                found_j = mid;
                break;
            }
            else if (v[i][mid] < key)
            {
                first = mid + 1;
            }
            else
            {
                last = mid - 1;
            }
        }
    }
    cout << "Found at " << found_i << " and " << found_j << endl;
}

//smarter approach only work if the matrix is sorted both rows and column wise
void searchMethod3(vector<vector<int>> v, int key)
{
    int i = 0;
    int j = v[0].size() - 1;
    while (i < v.size() || j >= 0)
    {
        // cout<<i<<" "<<j<<" "<<v[i][j]<<endl;
        if (v[i][j] == key)
        {
            cout << "Found at " << i << " and " << j << endl;
            break;
        }
        else if (v[i][j] < key)
        {
            i++;
        }
        else if(v[i][j]>key)
        {
            j--;
        }
    }
    
}

int main()
{

    int n;
    int m;
    cin >> m >> n;
    vector<vector<int>> v(m, vector<int>(n, 0));

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> v[i][j];
        }
    }

    int key;
    cin >> key;

    searchMethod1(v, key);
    searchMethod2(v, key);
    searchMethod3(v, key);
    return 0;
}