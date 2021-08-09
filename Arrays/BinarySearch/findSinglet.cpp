#include <bits/stdc++.h>
using namespace std;

int findSing(int arr[], int n)
{
    int low = 0, high = n - 1;
    int mid = 0;
    while (low <= high)
    {
        mid = low + ((high - low) / 2);

        //find first occurance of mid
        if (mid > 0 && arr[mid] == arr[mid - 1])
        {
            mid--;
        }
        if (mid < n - 1 && arr[mid] != arr[mid + 1])
        {
            return mid;
        }
        if (mid % 2 != 0)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 2;
        }
    }
    return -1;
}

int main()
{
    /*
      0 1 2 3 4 5 6 7 8  9 10 
    [ 0 0 4 4 5 7 7 8 8 10 10 ]
    
    */

    int arr[] = {0, 0, 4, 4, 5, 5, 7, 7, 8, 8, 10, 12, 12, 14, 14, 15, 15};
    int n = sizeof(arr) / sizeof(int);
    cout << "Found " << arr[findSing(arr, n)] << " at " << findSing(arr, n) << endl;
    return 0;
}