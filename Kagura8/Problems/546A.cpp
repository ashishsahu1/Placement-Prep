#include <bits/stdc++.h>
using namespace std;

int main()
{

    int k, n, w;
    cin >> k >> n >> w;
    int tot = 0;
    for (int i = 1; i <= w; i++)
    {
        tot += (i * k);
    }
    int ans = tot - n;
    if (ans < 0)
        ans = 0;
    cout<<ans;
    return 0;
}