#include <bits/stdc++.h>
using namespace std;

bool checkSorted(int arr[], int n)
{
    if (n == 0 or n == 1)
    {
        return true;
    }
    return ((arr[0] <= arr[1] and checkSorted(arr + 1, n - 1)));
}

bool checkSorted2(int arr[], int n, int i)
{
    if (i == n - 1)
    {
        return true;
    }
    return (arr[i] < arr[i + 1] and checkSorted2(arr, n, i + 1));
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 7, 8, 9, 10};
    int n = sizeof(arr) / sizeof(int);

    cout << checkSorted(arr, n) << endl;
    cout << checkSorted2(arr, n, 0) << endl;
}