#include <bits/stdc++.h>
using namespace std;

int lowBound(int arr[], int n, int val)
{
    int first = 0;
    int last = n - 1;
    int currMX = arr[first];
    while (first <= last)
    {
        int mid = first + ((last - first) / 2);
        if (arr[mid] == val)
        {
            return arr[mid];
        }
        else if (arr[mid] < val)
        {
            first = mid + 1;
        }
        else
        {
            last = mid - 1;
        }
    }
    return arr[last];
}

int main()
{

    int arr[] = {-1, -1, 2, 3, 4, 5};
    // int arr[] = {1, 2, 3, 5, 6, 7, 8};
    int n = sizeof(arr) / sizeof(int);
    int val = 4;
    cout << lowBound(arr, n, val) << endl;
    return 0;
}