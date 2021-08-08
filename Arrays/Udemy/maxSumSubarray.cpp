#include <bits/stdc++.h>
using namespace std;

// o(n^3) algorithm
//brute force method
void maxSum(int ar[], int n)
{
    int mxSM = 0;
    int mxS = 0, mxE = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            int sum = 0;
            for (int k = i; k <= j; k++)
            {
                sum += ar[k];
            }
            if (mxSM < sum)
            {
                mxSM = sum;
                mxS = i;
                mxE = j;
            }
        }
    }
    cout << "Maximum sum is " << mxSM << " which start at " << mxS << " and ends at " << mxE << endl;
}

//O(n^2) method
//prefix sum method
void maxSum2(int arr[], int n)
{
    int pref[n], sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
        pref[i] = sum;
    }
    int curr = 0;
    for (int i = 0; i < n; i++)
    {

        for (int j = i; j < n; j++)
        {
            curr = max(curr, i == 0 ? pref[j] : (pref[j] - pref[i - 1]));
        }
    }
    cout << curr << endl;
}

//O(n)
//Kadane's algorithm
void maxSum3(int arr[], int n)
{
    int curr = 0, mxSM = 0;
    for (int i = 0; i < n; i++)
    {
        curr = (curr + arr[i]) > 0 ? curr + arr[i] : 0;
        mxSM = max(curr, mxSM);
    }
    cout << mxSM << endl;
}

void maxSum4(int arr[], int n)
{
    int curr = 0, mxSM = 0;
    for (int i = 0; i < n; i++)
    {
        curr = curr + arr[i];
        if (curr < 0)
        {
            curr = 0;
        }
        mxSM = max(curr, mxSM);
    }
    cout << mxSM << endl;
}

//work for both negative and positive max
void maxSum5(int arr[], int n)
{
    int curr = 0, mxSM = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        curr = curr + arr[i];
        if (curr < arr[i])
        {
            curr = arr[i];
        }
        mxSM = max(curr, mxSM);
    }
    cout << mxSM << endl;
}

int main()
{

    int arr[] = {-2, -1, -4, -2, -4};
    int n = sizeof(arr) / sizeof(int);
    maxSum(arr, n);
    return 0;
}