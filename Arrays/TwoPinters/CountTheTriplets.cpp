#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {2, 3, 4};
    int n = sizeof(arr) / sizeof(int);
    int p1 = 0, p2 = p1 + 1, p3 = n - 1;
    sort(arr, arr + n);
    int c = 0;
    while (true)
    {
        if (arr[p1] + arr[p2] == arr[p3])
        {
            c++;
            p3--;
        }
        else
        {
            p3--;
        }
        if (p2 == n - 1)
        {
            break;
        }

        if (p2 == p3)
        {
            p1++;
            p2++;
            p3 = n - 1;
        }
    }
    cout << c << endl;
    return 0;
}