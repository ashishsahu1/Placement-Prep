#include <bits/stdc++.h>
using namespace std;

int main()
{

    long long int n;
    cin >> n;
    int c = 0;
    while (n)
    {
        int x = n % 10;
        n = n / 10;
        if (x == 4 or x == 7)
            c++;
        
    }

    if (c==4 or c==7)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}