// factorial of n

#include <bits/stdc++.h>
using namespace std;

int fn(int n)
{
    // base condition
    if (n == 0 || n == 1)
    {
        return 1;
    }

    //recursive condition
    return fn(n - 1) * n;
}

int main()
{

    int n;
    cin >> n;
    cout << fn(n);
    return 0;
}