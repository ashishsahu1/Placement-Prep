#include <bits/stdc++.h>
using namespace std;

int findDiv(int n)
{
    for (int i = 2; i <= n; i++)
    {
        if (n % i == 0)
        {
            return i;
        }
    }
    return n;
}

int main()
{
    int n, q;
    cin >> n >> q;
    vector<int> arr(n, 0);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    while (q--)
    {
        int L, R;
        cin >> L >> R;
        int sum = 0;
        for (int i = L - 1; i <= R - 1; i++)
        {
            sum += findDiv(arr[i]);
        }
        cout << sum << endl;
    }
    return 0;
}