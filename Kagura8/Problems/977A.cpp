#include <bits/stdc++.h>
using namespace std;

void fun(int &n)
{
    if (n % 10 == 0)
        n = n / 10;
    else
        n = n - 1;
}

int main()
{

    int n, k;
    cin >> n >> k;
    while (k--)
        fun(n);

    cout << n << endl;
    return 0;
}