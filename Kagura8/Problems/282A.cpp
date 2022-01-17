#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x = 0;
    int n;
    cin >> n;
    while (n--)
    {
        string s;
        cin >> s;
        if (s[0] == '+')
            ++x;
        else if (s[0] == 'X' and s[1] == '+')
            x++;
        else if (s[0] == '-')
            --x;
        else
            x--;
    }
    cout << x << endl;

    return 0;
}