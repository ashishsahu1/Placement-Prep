#include <bits/stdc++.h>
using namespace std;

void swapT(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void rev(int arr[], int n)
{
    int i = 0;
    int j = n - 1;
    while (i < j)
    {
        swapT(&arr[i], &arr[j]);
        i++;
        j--;
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
    int arr[] = {1, 2, 3, 4, 5, 6};
    int n = sizeof(arr) / sizeof(int);

    print(arr, n);
    rev(arr, n);
    print(arr, n);

    return 0;
}