#include <bits/stdc++.h>
using namespace std;

int setBit(int n, int p)
{
    return (n | (1 << p));
}

int main()
{
    // code
    int n;
    int p;
    cin >> n;
    cin >> p;
    // cout << (n | (1 << p)) << endl;

    cout<<setBit(n,p)<<endl;
    return 0;
}