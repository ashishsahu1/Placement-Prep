#include <bits/stdc++.h>
using namespace std;

int main()
{

    int currCap = 0, mxCap = 0;
    int n;
    cin>>n;
    while (n--)
    {
        int entry, ext;
        cin >> ext >> entry;
        currCap += entry;
        currCap -= ext;
        mxCap = max(currCap, mxCap);
    }
    cout << mxCap << endl;
    return 0;
}