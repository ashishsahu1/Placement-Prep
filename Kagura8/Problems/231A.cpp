#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin >> n;
    int c = 0;
    while (n--)
    {
        int x1, x2, x3;
        cin >> x1 >> x2 >> x3;
        if ((x1 + x2 + x3) >= 2)
            c++;
    }
    cout << c << endl;
    return 0;
}