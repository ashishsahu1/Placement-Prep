#include <bits/stdc++.h>
using namespace std;

void printSubArraySum(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            int sum = 0;
            for (int k = i; k <= j; k++)
            {
                sum += arr[k];
                // cout << arr[k] << " ";
            }
            cout << sum << endl;
        }
    }
}

int main()
{

    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int n = sizeof(arr) / sizeof(int);
    printSubArraySum(arr, n);
    return 0;
}