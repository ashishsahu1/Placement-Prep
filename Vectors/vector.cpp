#include <bits/stdc++.h>
using namespace std;

int lowerBound(vector<int> A, int Val)
{
    // your code goes here
    int n = A.size();
    int num = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        while (A[i] <= Val)
        {
            num = max(num, A[i]);
        }
    }
    return num;
}

int main()
{
    vector<int> A = {10, 20, 30, 40, 50};
    int Val = 30;
    int ans = lowerBound(A, Val);
    cout << ans << endl;
    return 0;
}