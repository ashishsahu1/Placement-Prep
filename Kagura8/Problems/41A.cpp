#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    string s1;
    cin >> s1;
    reverse(s.begin(), s.end());
    if (s1 == s)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}