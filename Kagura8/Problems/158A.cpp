#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n, k;
    cin >> n >> k;

    vector<int> arr(n, 0);
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int x = arr[k - 1];
    int c = 0, c0 = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] >= x and arr[i] != 0)
            c++;
        if (arr[i] == 0)
            c0++;
    }
    if (c0 == arr.size())
        c = 0;
    cout << c << endl;

    return 0;
}