#include <bits/stdc++.h>
using namespace std;

bool check(int n)
{
    vector<int> count(10, 0);
    while (n)
    {
        count[n % 10]++;
        n /= 10;
    }
    for (int i = 0; i < 10; i++)
    {
        if (count[i] > 1)
            return false;
    }
    return true;
}

int main()
{

    int x;
    cin >> x;
    for (int i = x + 1;; i++)
    {
        if (check(i))
        {
            cout << i << endl;
            break;
        }
    }
    return 0;
}