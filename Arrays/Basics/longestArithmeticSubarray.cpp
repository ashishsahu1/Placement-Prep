#include <bits/stdc++.h>
using namespace std;

int diff(int a, int b)
{
    return a - b;
}

int main()
{
    // code

    int t;
    cin >> t;
    while (t)
    {
        int n;
        int cd = 0, max = 1, curr = 0, ans = 0;

        cin>>n;
        int arr[n];

        for(int i=0;i<n;i++){
            cin>>arr[i];
        }

        for (int i = 0; i < n - 1; i++)
        {
            cd = diff(arr[i + 1], arr[i]);

            if (curr == cd)
            {
                max += 1;
            }
            else
            {
                max = 1;
            }
            curr = cd;
            if (ans < max)
            {
                ans = max;
            }
            // cout<<ans<<" "<<curr<<" "<<max<<" "<<cd<<endl;
        }
        cout << ans + 1;

        t--;
    }

    return 0;
}