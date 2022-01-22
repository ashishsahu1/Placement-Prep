#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int stp = 0;
    if (n % 5 == 0)
        stp = n / 5;
    else
        stp = (n / 5) + 1;
    cout << stp << endl;
    return 0;
}