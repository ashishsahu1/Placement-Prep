#include <bits/stdc++.h>
using namespace std;

int findLarge(int arr[], int n)
{
    int mx = INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>mx){
            mx = arr[i];
        }
    }
    return mx;
}

void countSort(int arr[], int n)
{
    int mx = findLarge(arr, n);
    cout << mx << endl;
    int count[mx+1] = {0};
    for (int i = 0; i < n; i++)
    {
        count[arr[i]]++;
    }
    int j = 0;
    for (int i = 0; i <= mx; i++)
    {
        int x = count[i];
        while (x)
        {
            arr[j] = i;
            x--;
            j++;
        }
    }
}

void print(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{

    int arr[] = {5, 3, 2, 5, 4, 2, 1, 3, 1};
    int n = sizeof(arr) / sizeof(int);
    print(arr, n);
    countSort(arr, n);
    print(arr, n);
    return 0;
}