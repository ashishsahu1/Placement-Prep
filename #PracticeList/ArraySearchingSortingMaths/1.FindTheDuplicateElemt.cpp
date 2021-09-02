/*
Find the Duplicate Number

Given an array of integers nums containing n + 1 integers where each integer is in the range [1, n] inclusive.
There is only one repeated number in nums, return this repeated number.
You must solve the problem without modifying the array nums and uses only constant extra space
Example 1:
Input: nums = [1,3,4,2,2]
Output: 2

*/

#include <bits/stdc++.h>
using namespace std;


//sort and then iterate to get duplicate element | (O(nlogn)) | array distorted
int method1(int arr[], int n)
{
    sort(arr, arr + n);
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] == arr[i + 1])
            return arr[i];
    }
    return -1;
}

//hashing | creating a count array which holds the number of each elemt occur | O(n) size and time both
int method2(int arr[], int n)
{
    int count[n + 1] = {0};
    for (int i = 0; i < n; i++)
    {
        count[arr[i]]++;
    }
    for (int i = 0; i <= n + 1; i++)
    {
        if (count[i] > 1)
        {
            return i;
        }
    }
    return -1;
}

//linkedlist cyclic method | O(n) time and O(1) space
int method3(int arr[], int n)
{
    int slow = arr[0];
    int fast = arr[0];

    do
    {
        slow = arr[slow];
        fast = arr[arr[fast]];
    } while (slow != fast);

    fast = arr[0];
    while (slow != fast)
    {
        slow = arr[slow];
        fast = arr[fast];
    }

    return slow;
}

int main()
{
    /*
    https://leetcode.com/problems/find-the-duplicate-number/
    */

    int arr[] = {2, 5, 9, 6, 9, 3, 8, 9, 7, 1};
    int n = sizeof(arr) / sizeof(int);

    cout << method1(arr, n) << endl;
    cout << method2(arr, n) << endl;
    cout << method3(arr, n) << endl;

    return 0;
}