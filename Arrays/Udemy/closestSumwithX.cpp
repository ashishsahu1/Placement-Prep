#include <bits/stdc++.h>
using namespace std;

pair<int, int> closeSum(vector<int> arr, int x)
{
    int n = arr.size();
    int i = 0;
    int j = n - 1;
    pair<int, int> ans;
    int mingap = INT_MAX, currClose = INT_MAX;
    while (i < j)
    {
        int sum = arr[i] + arr[j];
        if (abs(sum - x) < mingap)
        {
            mingap = abs(sum - x);
            currClose = sum;
            ans.first = arr[i];
            ans.second = arr[j];
        }
        if (sum > x)
        {
            j--;
        }
        else if (sum < x)
        {
            i++;
        }
        else
        {
            j--;
            i++;
        }
    }
    return ans;
}

int main()
{
    vector<int> arr = {10, 22, 28, 29, 30, 40};
    int x = 54;
    cout << closeSum(arr, x).first << " " << closeSum(arr, x).second << endl;
    return 0;
}